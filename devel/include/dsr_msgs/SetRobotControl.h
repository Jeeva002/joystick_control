// Generated by gencpp from file dsr_msgs/SetRobotControl.msg
// DO NOT EDIT!


#ifndef DSR_MSGS_MESSAGE_SETROBOTCONTROL_H
#define DSR_MSGS_MESSAGE_SETROBOTCONTROL_H

#include <ros/service_traits.h>


#include <dsr_msgs/SetRobotControlRequest.h>
#include <dsr_msgs/SetRobotControlResponse.h>


namespace dsr_msgs
{

struct SetRobotControl
{

typedef SetRobotControlRequest Request;
typedef SetRobotControlResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SetRobotControl
} // namespace dsr_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::dsr_msgs::SetRobotControl > {
  static const char* value()
  {
    return "e3c7c3cfa0120a8cf83abd30ec7bcbc3";
  }

  static const char* value(const ::dsr_msgs::SetRobotControl&) { return value(); }
};

template<>
struct DataType< ::dsr_msgs::SetRobotControl > {
  static const char* value()
  {
    return "dsr_msgs/SetRobotControl";
  }

  static const char* value(const ::dsr_msgs::SetRobotControl&) { return value(); }
};


// service_traits::MD5Sum< ::dsr_msgs::SetRobotControlRequest> should match
// service_traits::MD5Sum< ::dsr_msgs::SetRobotControl >
template<>
struct MD5Sum< ::dsr_msgs::SetRobotControlRequest>
{
  static const char* value()
  {
    return MD5Sum< ::dsr_msgs::SetRobotControl >::value();
  }
  static const char* value(const ::dsr_msgs::SetRobotControlRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::dsr_msgs::SetRobotControlRequest> should match
// service_traits::DataType< ::dsr_msgs::SetRobotControl >
template<>
struct DataType< ::dsr_msgs::SetRobotControlRequest>
{
  static const char* value()
  {
    return DataType< ::dsr_msgs::SetRobotControl >::value();
  }
  static const char* value(const ::dsr_msgs::SetRobotControlRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::dsr_msgs::SetRobotControlResponse> should match
// service_traits::MD5Sum< ::dsr_msgs::SetRobotControl >
template<>
struct MD5Sum< ::dsr_msgs::SetRobotControlResponse>
{
  static const char* value()
  {
    return MD5Sum< ::dsr_msgs::SetRobotControl >::value();
  }
  static const char* value(const ::dsr_msgs::SetRobotControlResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::dsr_msgs::SetRobotControlResponse> should match
// service_traits::DataType< ::dsr_msgs::SetRobotControl >
template<>
struct DataType< ::dsr_msgs::SetRobotControlResponse>
{
  static const char* value()
  {
    return DataType< ::dsr_msgs::SetRobotControl >::value();
  }
  static const char* value(const ::dsr_msgs::SetRobotControlResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DSR_MSGS_MESSAGE_SETROBOTCONTROL_H
