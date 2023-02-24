#!/usr/bin/env python3
import rospy
from geometry_msgs.msg import Twist
from sensor_msgs.msg import Joy  

def callback(data):
        twist = Twist()
        twist.linear.x = 4*data.axes[1]
        twist.angular.z = 4*data.axes[0]
        pub.publish(twist)
        print(twist.linear.x)
        rate=rospy.Rate(1000)
        rate.sleep()
#def mv(self\\):
 #         print("hi",self.twist.linear.x)

      
      #  rospy.Timer(rospy.Duration(1.0/10.0),  callback())
if __name__ == '__main__':
        global pub
        rospy.init_node('Joy2Turtle',anonymous=True)
      #  rate = rospy.Rate(-1000)
        data=rospy.Subscriber("joy", Joy, callback)
        pub = rospy.Publisher('cmd_vel', Twist,queue_size=10)
       # rate.sleep()
       
      #  T1 = threading.Thread(target=callback())
      #  T1.start()
        #rospy.timer(rospy.Duration(4),callback(data))
        rospy.spin()
      
 
      
                
               