#!/usr/bin/env python3
# -*- coding: utf-8 -*-
import rospy
import sys
import os
import statistics
from sensor_msgs.msg import Joy


sys.dont_write_bytecode = True
sys.path.append( os.path.abspath(os.path.join(os.path.dirname(__file__),"../../../../common/imp")) ) 

ROBOT_ID     = "dsr01"        
ROBOT_MODEL  = "a0509"  

import DR_init
DR_init.__dsr__id = ROBOT_ID
DR_init.__dsr__model = ROBOT_MODEL
from DSR_ROBOT import *

nameSpaceObj = CDsrRobot(ROBOT_ID, ROBOT_MODEL)






robomovement=[0,0,0,0,0,0]
robomovement1=[0,0,0,0,0,0]
home_pos=posj(0,0,0,0,0,0)
ready_pos=posj(0,-10,100,0,90,0)

movement_flag = True
class roboCore:

    def __init__(self):
    
      self.countx = 0 
      self.abstorel_count=0
     
      self.robovelocity=100
      self.roboacceleration=100
      self.homeflag=False
      self.motion_split_flag=False
      self.first_mov_flag=False      
      self.second_mov_flag = False
      self.ry_flag=False
      self.pos_first_flag=False
      self.pos_second_flag=False
      self.ori_first_flag=False
      self.ori_second_flag=False
      
    def axes_function(self, joy_x,joy_y,joy_z,joy_rx,joy_ry,joy_rz):
           
      
           self.rob_x = [0]
           self.rob_y = [0]
           self.rob_z = [0]
           self.rob_rx = [0]
           self.rob_ry = [0]
           self.rob_rz = [0]

           self.rob_x.append(joy_x)
           self.rob_y.append(joy_y)
           self.rob_z.append(joy_z)
           self.rob_rx.append(joy_rx)
           self.rob_ry.append(joy_ry)
           self.rob_rz.append(joy_rz)

           self.countx += 1 
           self.abstorel_count += 1

           if self.countx == 100:
            
                 x_average=statistics.mean(self.rob_x)
                 y_average=statistics.mean(self.rob_y)
                 z_average=statistics.mean(self.rob_z)
                 rx_average=statistics.mean(self.rob_rx)
                 ry_average=statistics.mean(self.rob_ry)
                 rz_average=statistics.mean(self.rob_rz)
                 if self.pos_first_flag == True:
                 
                      ABS_TO_REL =get_current_tool_flange_posx()
                  
                      robomovement[0]=ABS_TO_REL[0]+round(x_average,1)
                      robomovement[1]=ABS_TO_REL[1] +round(y_average,1)
                      robomovement[2]=ABS_TO_REL[2] +round(z_average,1)
                      robomovement[3]=ABS_TO_REL[3] +round(rx_average,1)
                      robomovement[4]=ABS_TO_REL[4] +round(ry_average,1)
                      robomovement[5]=ABS_TO_REL[5] +round(rz_average,1)
                      nameSpaceObj.amovejx(robomovement,vel=70,acc=70,sol=3)
                      print("first pos")
                      self.pos_second_flag = True
                      self.pos_first_flag=False
                
                      joyJogFlag =True 
                      self.countx=0
                      if joyJogFlag :
                      
                            self.rob_x.clear()
                            self.rob_y.clear()
                            self.rob_z.clear()
                            self.rob_rx.clear()
                            self.rob_ry.clear()
                            self.rob_rz.clear()
                            joyJogFlag = False 
              
                  
                 elif self.pos_second_flag == True: 
            

                      robomovement[0]=round(robomovement[0],1) + round(x_average,1)
                      robomovement[1]=round(robomovement[1],1) + round(y_average,1)
                      robomovement[2]=round(robomovement[2],1) + round(z_average,1)
                      robomovement[3]=round(robomovement[3],1) + round(rx_average,1)
                      robomovement[4]=round(robomovement[4],1) + round(ry_average,1)
                      robomovement[5]=round(robomovement[5],1) + round(rz_average,1)
                     
             
                      nameSpaceObj.amovejx(robomovement,vel=100,acc=100,sol=3)
                      posposx=get_current_tool_flange_posx()
                      # print("average",robomovement)
                      
                      # print("pos",posposx)

                      print("second pos")
                      joyJogFlag =True 
                      self.countx=0

                      if joyJogFlag :
                  
                        self.rob_x.clear()
                        self.rob_y.clear()
                        self.rob_z.clear()
                        self.rob_rx.clear()
                        self.rob_ry.clear()
                        self.rob_rz.clear()
                        joyJogFlag = False 


                 elif self.ori_first_flag == True:
                          ABS_TO_REL =get_current_tool_flange_posx()
    
                          robomovement[0]=ABS_TO_REL[0] +round(rx_average,1)
                          robomovement[1]=ABS_TO_REL[1] +round(ry_average,1)
                          robomovement[2]=ABS_TO_REL[2] +round(rz_average,1)
                          robomovement[3]=ABS_TO_REL[3] +round(x_average,1)
                          robomovement[4]=ABS_TO_REL[4] +round(y_average,1)
                          robomovement[5]=ABS_TO_REL[5] +round(z_average,1)
                          nameSpaceObj.amovejx(robomovement,vel=100,acc=100,sol=2)
                       
                          print("first ori")
                          joyJogFlag =True 
                          self.countx=0

                          self.ori_second_flag=True
                          self.ori_first_flag=False
                         
                        
                          if joyJogFlag :
                      
                            self.rob_x.clear()
                            self.rob_y.clear()
                            self.rob_z.clear()
                            self.rob_rx.clear()
                            self.rob_ry.clear()
                            self.rob_rz.clear()
                            joyJogFlag = False 
            
                          
                 elif self.ori_second_flag== True: 
                     
                         
                            robomovement[0]=robomovement[0] + round(rx_average,1)
                            robomovement[1]=robomovement[1] + round(ry_average,1)
                            robomovement[2]=robomovement[2] + round(rz_average,1)
                            robomovement[3]=robomovement[3] + round(x_average,1)
                            robomovement[4]=robomovement[4] + round(y_average,1)
                            robomovement[5]=robomovement[5] + round(z_average,1)
                           
              
                            
                            nameSpaceObj.amovejx(robomovement,vel=100,acc=100,sol=2)
                            print("second ori")
                            joyJogFlag =True 
                            self.countx=0
                          
                            if joyJogFlag :
                        
                              self.rob_x.clear()
                              self.rob_y.clear()
                              self.rob_z.clear()
                              self.rob_rx.clear()
                              self.rob_ry.clear()
                              self.rob_rz.clear()
                              joyJogFlag = False 
            

robo_obj = roboCore()

def callback(data):
     

          joy_x=round(100*data.axes[0],1)
          joy_y=round(100*data.axes[1],1)
          joy_z=round(100*data.axes[2],1)
          joy_rx=round(100*data.axes[3],1)
          joy_ry=round(100*data.axes[4],1)
          joy_rz=round(100*data.axes[5],1)
          robo_ready_pos=data.buttons[0]
     
          robo_obj.axes_function(joy_x,joy_y,joy_z,joy_rx,joy_ry,joy_rz)

          if data.buttons[0]==1 and data.buttons[1]==0 and data.buttons[2]==0 and data.buttons[3]==0  :
           print("ready") #0
           movej(ready_pos,vel=60,acc=60)

          elif data.buttons[1]==1 and data.buttons[0]==0 and data.buttons[2]==0 and data.buttons[3]==0: #2
           print("home")
           movej(home_pos,vel=100,acc=100)
            

          elif data.buttons[2]==1 and data.buttons[0]==0 and data.buttons[1]==0 and data.buttons[3]==0  :  #3
                print("xyz")
                robo_obj.pos_first_flag=True
                robo_obj.ori_first_flag=False
          elif data.buttons[3] ==1 and data.buttons[0]==0 and data.buttons[1]==0 and data.buttons[2]==0:   #1
                print("ori")
                robo_obj.ori_first_flag=True
                robo_obj.pos_first_flag=False
               

          elif data.buttons[0] ==1 and  data.buttons[2] ==1 and data.buttons[1]==0 and data.buttons[3]==0: #0 and 3
              print("servo on")
              set_robot_control(CONTROL_RESET_SAFET_OFF)
          
          elif data.buttons[0] ==1 and  data.buttons[3] ==1 and data.buttons[1]==0 and data.buttons[2]==0: #0 and 2
            print("servo off")
            set_robot_control(CONTROL_RECOVERY_SAFE_OFF)
        
        
def start():
        rospy.Subscriber("joy", Joy,callback)
        rospy.init_node('joyfilter')   
         
   
