#!/usr/bin/env python3
# -*- coding: utf-8 -*-
import rospy
import os
import threading, time
import sys
import rospy
from sensor_msgs.msg import Joy 
from dsr_msgs.msg import JogMultiAxis
sys.dont_write_bytecode = True
sys.path.append( os.path.abspath(os.path.join(os.path.dirname(__file__),"../../../../common/imp")) ) 

jog_target = [0, 0, 90, 0, 90, 0]

#ready=[-2,366,443,164,178,74]
ready = [0,0,90,0,90,0]
speed = 100
ROBOT_ID     = "dsr01"        
ROBOT_MODEL  = "a0509"   

import DR_init
DR_init.__dsr__id = ROBOT_ID
DR_init.__dsr__model = ROBOT_MODEL

from DSR_ROBOT import *
r = CDsrRobot(ROBOT_ID, ROBOT_MODEL)
jog_multi = rospy.Publisher('/'+ROBOT_ID +ROBOT_MODEL+'/jog_multi', JogMultiAxis, queue_size=10)
ready_front=[367.0,0.0,440.0,4.17,-180.0,4.17]
ready_fronttest=[500.0, 50.0, 500.0, 0.17, 0.0, 0]

fkin1=[90.841,84.61,79.64,0,0,0]

ready_front2=[450.0,0.0,440.0,4.17,-180.0,4.17]
ready_left=[0.0,-367.0,440.0,94.17,-180.0,-175.83]
jog_axis = [0, 0, 0, 0, 0, 0]
q1=[0.0,40.919,1.00,0.0,138.081,0.00]
q2left=[-29.947,31.546,1.00,-0.00,147.454,-29.947]
q2x=[779.55,34.5,915.94,0,180,0]



def joy_data(data):
         if data.axes[1]>0:
            
            #jog_target[0] += 1
           # jog_target[1] += 1
           # jog_target[2] += 1
            #jog_target[3] += 1
            #jog_target[4] += 1
            #jog_target[5] += 1
            #JOG_AXIS_TASK_X=[300]
             #msg=JogMultiAxis()
         #   jog_axis[0] = round(800*data.axes[0],1)
          #  jog_axis[1] = round(800*data.axes[1],1)
         #   jog_axis[2] = round(800*data.axes[2],1)
         #   jog_axis[3]= round(800*data.axes[3],1)
          #  jog_axis[4]= round(800*data.axes[4],1)
          #  jog_axis[5]= round(800*data.axes[5],1)
           # msg.jog_axis[1]= 50
            #msg.speed=100
            jog_axis[0] += 0.1
          #  jog_axis[1] += 0.1
           # jog_axis[2] += 0.1
            print("0=",jog_axis[0])
            print("1=",jog_axis[1])
            print("2=",jog_axis[2])
            #msg.speed=80
          #  movej(ready_front,vel=40,acc=40)
            r.movel(jog_axis, time=0.001, ref=DR_BASE, mod=DR_FC_MOD_REL)
           # movel(ready_left,vel=100,acc=100)
            print(get_current_posx(ref=DR_BASE))
            

            
           # print(jog_axis[0])
           # print(jog_axis[1])
            #print(jog_axis[2])
           # print(jog_axis[3])
           # print(jog_axis[4])
           # print(jog_axis[5])
            #jog_multi.publish(ready_fronttest,1, speed)
           # print(get_current_posj())
            #x2 = fkin(q2left, DR_BASE)
            #print("posx:",x2)
           
#        else:
            # jog_multi.publish(msg.jog_axis,0, speed)
  #           print("not moved")
            
     
   

def start():
    print("start")
   # rospy.Subscriber("joy", Joy,joy_data)
    rospy.init_node('maintesting')
   # joy_data()
  #  converter()
    rospy.spin()


            
if __name__ == "__main__": 
   while not rospy.is_shutdown():
     start()   
     
