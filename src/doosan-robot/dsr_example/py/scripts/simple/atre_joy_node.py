#!/usr/bin/env python3
# -*- coding: utf-8 -*-
import rospy
import os
import sys
import rospy
from sensor_msgs.msg import Joy
import joyfilterfinal 
import threading
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

print("CLASS1")
def firstmove():
                joyfilterfinal.nameSpaceObj.amovejx(joyfilterfinal.robomovement,vel=100,acc=100,ref=DR_BASE,ra= DR_MV_RA_OVERRIDE,sol=2)
                
            
def secondmove():
                           
                joyfilterfinal.nameSpaceObj.amovejx(joyfilterfinal.robomovement,vel=100,acc=100,ref=DR_BASE,ra= DR_MV_RA_OVERRIDE,sol=2)
                print(joyfilterfinal.robomovement)
        
         # rospy.spin()


