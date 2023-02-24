#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import rospy

#import jog_xyz
import jog_xyz_safeoff2
#import multi_functional_jog
import time
# import DR_init
# from DSR_ROBOT import *

def Main():
 # multi_functional_jog.start()
 #jog_xyz.start()
  jog_xyz_safeoff2.start()
if __name__ == "__main__": 
    Main()

  

   
    while not rospy.is_shutdown():
     #  state=  get_robot_state()
     #  #print(state)
     #  MY_flag = False
     pass
     #  if state==10 or state==3:
     #       MY_flag=True
     #       if MY_flag==True:
     #                            print("equal")
                                
     #                            set_robot_control(CONTROL_RESET_SAFET_OFF)
     #                            time.sleep(2)
     #                            MY_flag=False
   
    
