# Install script for directory: /home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/ubuntu/jv_ws/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/dsr_msgs/msg" TYPE FILE FILES
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/msg/LogAlarm.msg"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/msg/ModbusState.msg"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/msg/RobotError.msg"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/msg/RobotState.msg"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/msg/RobotStop.msg"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/msg/JogMultiAxis.msg"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/msg/AlterMotionStream.msg"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/msg/ServoJStream.msg"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/msg/ServoLStream.msg"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/msg/SpeedJStream.msg"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/msg/SpeedLStream.msg"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/msg/RobotStateRT.msg"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/msg/ServoJRTStream.msg"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/msg/ServoLRTStream.msg"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/msg/SpeedJRTStream.msg"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/msg/SpeedLRTStream.msg"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/msg/TorqueRTStream.msg"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/dsr_msgs/srv" TYPE FILE FILES
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./system/SetRobotMode.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./system/GetRobotMode.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./system/SetRobotSystem.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./system/GetRobotSystem.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./system/SetRobotSpeedMode.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./system/GetRobotSpeedMode.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./system/GetCurrentPose.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./system/SetSafeStopResetType.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./system/GetLastAlarm.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./system/GetRobotState.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./system/SetRobotControl.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./system/ManageAccessControl.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./system/ReleaseProtectiveStop.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./motion/MoveJoint.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./motion/MoveLine.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./motion/MoveJointx.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./motion/MoveCircle.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./motion/MoveSplineJoint.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./motion/MoveSplineTask.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./motion/MoveBlending.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./motion/MoveSpiral.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./motion/MovePeriodic.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./motion/MoveWait.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./motion/Jog.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./motion/JogMulti.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./motion/MoveStop.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./motion/MovePause.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./motion/MoveResume.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./motion/Trans.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./motion/Fkin.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./motion/Ikin.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./motion/IkinEx.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./motion/SetRefCoord.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./motion/MoveHome.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./motion/CheckMotion.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./motion/ChangeOperationSpeed.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./motion/EnableAlterMotion.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./motion/AlterMotion.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./motion/DisableAlterMotion.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./motion/SetSingularityHandling.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./aux_control/GetControlMode.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./aux_control/GetControlSpace.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./aux_control/GetCurrentPosj.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./aux_control/GetDesiredPosj.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./aux_control/GetCurrentVelj.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./aux_control/GetDesiredVelj.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./aux_control/GetCurrentPosx.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./aux_control/GetCurrentToolFlangePosx.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./aux_control/GetCurrentVelx.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./aux_control/GetDesiredPosx.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./aux_control/GetDesiredVelx.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./aux_control/GetCurrentSolutionSpace.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./aux_control/GetCurrentRotm.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./aux_control/GetJointTorque.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./aux_control/GetExternalTorque.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./aux_control/GetToolForce.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./aux_control/GetSolutionSpace.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./aux_control/GetOrientationError.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./force/ParallelAxis1.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./force/ParallelAxis2.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./force/AlignAxis1.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./force/AlignAxis2.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./force/IsDoneBoltTightening.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./force/ReleaseComplianceCtrl.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./force/TaskComplianceCtrl.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./force/SetStiffnessx.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./force/CalcCoord.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./force/SetUserCartCoord1.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./force/SetUserCartCoord2.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./force/SetUserCartCoord3.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./force/OverwriteUserCartCoord.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./force/GetUserCartCoord.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./force/SetDesiredForce.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./force/ReleaseForce.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./force/CheckPositionCondition.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./force/CheckForceCondition.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./force/CheckOrientationCondition1.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./force/CheckOrientationCondition2.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./force/CoordTransform.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./force/GetWorkpieceWeight.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./force/ResetWorkpieceWeight.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./tool/ConfigCreateTool.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./tool/ConfigDeleteTool.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./tool/SetCurrentTool.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./tool/GetCurrentTool.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./tool/SetToolShape.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./tcp/ConfigCreateTcp.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./tcp/ConfigDeleteTcp.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./tcp/SetCurrentTcp.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./tcp/GetCurrentTcp.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./io/SetToolDigitalOutput.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./io/GetToolDigitalOutput.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./io/GetToolDigitalInput.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./io/SetCtrlBoxDigitalOutput.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./io/GetCtrlBoxDigitalOutput.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./io/GetCtrlBoxDigitalInput.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./io/SetCtrlBoxAnalogInputType.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./io/SetCtrlBoxAnalogOutputType.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./io/SetCtrlBoxAnalogOutput.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./io/GetCtrlBoxAnalogInput.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./modbus/ConfigCreateModbus.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./modbus/ConfigDeleteModbus.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./modbus/SetModbusOutput.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./modbus/GetModbusInput.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./drl/DrlStart.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./drl/DrlStop.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./drl/DrlPause.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./drl/DrlResume.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./drl/GetDrlState.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./gripper/Robotiq2FClose.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./gripper/Robotiq2FOpen.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./gripper/Robotiq2FMove.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./gripper/SerialSendData.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./realtime/ConnectRTControl.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./realtime/DisconnectRTControl.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./realtime/GetRTControlInputDataList.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./realtime/GetRTControlInputVersionList.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./realtime/GetRTControlOutputDataList.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./realtime/GetRTControlOutputVersionList.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./realtime/ReadDataRT.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./realtime/SetAccJRT.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./realtime/SetAccXRT.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./realtime/SetRTControlInput.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./realtime/SetRTControlOutput.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./realtime/SetVelJRT.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./realtime/SetVelXRT.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./realtime/StartRTControl.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./realtime/StopRTControl.srv"
    "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/srv/./realtime/WriteDataRT.srv"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/dsr_msgs/cmake" TYPE FILE FILES "/home/ubuntu/jv_ws/build/doosan-robot/dsr_msgs/catkin_generated/installspace/dsr_msgs-msg-paths.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/ubuntu/jv_ws/devel/include/dsr_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roseus/ros" TYPE DIRECTORY FILES "/home/ubuntu/jv_ws/devel/share/roseus/ros/dsr_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/common-lisp/ros" TYPE DIRECTORY FILES "/home/ubuntu/jv_ws/devel/share/common-lisp/ros/dsr_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/gennodejs/ros" TYPE DIRECTORY FILES "/home/ubuntu/jv_ws/devel/share/gennodejs/ros/dsr_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND "/usr/bin/python3" -m compileall "/home/ubuntu/jv_ws/devel/lib/python3/dist-packages/dsr_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3/dist-packages" TYPE DIRECTORY FILES "/home/ubuntu/jv_ws/devel/lib/python3/dist-packages/dsr_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/ubuntu/jv_ws/build/doosan-robot/dsr_msgs/catkin_generated/installspace/dsr_msgs.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/dsr_msgs/cmake" TYPE FILE FILES "/home/ubuntu/jv_ws/build/doosan-robot/dsr_msgs/catkin_generated/installspace/dsr_msgs-msg-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/dsr_msgs/cmake" TYPE FILE FILES
    "/home/ubuntu/jv_ws/build/doosan-robot/dsr_msgs/catkin_generated/installspace/dsr_msgsConfig.cmake"
    "/home/ubuntu/jv_ws/build/doosan-robot/dsr_msgs/catkin_generated/installspace/dsr_msgsConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/dsr_msgs" TYPE FILE FILES "/home/ubuntu/jv_ws/src/doosan-robot/dsr_msgs/package.xml")
endif()

