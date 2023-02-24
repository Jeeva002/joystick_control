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
home = [0,0,90,0,90,0]
ROBOT_ID     = "dsr01"        
ROBOT_MODEL  = "a0509"   
import DR_init
DR_init.__dsr__id = ROBOT_ID
DR_init.__dsr__model = ROBOT_MODEL

from DSR_ROBOT import *

def joy_data(data):
        if data.axes[1] >0:
            jog_target[0] += 1 
            print("increased",jog_target[0])
            print("planning")
         #   amovel(jog_target,vel=40,acc=40)
            amovel(jog_target, time=0.5,ref=DR_BASE, mod=DR_FC_MOD_REL)
            amovel(jog_target, time=0.5,ref=DR_BASE, mod=DR_FC_MOD_REL)
        elif data.buttons[1] ==1 :
         movej(jog_target,vel=40,acc=40)
         print("executed")

        elif data.axes[1] < 0:
         jog_target[3] -= 0.1 
         print("decreased",jog_target[3])
         print("planning")

        elif data.buttons[4]==1:
            movej(home,40,40)
            print("homming")
       
   
def start():
        rospy.Subscriber("joy", Joy,joy_data)
        rospy.init_node('joyfilter')   
         
