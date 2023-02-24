#!/usr/bin/env python3
# -*- coding: utf-8 -*-
import rospy
import sys
import os
import statistics
from sensor_msgs.msg import Joy
import threading
sys.dont_write_bytecode = True
sys.path.append( os.path.abspath(os.path.join(os.path.dirname(__file__),"../../../../common/imp")) ) 

ROBOT_ID     = "dsr01"        
ROBOT_MODEL  = "a0509"  

import DR_init
DR_init.__dsr__id = ROBOT_ID
DR_init.__dsr__model = ROBOT_MODEL
from DSR_ROBOT import *
from dsr_msgs import *

nameSpaceObj = CDsrRobot(ROBOT_ID, ROBOT_MODEL)


def msgRobotState_cb(msg):
    msgRobotState_cb.count += 1
  #  print("calback")
    if (0==(msgRobotState_cb.count % 100)): 
         rospy.loginfo("________ ROBOT STATUS ________")
         print("  robot_state           : %d" % (msg.robot_state))
         print("  robot_state_str       : %s" % (msg.robot_state_str))
         print("  actual_mode           : %d" % (msg.actual_mode))
         print("  actual_space          : %d" % (msg.actual_space))
         print("  current_posj          : %7.3f %7.3f %7.3f %7.3f %7.3f %7.3f" % (msg.current_posj[0],msg.current_posj[1],msg.current_posj[2],msg.current_posj[3],msg.current_posj[4],msg.current_posj[5]))
         print("  current_velj          : %7.3f %7.3f %7.3f %7.3f %7.3f %7.3f" % (msg.current_velj[0],msg.current_velj[1],msg.current_velj[2],msg.current_velj[3],msg.current_velj[4],msg.current_velj[5]))
         print("  joint_abs             : %7.3f %7.3f %7.3f %7.3f %7.3f %7.3f" % (msg.joint_abs[0],msg.joint_abs[1],msg.joint_abs[2],msg.joint_abs[3],msg.joint_abs[4],msg.joint_abs[5]))
         print("  joint_err             : %7.3f %7.3f %7.3f %7.3f %7.3f %7.3f" % (msg.joint_err[0],msg.joint_err[1],msg.joint_err[2],msg.joint_err[3],msg.joint_err[4],msg.joint_err[5]))
         print("  target_posj           : %7.3f %7.3f %7.3f %7.3f %7.3f %7.3f" % (msg.target_posj[0],msg.target_posj[1],msg.target_posj[2],msg.target_posj[3],msg.target_posj[4],msg.target_posj[5]))
         print("  target_velj           : %7.3f %7.3f %7.3f %7.3f %7.3f %7.3f" % (msg.target_velj[0],msg.target_velj[1],msg.target_velj[2],msg.target_velj[3],msg.target_velj[4],msg.target_velj[5]))    
         print("  current_posx          : %7.3f %7.3f %7.3f %7.3f %7.3f %7.3f" % (msg.current_posx[0],msg.current_posx[1],msg.current_posx[2],msg.current_posx[3],msg.current_posx[4],msg.current_posx[5]))
         print("  current_velx          : %7.3f %7.3f %7.3f %7.3f %7.3f %7.3f" % (msg.current_velx[0],msg.current_velx[1],msg.current_velx[2],msg.current_velx[3],msg.current_velx[4],msg.current_velx[5]))
         print("  task_err              : %7.3f %7.3f %7.3f %7.3f %7.3f %7.3f" % (msg.task_err[0],msg.task_err[1],msg.task_err[2],msg.task_err[3],msg.task_err[4],msg.task_err[5]))
         print("  solution_space        : %d" % (msg.solution_space))
msgRobotState_cb.count = 0


def thread_subscriber():
  #  print("sub")
    rospy.Subscriber('/'+ROBOT_ID +ROBOT_MODEL+'/state', RobotState, msgRobotState_cb)
    rospy.spin()

dX = [10,0,0,10,0,0]

robomovement1=posj(0,0,0,0,0,0)
robomovement=[0,0,0,0,0,0]
ready_posj=[0,0,1055,180,0,-180]
ready_pos=[0,0,0,0,0,0]
home_pos=[0,0,1055,180,0,-180]
movement_flag = True
class roboCore:

    def __init__(self):
    
      self.countx = 0 
      self.abstorel_count=0
      self.main_flag =True
      self.alter_flag=False
      self.robovelocity=100
      self.roboacceleration=100
      self.homeflag=False
      self.motion_split_flag=False
      self.first_mov_flag=False      
      self.second_mov_flag = False
      self.xyz_flag=False
      self.three_orientations_flag=False
      self.home_pos_flag=False
      self.ready_pos_flag= False
      self.my_flag=False
      self.first_pos_motion_flag = False
      self.second_pos_motion_flag=False
      self.third_pos_motion_flag=False
      self.fourth_pos_motion_flag=False
      self.fifth_pos_motion_flag=False
      self.first_ori_motion_flag = False
      self.second_ori_motion_flag=False
      self.third_ori_motion_flag=False
      self.fourth_ori_motion_flag=False
      self.fifth_ori_motion_flag=False


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
          
           self.left_posj=posj(0,0,0,0,0,0)
           self.left_posx=posx(0,0,0,0,0,0)
       
        
    
           if robo_obj.xyz_flag==True and robo_obj.three_orientations_flag==False and robo_obj.home_pos_flag==False:
           
                if self.countx == 100:
                  
                        x_average=statistics.mean(self.rob_x)
                        y_average=statistics.mean(self.rob_y)
                        z_average=statistics.mean(self.rob_z)
                        rx_average=statistics.mean(self.rob_rx)
                        ry_average=statistics.mean(self.rob_ry)
                        rz_average=statistics.mean(self.rob_rz)


                        if self.first_pos_motion_flag == True:
                          ABS_TO_REL =get_current_tool_flange_posx(DR_BASE)
                       
                          robomovement[0]=ABS_TO_REL[0] +round(x_average,1)
                          robomovement[1]=ABS_TO_REL[1] +round(y_average,1)
                          robomovement[2]=ABS_TO_REL[2] +round(z_average,1)
                          robomovement[3]=ABS_TO_REL[3] +round(rx_average,1)
                          robomovement[4]=ABS_TO_REL[4] +round(ry_average,1)
                          robomovement[5]=ABS_TO_REL[5] +round(rz_average,1)

                     
                          print("robomovement is:",robomovement)

                          # left_pos=ikin(robomovement,2)
                          # self.left_posj[0]=left_pos[0]
                          # self.left_posj[1]=left_pos[1]
                          # self.left_posj[2]=left_pos[2]
                          # self.left_posj[3]=left_pos[3]
                          # self.left_posj[4]=left_pos[4]
                          # self.left_posj[5]=left_pos[5]

                            #print(left_posj)
                          left_pos1=fkin(robomovement)
                     
                          self.left_posx[0]=left_pos1[0]
                          self.left_posx[1]=left_pos1[1]
                          self.left_posx[2]=left_pos1[2]
                          self.left_posx[3]=left_pos1[3]
                          self.left_posx[4]=left_pos1[4]
                          self.left_posx[5]=left_pos1[5]
                 
                          nameSpaceObj.amovejx(robomovement,vel=100,acc=100,sol=2)
                    
                          joyJogFlag =True 
                          self.countx=0

                          self.first_pos_motion_flag = False
                          self.second_pos_motion_flag=True
                          self.third_pos_motion_flag=False
                          self.fourth_pos_motion_flag=False
                          self.fifth_pos_motion_flag=False
                
                        elif self.second_pos_motion_flag == True: 
                   
                            robomovement[0]=robomovement[0] + round(x_average,1)
                            robomovement[1]=robomovement[1] + round(y_average,1)
                            robomovement[2]=robomovement[2] + round(z_average,1)
                            robomovement[3]=robomovement[3] + round(rx_average,1)
                            robomovement[4]=robomovement[4] + round(ry_average,1)
                            robomovement[5]=robomovement[5] + round(rz_average,1)

                            self.second_mov_flag=True

                          #  print("robomovement is:",robomovement)
                            # left_pos=ikin(robomovement,2)
                            # self.left_posj[0]=left_pos[0]
                            # self.left_posj[1]=left_pos[1]
                            # self.left_posj[2]=left_pos[2]
                            # self.left_posj[3]=left_pos[3]
                            # self.left_posj[4]=left_pos[4]
                            # self.left_posj[5]=left_pos[5]

                              #print(left_posj)
                            left_pos1=fkin(robomovement)
                       #     print(left_pos1)
                            self.left_posx[0]=left_pos1[0]
                            self.left_posx[1]=left_pos1[1]
                            self.left_posx[2]=left_pos1[2]
                            self.left_posx[3]=left_pos1[3]
                            self.left_posx[4]=left_pos1[4]
                            self.left_posx[5]=left_pos1[5]
                       #     print("rx0",rx_average,ry_average,rz_average)
                            nameSpaceObj.amovejx(robomovement,vel=100,acc=100,sol=2)
                          #  print("joint",left_pos)
                        #    print("left_posx",self.left_posx)
                            joyJogFlag =True 
                            self.countx=0

                            self.first_pos_motion_flag = False
                            self.second_pos_motion_flag=False
                            self.third_pos_motion_flag=True
                            self.fourth_pos_motion_flag=False
                            self.fifth_pos_motion_flag=False
                          
                        
                            if joyJogFlag :
                        
                              self.rob_x.clear()
                              self.rob_y.clear()
                              self.rob_z.clear()
                              self.rob_rx.clear()
                              self.rob_ry.clear()
                              self.rob_rz.clear()
                              joyJogFlag = False

                        elif self.third_pos_motion_flag == True:
                              

                            robomovement[0]=robomovement[0] + round(x_average,1)
                            robomovement[1]=robomovement[1] + round(y_average,1)
                            robomovement[2]=robomovement[2] + round(z_average,1)
                            robomovement[3]=robomovement[3] + round(rx_average,1)
                            robomovement[4]=robomovement[4] + round(ry_average,1)
                            robomovement[5]=robomovement[5] + round(rz_average,1)
                       #     print("rx0",rx_average,ry_average,rz_average)
                            self.second_mov_flag=True
                            # print("third moved")
                            # convposj=ikin(robomovement,2)
                       
                            # convposj1=posj(robomovement)
                            # convposx= fkin(convposj1,DR_BASE)
                            # print("ROBO",robomovement)
                            # print("CNV",convposx)
                            print("robomovement is:",robomovement)
                            # left_pos=ikin(robomovement,2)
                            # self.left_posj[0]=left_pos[0]
                            # self.left_posj[1]=left_pos[1]
                            # self.left_posj[2]=left_pos[2]
                            # self.left_posj[3]=left_pos[3]
                            # self.left_posj[4]=left_pos[4]
                            # self.left_posj[5]=left_pos[5]

                              #print(left_posj)
                            left_pos1=fkin(robomovement)
                          #  print(left_pos1)
                            self.left_posx[0]=left_pos1[0]
                            self.left_posx[1]=left_pos1[1]
                            self.left_posx[2]=left_pos1[2]
                            self.left_posx[3]=left_pos1[3]
                            self.left_posx[4]=left_pos1[4]
                            self.left_posx[5]=left_pos1[5]
                         #   print("rx0",rx_average,ry_average,rz_average)
                            nameSpaceObj.amovejx(robomovement,vel=100,acc=100,sol=2)
                          
                         #   print("left_posx",self.left_posx)
                          #  print("joint",left_pos)
                            joyJogFlag =True 
                            self.countx=0

                            self.first_pos_motion_flag = False
                            self.second_pos_motion_flag=False
                            self.third_pos_motion_flag=False
                            self.fourth_pos_motion_flag=True
                            self.fifth_pos_motion_flag=False
               
                            if joyJogFlag :
                        
                              self.rob_x.clear()
                              self.rob_y.clear()
                              self.rob_z.clear()
                              self.rob_rx.clear()
                              self.rob_ry.clear()
                              self.rob_rz.clear()
                              joyJogFlag = False


                        elif self.fourth_pos_motion_flag == True:
                              

                            robomovement[0]=robomovement[0] + round(x_average,1)
                            robomovement[1]=robomovement[1] + round(y_average,1)
                            robomovement[2]=robomovement[2] + round(z_average,1)
                            robomovement[3]=robomovement[3] + round(rx_average,1)
                            robomovement[4]=robomovement[4] + round(ry_average,1)
                            robomovement[5]=robomovement[5] + round(rz_average,1)

                            self.second_mov_flag=True
                        #    print("fourth moved")
                         #   print("robomovement is:",robomovement)
                         #   # left_pos=ikin(robomovement,2)
                            # self.left_posj[0]=left_pos[0]
                            # self.left_posj[1]=left_pos[1]
                            # self.left_posj[2]=left_pos[2]
                            # self.left_posj[3]=left_pos[3]
                            # self.left_posj[4]=left_pos[4]
                            # self.left_posj[5]=left_pos[5]

                              #print(left_posj)
                            left_pos1=fkin(robomovement)
                          #  print(left_pos1)
                            self.left_posx[0]=left_pos1[0]
                            self.left_posx[1]=left_pos1[1]
                            self.left_posx[2]=left_pos1[2]
                            self.left_posx[3]=left_pos1[3]
                            self.left_posx[4]=left_pos1[4]
                            self.left_posx[5]=left_pos1[5]
                     #       print("rx0",rx_average,ry_average,rz_average)
                            nameSpaceObj.amovejx(robomovement,vel=100,acc=100,sol=2)
                           
                        #    print("left_posx",self.left_posx)

                        #    print("joint",left_pos)

                            joyJogFlag =True 
                            self.countx=0

                            self.first_pos_motion_flag = False
                            self.second_pos_motion_flag=False
                            self.third_pos_motion_flag=False
                            self.fourth_pos_motion_flag=False
                            self.fifth_pos_motion_flag=True
                   
                            if joyJogFlag :
                        
                              self.rob_x.clear()
                              self.rob_y.clear()
                              self.rob_z.clear()
                              self.rob_rx.clear()
                              self.rob_ry.clear()
                              self.rob_rz.clear()
                              joyJogFlag = False


                        elif self.fifth_pos_motion_flag == True:
                              

                            robomovement[0]=robomovement[0] + round(x_average,1)
                            robomovement[1]=robomovement[1] + round(y_average,1)
                            robomovement[2]=robomovement[2] + round(z_average,1)
                            robomovement[3]=robomovement[3] + round(rx_average,1)
                            robomovement[4]=robomovement[4] + round(ry_average,1)
                            robomovement[5]=robomovement[5] + round(rz_average,1)

                            self.second_mov_flag=True
                            print("fifth moved")
                          #  print("robomovement is:",robomovement)
                            # left_pos=ikin(robomovement,2)
                            # self.left_posj[0]=left_pos[0]
                            # self.left_posj[1]=left_pos[1]
                            # self.left_posj[2]=left_pos[2]
                            # self.left_posj[3]=left_pos[3]
                            # self.left_posj[4]=left_pos[4]
                            # self.left_posj[5]=left_pos[5]

                              #print(left_posj)
                            left_pos1=fkin(robomovement)
                         #   print(left_pos1)
                            self.left_posx[0]=left_pos1[0]
                            self.left_posx[1]=left_pos1[1]
                            self.left_posx[2]=left_pos1[2]
                            self.left_posx[3]=left_pos1[3]
                            self.left_posx[4]=left_pos1[4]
                            self.left_posx[5]=left_pos1[5]
                          #  print("rx0",rx_average,ry_average,rz_average)
                            nameSpaceObj.amovejx(robomovement,vel=100,acc=100,sol=2)
                         
                         #   print("left_posx",self.left_posx)
                           # print("joint",left_pos)
                            joyJogFlag =True 
                            self.countx=0

                            self.first_pos_motion_flag = False
                            self.second_pos_motion_flag=True
                            self.third_pos_motion_flag=False
                            self.fourth_pos_motion_flag=False
                            self.fifth_pos_motion_flag=False
                           
                            if joyJogFlag :
                        
                              self.rob_x.clear()
                              self.rob_y.clear()
                              self.rob_z.clear()
                              self.rob_rx.clear()
                              self.rob_ry.clear()
                              self.rob_rz.clear()
                              joyJogFlag = False
                      
    
             
           elif robo_obj.three_orientations_flag==True and robo_obj.xyz_flag == False and robo_obj.home_pos_flag==False and robo_obj.ready_pos_flag==False:
             #  print("orientation")
               if self.countx == 100:
                        print("inside")
                        x_average=statistics.mean(self.rob_x)
                        y_average=statistics.mean(self.rob_y)
                        z_average=statistics.mean(self.rob_z)
                        rx_average=statistics.mean(self.rob_rx)
                        ry_average=statistics.mean(self.rob_ry)
                        rz_average=statistics.mean(self.rob_rz)
                        if self.first_ori_motion_flag == True:
                          ABS_TO_REL =get_current_tool_flange_posx()
    
                          robomovement[0]=ABS_TO_REL[0] +round(rx_average,1)
                          robomovement[1]=ABS_TO_REL[1] +round(ry_average,1)
                          robomovement[2]=ABS_TO_REL[2] +round(rz_average,1)
                          robomovement[3]=ABS_TO_REL[3] +round(x_average,1)
                          robomovement[4]=ABS_TO_REL[4] +round(y_average,1)
                          robomovement[5]=ABS_TO_REL[5] +round(z_average,1)
                          nameSpaceObj.amovejx(robomovement,vel=100,acc=100,sol=2)
                       
                          
                          joyJogFlag =True 
                          self.countx=0

                          self.first_ori_motion_flag = False
                          self.second_ori_motion_flag=True
                          self.third_ori_motion_flag=False
                          self.fourth_ori_motion_flag=False
                          self.fifth_ori_motion_flag=False
                          
                        elif self.second_ori_motion_flag == True: 
                            self.second_mov_flag=False
                         
                            robomovement[0]=robomovement[0] + round(rx_average,1)
                            robomovement[1]=robomovement[1] + round(ry_average,1)
                            robomovement[2]=robomovement[2] #+ round(rz_average,1)
                            robomovement[3]=robomovement[3] + round(x_average,1)
                            robomovement[4]=robomovement[4] + round(y_average,1)
                            robomovement[5]=robomovement[5] + round(z_average,1)
                            self.second_mov_flag=True
              
                            
                            nameSpaceObj.amovejx(robomovement,vel=100,acc=100,sol=2)

                            joyJogFlag =True 
                            self.countx=0
                            self.first_ori_motion_flag = False
                            self.second_ori_motion_flag=False
                            self.third_ori_motion_flag=True
                            self.fourth_ori_motion_flag=False
                            self.fifth_ori_motion_flag=False
                            if joyJogFlag :
                          
                              self.rob_x.clear()
                              self.rob_y.clear()
                              self.rob_z.clear()
                              self.rob_rx.clear()
                              self.rob_ry.clear()
                              self.rob_rz.clear()
                              joyJogFlag = False 



                        elif self.third_ori_motion_flag == True: 
                        
                         
                            robomovement[0]=robomovement[0] + round(rx_average,1)
                            robomovement[1]=robomovement[1] + round(ry_average,1)
                            robomovement[2]=robomovement[2] #+ round(rz_average,1)
                            robomovement[3]=robomovement[3] + round(x_average,1)
                            robomovement[4]=robomovement[4] + round(y_average,1)
                            robomovement[5]=robomovement[5] + round(z_average,1)
                            
              
                            
                            nameSpaceObj.amovejx(robomovement,vel=100,acc=100,sol=2)

                            joyJogFlag =True 
                            self.countx=0
                            self.first_ori_motion_flag = False
                            self.second_ori_motion_flag=False
                            self.third_ori_motion_flag=False
                            self.fourth_ori_motion_flag=True
                            self.fifth_ori_motion_flag=False
                            if joyJogFlag :
                        
                              self.rob_x.clear()
                              self.rob_y.clear()
                              self.rob_z.clear()
                              self.rob_rx.clear()
                              self.rob_ry.clear()
                              self.rob_rz.clear()
                              joyJogFlag = False 

                        elif self.fourth_ori_motion_flag == True: 
                           
                         
                            robomovement[0]=robomovement[0] + round(rx_average,1)
                            robomovement[1]=robomovement[1] + round(ry_average,1)
                            robomovement[2]=robomovement[2] #+ round(rz_average,1)
                            robomovement[3]=robomovement[3] + round(x_average,1)
                            robomovement[4]=robomovement[4] + round(y_average,1)
                            robomovement[5]=robomovement[5] + round(z_average,1)
                            self.second_mov_flag=True
              
                            
                            nameSpaceObj.amovejx(robomovement,vel=100,acc=100,sol=2)

                            joyJogFlag =True 
                            self.countx=0
                            self.first_ori_motion_flag = False
                            self.second_ori_motion_flag=False
                            self.third_ori_motion_flag=False
                            self.fourth_ori_motion_flag=False
                            self.fifth_ori_motion_flag=True

                            if joyJogFlag :
                        
                              self.rob_x.clear()
                              self.rob_y.clear()
                              self.rob_z.clear()
                              self.rob_rx.clear()
                              self.rob_ry.clear()
                              self.rob_rz.clear()
                              joyJogFlag = False 

                        elif self.fifth_ori_motion_flag == True: 
                           
                         
                            robomovement[0]=robomovement[0] + round(rx_average,1)
                            robomovement[1]=robomovement[1] + round(ry_average,1)
                            robomovement[2]=robomovement[2] #+ round(rz_average,1)
                            robomovement[3]=robomovement[3] + round(x_average,1)
                            robomovement[4]=robomovement[4] + round(y_average,1)
                            robomovement[5]=robomovement[5] + round(z_average,1)
                            self.second_mov_flag=True
              
                            
                            nameSpaceObj.amovejx(robomovement,vel=100,acc=100,sol=2)
                            print("fifth moved")
                            joyJogFlag =True 
                            self.countx=0
                            self.first_ori_motion_flag = False
                            self.second_ori_motion_flag=True
                            self.third_ori_motion_flag=False
                            self.fourth_ori_motion_flag=False
                            self.fifth_ori_motion_flag=False

                            if joyJogFlag :
                        
                              self.rob_x.clear()
                              self.rob_y.clear()
                              self.rob_z.clear()
                              self.rob_rx.clear()
                              self.rob_ry.clear()
                              self.rob_rz.clear()
                              joyJogFlag = False 





           
           elif robo_obj.three_orientations_flag==False and robo_obj.xyz_flag==False and robo_obj.ready_pos_flag==True and robo_obj.home_pos_flag==False:
                    print("home")
                    x_average=statistics.mean(self.rob_x)
                    y_average=statistics.mean(self.rob_y)
                    z_average=statistics.mean(self.rob_z)
                    rx_average=statistics.mean(self.rob_rx)
                    ry_average=statistics.mean(self.rob_ry)
                    rz_average=statistics.mean(self.rob_rz)
                    movej(ready_pos,vel=30,acc=30)   
                    robo_obj.ready_pos_flag=False
           elif robo_obj.three_orientations_flag==False and robo_obj.xyz_flag==False and robo_obj.home_pos_flag==True and robo_obj.ready_pos_flag==False:

    
                    print("home")
                    movej(home_pos,vel=30,acc=30)   
                    robo_obj.home_pos_flag=False




robo_obj = roboCore()    



def alter():
         
          if robo_obj.alter_flag==True:
              enable_alter_motion(n=0,mode=DR_DPOS, ref=DR_BASE, limit_dPOS=[0,0],limit_dPOS_per=[0,0])
             # print("hii")   
              alter_motion(dX) 
             # disable_alter_motion()
             # self.alter_flag=False:
           #   print("off")
              robo_obj.alter_flag=False

def callback(data):

    joy_x=round(80*data.axes[0],1)
    joy_y=round(80*data.axes[1],1)
    joy_z=round(80*data.axes[2],1)
    joy_rx=round(80*data.axes[3],1)
    joy_ry=round(80*data.axes[4],1)
    joy_rz=round(80*data.axes[5],1)
    ready_pos_btn=data.buttons[0]
    home_pos_btn=data.buttons[1]
    xyz_ori_btn=data.buttons[2]
    xyz_pos_btn=data.buttons[3]
    robo_obj.axes_function(joy_x,joy_y,joy_z,joy_rx,joy_ry,joy_rz) 
    flag_center(ready_pos_btn,home_pos_btn,xyz_ori_btn,xyz_pos_btn)
    # if data.buttons[0]==1:
            
    #         movej(ready_pos,vel=30,acc=30)  
    #         print("moved") 
    #         robo_obj.first_motion_flag = True
    #         robo_obj.second_motion_flag=False
    #         robo_obj.third_motion_flag=False
    #         robo_obj.fourth_motion_flag=False
    #         robo_obj.fifth_motion_flag=False
    #         robo_obj.sixth_motion_flag=False
    #         robo_obj.seventh_motion_flag=False
    #         robo_obj.eighth_motion_flag=False
    #         robo_obj.nineth_motion_flag=False
    #         robo_obj.tenth_motion_flag=False
    # # elif data.buttons[1]==1:
          
    #         movej(home_pos,vel=30,acc=30)   
    #         robo_obj.motion_split_flag=False
def flag_center(ready_pos_btn,home_pos_btn,xyz_ori_btn,xyz_pos_btn):
      
    if ready_pos_btn==1:
          print("reay")
          robo_obj.xyz_flag=False
          robo_obj.three_orientations_flag=False
          robo_obj.home_pos_flag=False
          robo_obj.ready_pos_flag=True

    elif xyz_ori_btn==1:
   
          robo_obj.xyz_flag=False
          robo_obj.three_orientations_flag=True
          robo_obj.ready_pos_flag=False
          robo_obj.home_pos_flag=False
          robo_obj.first_ori_motion_flag = True
          robo_obj.second_ori_motion_flag=False
          robo_obj.third_ori_motion_flag=False
          robo_obj.fourth_ori_motion_flag=False
          robo_obj.fifth_ori_motion_flag=False
    elif xyz_pos_btn==1:
          #print("1")
          robo_obj.xyz_flag=True
          robo_obj.three_orientations_flag=False
          robo_obj.ready_pos_flag=False
          robo_obj.home_pos_flag=False
          robo_obj.first_pos_motion_flag = True
          robo_obj.second_pos_motion_flag=False
          robo_obj.third_pos_motion_flag=False
          robo_obj.fourth_pos_motion_flag=False
          robo_obj.fifth_pos_motion_flag=False
    elif home_pos_btn ==1:   
          
          robo_obj.xyz_flag=True
          robo_obj.three_orientations_flag=False
          robo_obj.ready_pos_flag=False
          robo_obj.home_pos_flag=True   
def start():
                rospy.Subscriber("joy", Joy,callback)
                rospy.init_node('joyfilter')  


if __name__ == "__main__": 
   
   # set_robot_mode  = rospy.ServiceProxy('/'+ROBOT_ID +ROBOT_MODEL+'/system/set_robot_mode', SetRobotMode)
    rospy.init_node("my_node")
    t1 = threading.Thread(target=thread_subscriber)
    t1.daemon = True 
    
    t1.start()
    
    while not rospy.is_shutdown():
     #start()
     pass
     