#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import rospy

from sensor_msgs.msg import Joy
import single_robot_simple
import joyfilterfinal
import time
import DR_init
from DSR_ROBOT import *

def main():
 #joyfilterfinal.start()
 #joyfilter.start()
  single_robot_simple.start()
  
if __name__ == "__main__": 
    main()

  

   
while not rospy.is_shutdown():
      state=  get_robot_state()
      #print(state)
      MY_flag = False
 #   pass
      if state==10 or state==3:
           MY_flag=True
           if MY_flag==True:
                                print("equal")
                                
                                set_robot_control(CONTROL_RESET_SAFET_OFF)
                                time.sleep(2)
                                MY_flag=False
   
    









#    #!/usr/bin/env python3
# # -*- coding: utf-8 -*-
# import rospy
# import sys
# import os
# import statistics
# from sensor_msgs.msg import Joy
# import atre_joy_node
# import threading
# import time
# sys.dont_write_bytecode = True
# sys.path.append( os.path.abspath(os.path.join(os.path.dirname(__file__),"../../../../common/imp")) ) 

# ROBOT_ID     = "dsr01"        
# ROBOT_MODEL  = "a0509"  

# import DR_init
# DR_init.__dsr__id = ROBOT_ID
# DR_init.__dsr__model = ROBOT_MODEL
# from DSR_ROBOT import *

# nameSpaceObj = CDsrRobot(ROBOT_ID, ROBOT_MODEL)



# dX = [10,0,0,10,0,0]

# robomovement=[0,0,0,0,0,0]
# robomovement1=[0,0,0,0,0,0]
# ready_posj=[0,0,1055,180,0,-180]
# ready_pos=[0,0,90,0,90,0]

# movement_flag = True
# class roboCore:

#     def __init__(self):
    
#       self.countx = 0 
#       self.abstorel_count=0
#       self.main_flag =True
#       self.alter_flag=False
#       self.robovelocity=100
#       self.roboacceleration=100
#       self.homeflag=False
#       self.motion_split_flag=False
#       self.first_mov_flag=False      
#       self.second_mov_flag = False
#       self.xyz_flag=False
#       self.three_orientations_flag=False
#       self.home_pos_flag=False

#       self.my_flag=False
#     def axes_function(self, joy_x,joy_y,joy_z,joy_rx,joy_ry,joy_rz):
         
#           #  T1 = threading.Thread(target=roboobj.alter)
#           #  T1.start()
      
#            self.rob_x = [0]
#            self.rob_y = [0]
#            self.rob_z = [0]
#            self.rob_rx = [0]
#            self.rob_ry = [0]
#            self.rob_rz = [0]

#            self.rob_x.append(joy_x)
#            self.rob_y.append(joy_y)
#            self.rob_z.append(joy_z)
#            self.rob_rx.append(joy_rx)
#            self.rob_ry.append(joy_ry)
#            self.rob_rz.append(joy_rz)

#            self.countx += 1 
#            self.abstorel_count += 1
          
     
       
                   




       
                     

#            if roboobj.xyz_flag==True and roboobj.three_orientations_flag==False and roboobj.home_pos_flag==False:
#                 # print("xyz")
#                 if self.countx == 100:
                  
#                         x_average=statistics.mean(self.rob_x)
#                         y_average=statistics.mean(self.rob_y)
#                         z_average=statistics.mean(self.rob_z)
#                         rx_average=statistics.mean(self.rob_rx)
#                         ry_average=statistics.mean(self.rob_ry)
#                         rz_average=statistics.mean(self.rob_rz)
#                         if self.motion_split_flag == False:
#                           ABS_TO_REL =get_current_tool_flange_posx()
#                         #  print("before",ABS_TO_REL)
#                           # print("averge",x_average,y_average,z_average,rx_average,ry_average,rz_average)
#                           robomovement[0]=ABS_TO_REL[0]+round(x_average,1)
#                           robomovement[1]=ABS_TO_REL[1] +round(y_average,1)
#                           robomovement[2]=ABS_TO_REL[2] +round(z_average,1)
#                           robomovement[3]=ABS_TO_REL[3] +round(rx_average,1)
#                           robomovement[4]=ABS_TO_REL[4] +round(ry_average,1)
#                           robomovement[5]=ABS_TO_REL[5] +round(rz_average,1)
#                           nameSpaceObj.amovejx(robomovement,vel=20,acc=20,sol=2)
#                       #    print("after",robomovement)
#                         #  nameSpaceObj.amovejx(robomovement,vel=50,acc=50,ref=DR_BASE,ra= DR_MV_RA_OVERRIDE,sol=2)
#                           # print("moved1")
#                           self.motion_split_flag = True
#                           self.first_mov_flag=True
#                           joyJogFlag =True 
#                           self.countx=0
                          
#                         elif self.motion_split_flag == True: 
#                             self.second_mov_flag=False
#                             print("second",robomovement[0])
#                             robomovement[0]=robomovement[0] + round(x_average,1)
#                             robomovement[1]=robomovement[1] + round(y_average,1)
#                             robomovement[2]=robomovement[2] + round(z_average,1)
#                             robomovement[3]=robomovement[3] + round(rx_average,1)
#                             robomovement[4]=robomovement[4] + round(ry_average,1)
#                             robomovement[5]=robomovement[5] + round(rz_average,1)
#                             self.second_mov_flag=True
#                           #   nameSpaceObj.amovejx(robomovement,time=0.5,ref=DR_BASE,ra= DR_MV_RA_OVERRIDE,sol=2)
#                         #    print("moved2")
#                             #  self.alter_flag=True
#                             #  alter()
#                           #  print(get_robot_state())
                           
#                             nameSpaceObj.amovejx(robomovement,vel=20,acc=20,sol=2)
#                             self.my_flag=True  

#                          #   print("  joint_err             : %7.3f %7.3f %7.3f %7.3f %7.3f %7.3f" % (msg.joint_err[0],msg.joint_err[1],msg.joint_err[2],msg.joint_err[3],msg.joint_err[4],msg.joint_err[5]))
#                             joyJogFlag =True 
#                             self.countx=0

#                         if joyJogFlag :
                        
#                             self.rob_x.clear()
#                             self.rob_y.clear()
#                             self.rob_z.clear()
#                             self.rob_rx.clear()
#                             self.rob_ry.clear()
#                             self.rob_rz.clear()
#                             joyJogFlag = False 

           
#            elif roboobj.three_orientations_flag==True and roboobj.xyz_flag == False and roboobj.home_pos_flag==False:
#                print("orientation")
#                if self.countx == 100:
                  
#                         x_average=statistics.mean(self.rob_x)
#                         y_average=statistics.mean(self.rob_y)
#                         z_average=statistics.mean(self.rob_z)
#                         rx_average=statistics.mean(self.rob_rx)
#                         ry_average=statistics.mean(self.rob_ry)
#                         rz_average=statistics.mean(self.rob_rz)
#                         if self.motion_split_flag == False:
#                           ABS_TO_REL =get_current_tool_flange_posx()
#                       #    print("before",ABS_TO_REL)
#                           # print("averge",x_average,y_average,z_average,rx_average,ry_average,rz_average)
#                           robomovement[0]=ABS_TO_REL[0] +round(rx_average,1)
#                           robomovement[1]=ABS_TO_REL[1] +round(ry_average,1)
#                           robomovement[2]=ABS_TO_REL[2] +round(rz_average,1)
#                           robomovement[3]=ABS_TO_REL[3] +round(x_average,1)
#                           robomovement[4]=ABS_TO_REL[4] +round(y_average,1)
#                           robomovement[5]=ABS_TO_REL[5] +round(z_average,1)
#                           nameSpaceObj.amovejx(robomovement,vel=20,acc=20,sol=2)
#                          # print("after",robomovement)
#                         #  nameSpaceObj.amovejx(robomovement,vel=50,acc=50,ref=DR_BASE,ra= DR_MV_RA_OVERRIDE,sol=2)
#                           # print("moved1")
#                           self.motion_split_flag = True
#                           self.first_mov_flag=True
#                           joyJogFlag =True 
#                           self.countx=0
                          
#                         elif self.motion_split_flag == True: 
#                             self.second_mov_flag=False
#                             #  print("second",robomovement[0])
#                             robomovement[0]=robomovement[0] + round(rx_average,1)
#                             robomovement[1]=robomovement[1] + round(ry_average,1)
#                             robomovement[2]=robomovement[2] #+ round(rz_average,1)
#                             robomovement[3]=robomovement[3] + round(x_average,1)
#                             robomovement[4]=robomovement[4] + round(y_average,1)
#                             robomovement[5]=robomovement[5] + round(z_average,1)
#                             self.second_mov_flag=True
#                           #   nameSpaceObj.amovejx(robomovement,time=0.5,ref=DR_BASE,ra= DR_MV_RA_OVERRIDE,sol=2)
#                         #    print("rx move")
#                             #  self.alter_flag=True
#                             #  alter()
                            
#                             nameSpaceObj.amovejx(robomovement,vel=20,acc=20,sol=2)
#                         #    print("  joint_err             : %7.3f %7.3f %7.3f %7.3f %7.3f %7.3f" % (msg.joint_err[0],msg.joint_err[1],msg.joint_err[2],msg.joint_err[3],msg.joint_err[4],msg.joint_err[5]))
#                             joyJogFlag =True 
#                             self.countx=0

#                         if joyJogFlag :
                        
#                             self.rob_x.clear()
#                             self.rob_y.clear()
#                             self.rob_z.clear()
#                             self.rob_rx.clear()
#                             self.rob_ry.clear()
#                             self.rob_rz.clear()
#                             joyJogFlag = False 

#            elif roboobj.three_orientations_flag==False and roboobj.xyz_flag==False and roboobj.home_pos_flag==True:
#                     print("home")
#                     movej(ready_pos,vel=30,acc=30)   
#                     roboobj.motion_split_flag=False




# roboobj = roboCore()    

# def alter():
         
#           if roboobj.alter_flag==True:
#               enable_alter_motion(n=0,mode=DR_DPOS, ref=DR_BASE, limit_dPOS=[0,0],limit_dPOS_per=[0,0])
#              # print("hii")   
#               alter_motion(dX) 
#              # disable_alter_motion()
#              # self.alter_flag=False:
#            #   print("off")
#               roboobj.alter_flag=False

# def callback(data):
#    # roboobj.main_flag=False
#     joy_x=round(70*data.axes[0],1)
#     joy_y=round(70*data.axes[1],1)
#     joy_z=round(70*data.axes[2],1)
#     joy_rx=round(70*data.axes[3],1)
#     joy_ry=round(70*data.axes[4],1)
#     joy_rz=round(70*data.axes[5],1)
#     robo_ready_pos=data.buttons[0]
#     print("callback")
#     #
   
#     roboobj.axes_function(joy_x,joy_y,joy_z,joy_rx,joy_ry,joy_rz) 



  
#                   #  print(joy_ry)
   
#     if data.buttons[0]==1:
#         #  print("0")
#           roboobj.xyz_flag=False
#           roboobj.three_orientations_flag=False
#           roboobj.home_pos_flag=True
#     elif data.buttons[1]==1:
#         #  print("1")
#           roboobj.xyz_flag=False
#           roboobj.three_orientations_flag=True
#           roboobj.home_pos_flag=False
#     elif data.buttons[2]==1:
#           print("2")
#           roboobj.xyz_flag=True
#           roboobj.three_orientations_flag=False
#           roboobj.home_pos_flag=False


# def start():
#                 rospy.Subscriber("joy", Joy,callback)
#                 rospy.init_node('joyfilter')  
#                 print("started")
              

   