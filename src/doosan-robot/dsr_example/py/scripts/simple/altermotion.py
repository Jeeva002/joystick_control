#!/usr/bin/env python3
# -*- coding: utf-8 -*-
import rospy
import os
import sys
import rospy
from sensor_msgs.msg import Joy 
sys.dont_write_bytecode = True
sys.path.append( os.path.abspath(os.path.join(os.path.dirname(__file__),"../../../../common/imp")) ) 

jog_target = [0, 0, 0, 0, 0, 0]
home = [0,0,0,0,0,0]
ROBOT_ID     = "dsr01"        
ROBOT_MODEL  = "a0509"   
import DR_init
DR_init.__dsr__id = ROBOT_ID
DR_init.__dsr__model = ROBOT_MODEL

from DSR_ROBOT import *

def alter_thread():
    alter_motion(dX)

dX = [10,0,0,10,0,0]

J00 = posj(0,0,90,0,90)
X1 = posx(559.0, 200, 651.5, 180, -180.0, 180)
X2 = posx(559.0, 200, 400, 180, -180.0, 180)







 
if __name__ == "__main__": 
   while not rospy.is_shutdown():
    # pass
     movej(J00,vel=50,acc=100)
     enable_alter_motion(n=5,mode=DR_DPOS, ref=DR_BASE, limit_dPOS=[50,90],limit_dPOS_per=[10,10])
     th_id = thread_run(alter_thread, loop=True)
    # T1 = threading.Thread(target=alter_thread,loop=True)
   #  T1.start()
   #  T1.join()
    # movel(X1,v=50,a=100,r=30)
     #movel(X2,v=50,a=100)

    # thread_stop(th_id)
     #disable_alter_motion()

    
               