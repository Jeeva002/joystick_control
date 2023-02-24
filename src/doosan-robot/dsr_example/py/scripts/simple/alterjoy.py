#!/usr/bin/env python3

import rospy
import sys
import os
import threading
from mqtt_bridge.msg import msgMqttSub
# from dsr_msgs.msg import JogMultiAxis
sys.dont_write_bytecode = True
sys.path.append( os.path.abspath(os.path.join(os.path.dirname(__file__),"../../../../common/imp")) ) 

ROBOT_ID     = "dsr01"        
ROBOT_MODEL  = "a0509"  

import DR_init
DR_init.__dsr__id = ROBOT_ID
DR_init.__dsr__model = ROBOT_MODEL
from DSR_ROBOT import *
from DRFC import *
from dsr_msgs.msg import *
from dsr_msgs.srv import *

nameSpaceObj = CDsrRobot(ROBOT_ID, ROBOT_MODEL)
movement_flag = True
robomovement=[0,0,0,0,0,0]
ready_posj=[0,0,90,0,90,0]

class roboCore:

    # def __init__(self):
    
    #   self.countx = 0 
 
    #   self.ready_pos=[0,0,90,0,90,0]
    #   self.robovelocity=100
    #   self.roboacceleration=100
    #   self.homeflag=False

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

       
       

roboobj = roboCore()

def msgRobotState_cb(msg):
    msgRobotState_cb.count += 1

    if (0==(msgRobotState_cb.count % 100)): 
        rospy.loginfo("________ ROBOT STATUS ________")
        print("  robot_state           : %d" % (msg.robot_state))
        print("  robot_state_str       : %s" % (msg.robot_state_str))
        print("  actual_mode           : %d" % (msg.actual_mode))
        print("  actual_space          : %d" % (msg.actual_space))
        print("  solution_space        : %d" % (msg.solution_space))
        print("  current_posx          : %7.3f %7.3f %7.3f %7.3f %7.3f %7.3f" % (msg.current_posx[0],msg.current_posx[1],msg.current_posx[2],msg.current_posx[3],msg.current_posx[4],msg.current_posx[5]))
        print("  current_posj          : %7.3f %7.3f %7.3f %7.3f %7.3f %7.3f" % (msg.current_posj[0],msg.current_posj[1],msg.current_posj[2],msg.current_posj[3],msg.current_posj[4],msg.current_posj[5]))
        print("  current_velj          : %7.3f %7.3f %7.3f %7.3f %7.3f %7.3f" % (msg.current_velj[0],msg.current_velj[1],msg.current_velj[2],msg.current_velj[3],msg.current_velj[4],msg.current_velj[5]))
      
        rospy.loginfo("_________ROBOT LOG_________")
        level = get_last_alarm().level
        print("level:", str(level))
        group = get_last_alarm().group
        print("group:",  str(group))
        index = get_last_alarm().index
        print("index:",   str(index))
        param = get_last_alarm().param
        print("param:",  str(param))     
    
msgRobotState_cb.count = 0 


def threadSubscriber():
    rospy.Subscriber('/'+ROBOT_ID +ROBOT_MODEL+'/state', RobotState, msgRobotState_cb)
    rospy.spin()

def mqtt_msg_callback(msg_mqtt_sub):
    joy_x=round(msg_mqtt_sub.message[0],1)
    joy_y=round(msg_mqtt_sub.message[1],1)
    joy_z=round(msg_mqtt_sub.message[2],1)
    joy_rx=round(msg_mqtt_sub.message[3],1)
    joy_ry=round(msg_mqtt_sub.message[4],1)
    joy_rz=round(msg_mqtt_sub.message[5],1)

    # roboobj.axes_function(joy_x,joy_y,joy_z,joy_rx,joy_ry,joy_rz)
    robomovement[0]=joy_x
    robomovement[1]=joy_y
    robomovement[2]=joy_z
    robomovement[3]=joy_rx
    robomovement[4]=joy_ry
    robomovement[5]=joy_rz
    print("moving")
    nameSpaceObj.amovel(robomovement,vel = 100,acc = 100,ref=DR_BASE, mod=DR_FC_MOD_REL)
    print("moved")
def start():
    rospy.init_node('mqtt_msg_subscriber')
    # publisher = rospy.Publisher('/dsr01a0509/jog_multi' , JogMultiAxis , queue_size=10)
    rospy.Subscriber('/mqtt_sub' , msgMqttSub , callback=mqtt_msg_callback)
    t1 = threading.Thread(target=threadSubscriber)
    t1.daemon = True
    t1.start()
    rospy.spin()