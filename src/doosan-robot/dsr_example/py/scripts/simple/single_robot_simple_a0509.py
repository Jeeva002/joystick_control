#!/usr/bin/env python3
# -*- coding: utf-8 -*-
# ##
# @brief    [py example simple] motion basic test for doosan robot
# @author   Kab Kyoum Kim (kabkyoum.kim@doosan.com)   
# TEST 2019-12-09
import rospy
import os
import threading, time
import sys
sys.dont_write_bytecode = True
sys.path.append( os.path.abspath(os.path.join(os.path.dirname(__file__),"../../../../common/imp")) ) # get import path : DSR_ROBOT.py 

# for single robot 
ROBOT_ID     = "dsr01"
ROBOT_MODEL  = "a0509"
import DR_init
DR_init.__dsr__id = ROBOT_ID
DR_init.__dsr__model = ROBOT_MODEL
from DSR_ROBOT import *

def shutdown():
    print("shutdown time!")
    print("shutdown time!")
    print("shutdown time!")

    pub_stop.publish(stop_mode=STOP_TYPE_QUICK)
    return 0

def msgRobotState_cb(msg):
    msgRobotState_cb.count += 1

    # if (0==(msgRobotState_cb.count % 100)): 
    #     rospy.loginfo("________ ROBOT STATUS ________")
       
    #     sys.stdout.write("  rotation_matrix       : ")
    #     for i in range(0 , 3):
    #         sys.stdout.write(  "dim : [%d]"% i)
    #         sys.stdout.write("  [ ")
    #         for j in range(0 , 3):
    #             sys.stdout.write("%d " % msg.rotation_matrix[i].data[j])
    #         sys.stdout.write("] ")
      
        

      
msgRobotState_cb.count = 0
flag=True
def thread_subscriber():
    rospy.Subscriber('/'+ROBOT_ID +ROBOT_MODEL+'/state', RobotState, msgRobotState_cb)
    rospy.spin()

   #rospy.spinner(2)    
def thread(flag):
   if flag==False:

    print("waiting")
    
    alter_motion(dX) 
if __name__ == "__main__":
    rospy.init_node('single_robot_simple_py')
    rospy.on_shutdown(shutdown)
    set_robot_mode  = rospy.ServiceProxy('/'+ROBOT_ID +ROBOT_MODEL+'/system/set_robot_mode', SetRobotMode)
    t1 = threading.Thread(target=thread_subscriber)
    t1.daemon = True 
    t1.start()

    pub_stop = rospy.Publisher('/'+ROBOT_ID +ROBOT_MODEL+'/stop', RobotStop, queue_size=10)           

    set_robot_mode(ROBOT_MODE_AUTONOMOUS)

    set_velx(30,20)  # set global task speed: 30(mm/sec), 20(deg/sec)
    set_accx(60,40)  # set global task accel: 60(mm/sec2), 40(deg/sec2)

    velx=[50, 50]
    accx=[100, 100]

    p1= posj(0,0,0,0,0,0)                    #joint
    p2= posj(0.0, 0.0, 90.0, 0.0, 90.0, 0.0) #joint

 #task

    c1 = posx(367, 40, 540.5, 12, 180, 12)
    c2 = posx(367, 10, 490, 12, 180, 12)
    forward = posx(366, -3, 443, 73, 178, 74)
    ready_posj=posj(0,0,1055,180,0,-180)
    J00 = posj(0,0,90,0,90,0)
    q0 = posj(0,0,0,0,0,0)
    q1 = posj(90,0,90,0,90,0)
    q2 = posj(0,10,90,10,90,0)
    q3 = posj(0,10,80,0,90,0)
    q4 = posj(0,0,100,0,90,0)
    q5 = posj(20,0,90,20,90,0)
    qlist = [q0, q1, q2, q3, q4, q5]

    x60 = posx(366, -3, 443, 73, 178, 74)
    x61 = posx(4.5, -366, 443, 164, 178, 105)
    x62= posx(366, -3, 443, 73, 178, 74)
    x63 = posx(-2,366,443,164,178,74)
    x64 = posx(366, -3, 443, 73, 178, 74)
    x65 = posx(366,-3,443,73,178,74)
 

    state=  get_robot_state()
   

    X1a = posx(370, 670, 400, 0, 180, 0)
    X1a2= posx(370, 545, 400, 0, 180, 0)
    X1b = posx(370, 595, 400, 0, 180, 0)
    X1b2= posx(370, 670, 400, 0, 180, 0)
    X1c = posx(370, 420, 150, 0, 180, 0)
    X1c2= posx(370, 545, 150, 0, 180, 0)
    X1d = posx(370, 670, 275, 0, 180, 0)
    X1d2= posx(370, 795, 150, 0, 180, 0)

    xforward= posx(365,-3,437,0,0,0)
    xleft=posx(-3,365,437,90,-179,0)
    xright=posx(-4,-365,437,89,179,-180)
    xback=posx(-365,4,437,179,-179,0)
    xhome=posx(0,0,1055,180,0,-180)
    
    seg12 = posb(DR_CIRCLE, X1a, X1a2, radius=21)
    seg14 = posb(DR_LINE, X1b2, radius=20)
    seg15 = posb(DR_CIRCLE, X1c, X1c2, radius=22)
    seg16 = posb(DR_CIRCLE, X1d, X1d2, radius=23)
    my_posx=posx(559,34,651,45,180,45)
    my_posx_left = posx(-34.5,559,651,135,180,45)
    X1  =  posx(366, -3, 443, 73, 178, 74)
    X11 = posx(600,-80,443,73,178,74)
    X12 = posx(266,-80,430,73,178,74)
    X13 = posx(4,-366,443,164,178,105)
    X14=  posx(366,-3,443,73,178,74)
    X55= posx(0,0,1055,180,0,-180)
    dX = [10,0,0,10,0,0]
    J00 = posj(0,0,90,0,90)
    X1 = posx(559.0, 200, 651.5, 180, -180.0, 180)
    X2 = posx(559.0, 200, 400, 180, -180.0, 180)



    # left_posj=posj(0,0,0,0,0,0)
    # left_posx=posx(0,0,0,0,0,0)
    # left_pos=ikin(xleft,2)
    # left_posj[0]=left_pos[0]
    # left_posj[1]=left_pos[1]
    # left_posj[2]=left_pos[2]
    # left_posj[3]=left_pos[3]
    # left_posj[4]=left_pos[4]
    # left_posj[5]=left_pos[5]

    # #print(left_posj)
    # left_pos1=fkin(left_posj)
    # print(left_pos1)
    # left_posx[0]=left_pos1[0]
    # left_posx[1]=left_pos1[1]
    # left_posx[2]=left_pos1[2]
    # left_posx[3]=left_pos1[3]
    # left_posx[4]=left_pos1[4]
    # left_posx[5]=left_pos1[5]
    # print(left_posx)
    # movej(J00,vel=100,acc=100)
    # movej(q1,vel=100,acc=100)
    # movel(left_posx,vel=100,acc=100)
    # final=fkin(left_posx_final,DR_BASE)
    # print(left_posx_final)

    
    while not rospy.is_shutdown():
      # jp1 = get_desired_posx()
      # print("before",jp1 )
      # amovel(xleft,vel=100,acc=100)
      # jp1 = get_desired_posx()
      # print("after",jp1 )
      # time.sleep(10)
      amovejx(xforward,vel=100,acc=100,sol=2)
      amovejx(xleft,vel=100,acc=100,sol=2)
      amovejx(xright,vel=100,acc=100,sol=2)
      amovejx(xback,vel=100,acc=100,sol=2)
      amovejx(xright,vel=100,acc=100,sol=2)
      amovejx(xback,vel=100,acc=100,sol=2)
      amovejx(xright,vel=100,acc=100,sol=2)
      amovejx(xback,vel=100,acc=100,sol=2)
      amovejx(xleft,vel=100,acc=100,sol=2)
      amovejx(xback,vel=100,acc=100,sol=2)
      
      #  print(type(X1))
    # movej(q0,v=100,a=100)
    # enable_alter_motion(n=0,mode=DR_DPOS, ref=DR_BASE, limit_dPOS=[0,0],limit_dPOS_per=[0,0])
    # flag=False
    #  movej(J00,vel=50,acc=100)
     #set_singularity_handling (DR_AVOID)
    # movel(forward,vel=50,acc=100)
     #set_singularity_handling(DR_TASK_STOP)
    #  set_velx(30)
    #  set_accx(60)
    #  movel(ready_posj)
      
    #  state=  get_robot_state()
    #  print("@@@@@@@@@@#########",state) 
    #  if state==6:
        
    #      set_robot_control(CONTROL_RESET_SAFET_OFF)
    #      time.sleep(10)
    #      print("equal")
   #  robot_state = get_robot_mode()
   #  print("##################@@@@@@@@@@@@@@@@@@@@@@@@@@",robot_state)
  #   
    # th_id = (alter_thread, loop=True)
 #    T1 = threading.Thread(target=alter_thread)
   #  disable_alter_motion()
     #thread(flag)
   #  movej(q1,vel=100,acc=100)
     #thread(flag)  
        # pose_user1 = calc_coord(xforward, ref=DR_BASE, mod=0)
        # print("calc",pose_user1)
        
        # DR_USR1=set_user_cart_coord(xforward, xleft, xright, xback)
        # x1111 = get_desired_posx(DR_USR1)
        # print(x1111)
        # time.sleep(3)
       
      #  fkinposj= fkin(q1)
        # print("conv",fkinposj)
      ####  print("list",left_posx_final[1])
        #movej(left_posx,vel=100,acc=100)
       #### print("jmoved")
        # posx='posx'
        # fkinposj=posx+(str(fkinposj))
        # print("hi",fkinposj)
        
        # movel(my_posx_left,vel=100,acc=100)
        # print("@@@@@@@@@@@@@@@@l moved")

        # time.sleep(3)
        # ikinposx = ikin(fkinposj,0)
        # print(ikinposx)
      
        # ikinposx= posj(ikinposx)
        
        # print(fkinposj)
    #     amovejx(xforward,vel=100,acc=100,sol=2)
    #     amovejx(xleft,vel=100,acc=100,sol=2)
    #     amovejx(xback,vel=100,acc=100,sol=2)
    #     amovejx(xright,vel=100,acc=100,sol=2)
    #     amovejx(xhome,vel=100,acc=100,sol=2)
    # # movejx(X55,vel=100,acc=100,sol=2)
    #     print('@@@@1cycle@@@2')
    #     amovejx(xforward,vel=100,acc=100,sol=2)
    #     amovejx(xleft,vel=100,acc=100,sol=2)
    #     amovejx(xback,vel=100,acc=100,sol=2)
    #     amovejx(xright,vel=100,acc=100,sol=2)
    #     amovejx(xhome,vel=100,acc=100,sol=2)
    # #  movejx(X55,vel=100,acc=100,sol=2)
    #     print('@@@@@@@2cycle@@@@@')
    #     amovejx(xforward,vel=100,acc=100,sol=2)
    #     amovejx(xleft,vel=100,acc=100,sol=2)
    #     amovejx(xback,vel=100,acc=100,sol=2)
    #     amovejx(xright,vel=100,acc=100,sol=2)
    #     amovejx(xhome,vel=100,acc=100,sol=2)
    # #   movejx(X55,vel=100,acc=100,sol=2)
    #     print('@@@@@@@@@3cycle@@@@@@@@')
    #     amovejx(xforward,vel=100,acc=100,sol=2)
    #     amovejx(xleft,vel=100,acc=100,sol=2)
    #     amovejx(xback,vel=100,acc=100,sol=2)
    #     amovejx(xright,vel=100,acc=100,sol=2)
    #     amovejx(xhome,vel=100,acc=100,sol=2)
    # #   movejx(X55,vel=100,acc=100,sol=2)
    #     print('@@@@@@@@@@@4cycle@@@@@@@@@@')
    #     amovejx(xforward,vel=100,acc=100,sol=2)
    #     amovejx(xleft,vel=100,acc=100,sol=2)
    #     amovejx(xback,vel=100,acc=100,sol=2)
    #     amovejx(xright,vel=100,acc=100,sol=2)
    #     amovejx(xhome,vel=100,acc=100,sol=2)
    # #  movejx(X55,vel=100,acc=100,sol=2)
    #     print('@@@@@@@@@@@5cycle@@@@@@2')
    #     amovejx(xforward,vel=100,acc=100,sol=2)
    #     amovejx(xleft,vel=100,acc=100,sol=2)
    #     amovejx(xback,vel=100,acc=100,sol=2)
    #     amovejx(xright,vel=100,acc=100,sol=2)
    #     amovejx(xhome,vel=100,acc=100,sol=2)
    # #  movejx(X55,vel=100,acc=100,sol=2)
    #     print('@@@@@@@@6cycle@@@@@@@@2')
    #     amovejx(xforward,vel=100,acc=100,sol=2)
    #     amovejx(xleft,vel=100,acc=100,sol=2)
    #     amovejx(xback,vel=100,acc=100,sol=2)
    #     amovejx(xright,vel=100,acc=100,sol=2)
    #     amovejx(xhome,vel=100,acc=100,sol=2)
    # #  movejx(X55,vel=100,acc=100,sol=2)
    #     print('@@@@@@@@@@7cycle@@@@@@@@')
    #     amovejx(xforward,vel=100,acc=100,sol=2)
    #     amovejx(xleft,vel=100,acc=100,sol=2)
    #     amovejx(xback,vel=100,acc=100,sol=2)
    #     amovejx(xright,vel=100,acc=100,sol=2)
    #     amovejx(xhome,vel=100,acc=100,sol=2)
    # #  movejx(X55,vel=100,acc=100,sol=2)
    #     print('@@@@@@@@@@@28cycle@@@@@@@@@')
    #     amovejx(xforward,vel=100,acc=100,sol=2)
    #     amovejx(xleft,vel=100,acc=100,sol=2)
    #     amovejx(xback,vel=100,acc=100,sol=2)
    #     amovejx(xright,vel=100,acc=100,sol=2)
    #     amovejx(xhome,vel=100,acc=100,sol=2)
    # movejx(X55,vel=100,acc=100,sol=2)














  
    # thread_stop(th_id)
   #  disable_alter_motion() # deactivates alter motion
    print('good bye!')
