#!/usr/bin/env python3
# -*- coding: utf-8 -*-
import rospy
import os
import sys
import rospy
from sensor_msgs.msg import Joy 
import threading, time
sys.dont_write_bytecode = True
sys.path.append( os.path.abspath(os.path.join(os.path.dirname(__file__),"../../../../common/imp")) ) 

jog_target = [0, 0, 0, 0, 0, 0]
home = [0,0,0,0,0,0]
second=[0,0,90,90,0,0]
third=[90,0,90,90,0,0]
first=[0,0,90,0,0,0]
fourth=[90,0,90,90,90,0]

ROBOT_ID     = "dsr01"        
ROBOT_MODEL  = "a0509"   
import DR_init
DR_init.__dsr__id = ROBOT_ID
DR_init.__dsr__model = ROBOT_MODEL

from DSR_ROBOT import *
pause_resume_event = threading.Event()
stop_event = threading.Event()
pause_flag=False
q0 = posj(0,0,0,0,0,0)
q6 = posj(0, 0, 90, 0, 0, 0)
q7 = posj(-90, 0, 90, 0, 0, 0) 
q8 = posj(-90, 0, 90, 90, 0, 0) 
q9 = posj(-90, 0, 90, 90, 90, 0)
q10 = posj(-90, 0, 90, 90, 90, 90)
def DR_movement(data):
 
   while True:
     
     if stop_event.is_set():
        print('existing')
     else:    
        pause_resume_event.wait()
        movej(q0,vel=100,acc=100)
        pause_resume_event.wait()
        movej(q6,vel=100,acc=100)
       # wait()
       # DR_SSTOP
        pause_resume_event.wait()
        movej(q7,vel=100,acc=100)
      
        pause_resume_event.wait()
        movej(q8,vel=100,acc=100)
        pause_resume_event.wait()
        movej(q9,vel=100,acc=100)

def start():
    print("start")
    rospy.Subscriber("joy", Joy,signal_check)   
    T1 = threading.Thread(target=DR_movement,args=(data))
    T1.start()
    rospy.spin()
a=1 
def signal_check(data):
   if data.buttons[2]==1:
       print("thread initialised")
      # time.sleep(5)
       pause_resume_event.clear()
       print("paused")
   elif data.buttons[3]==1:
           pause_resume_event.set()
           print("resumed")
    
  
pause_resume_event.set()  
if __name__ == "__main__": 
    rospy.init_node('single_robot_simple_py')
   # start()
    T1 = threading.Thread(target=start)
    T1.start()
    
    while not rospy.is_shutdown():
     if a==10:
         print("hiii")
   
           
        
    