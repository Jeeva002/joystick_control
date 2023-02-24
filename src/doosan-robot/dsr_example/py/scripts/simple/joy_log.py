#!/usr/bin/env python3
import rospy
from geometry_msgs.msg import Twist
from sensor_msgs.msg import Joy
#from datetime import datetime
#import datetime
from datetime import datetime
from datetime import date
import time
import csv 



def callback(data):
    today = date.today()
    now = datetime.now()
    date1 = today.strftime("%d/%m/%Y")
    current_time = now.strftime(" %H:%M:%S")
    axesx=round(data.axes[0],4)
    axesy=round(data.axes[1],4)
    axesz=round(data.axes[2],4)
    axesrx=round(data.axes[3],4)
    axesry=round(data.axes[4],4)
    axesrz=round(data.axes[5],4)
    list_of_tuples = [(date1,current_time,axesx,axesy,axesz,axesrx,axesry, axesrz)]
    with open('joy_logdata.csv', 'a', encoding='UTF8') as f:
     writer = csv.writer(f, delimiter=" ", skipinitialspace=True)
     writer.writerow(list_of_tuples)

   

   
def start():
   
        global pub
        pub = rospy.Publisher('cmd_vel', Twist,queue_size=10)
        rospy.Subscriber("joy", Joy, callback)
        rospy.init_node('Joy2')
        rospy.spin()
if __name__ == '__main__':
        start()
    