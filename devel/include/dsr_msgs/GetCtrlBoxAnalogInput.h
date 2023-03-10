// Generated by gencpp from file dsr_msgs/GetCtrlBoxAnalogInput.msg
// DO NOT EDIT!


#ifndef DSR_MSGS_MESSAGE_GETCTRLBOXANALOGINPUT_H
#define DSR_MSGS_MESSAGE_GETCTRLBOXANALOGINPUT_H

#include <ros/service_traits.h>


#include <dsr_msgs/GetCtrlBoxAnalogInputRequest.h>
#include <dsr_msgs/GetCtrlBoxAnalogInputResponse.h>


namespace dsr_msgs
{

struct GetCtrlBoxAnalogInput
{

typedef GetCtrlBoxAnalogInputRequest Request;
typedef GetCtrlBoxAnalogInputResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetCtrlBoxAnalogInput
} // namespace dsr_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::dsr_msgs::GetCtrlBoxAnalogInput > {
  static const char* value()
  {
    return "bfe8574a1267a2cf39f4166121f897f2";
  }

  static const char* value(const ::dsr_msgs::GetCtrlBoxAnalogInput&) { return value(); }
};

template<>
struct DataType< ::dsr_msgs::GetCtrlBoxAnalogInput > {
  static const char* value()
  {
    return "dsr_msgs/GetCtrlBoxAnalogInput";
  }

  static const char* value(const ::dsr_msgs::GetCtrlBoxAnalogInput&) { return value(); }
};


// service_traits::MD5Sum< ::dsr_msgs::GetCtrlBoxAnalogInputRequest> should match
// service_traits::MD5Sum< ::dsr_msgs::GetCtrlBoxAnalogInput >
template<>
struct MD5Sum< ::dsr_msgs::GetCtrlBoxAnalogInputRequest>
{
  static const char* value()
  {
    return MD5Sum< ::dsr_msgs::GetCtrlBoxAnalogInput >::value();
  }
  static const char* value(const ::dsr_msgs::GetCtrlBoxAnalogInputRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::dsr_msgs::GetCtrlBoxAnalogInputRequest> should match
// service_traits::DataType< ::dsr_msgs::GetCtrlBoxAnalogInput >
template<>
struct DataType< ::dsr_msgs::GetCtrlBoxAnalogInputRequest>
{
  static const char* value()
  {
    return DataType< ::dsr_msgs::GetCtrlBoxAnalogInput >::value();
  }
  static const char* value(const ::dsr_msgs::GetCtrlBoxAnalogInputRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::dsr_msgs::GetCtrlBoxAnalogInputResponse> should match
// service_traits::MD5Sum< ::dsr_msgs::GetCtrlBoxAnalogInput >
template<>
struct MD5Sum< ::dsr_msgs::GetCtrlBoxAnalogInputResponse>
{
  static const char* value()
  {
    return MD5Sum< ::dsr_msgs::GetCtrlBoxAnalogInput >::value();
  }
  static const char* value(const ::dsr_msgs::GetCtrlBoxAnalogInputResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::dsr_msgs::GetCtrlBoxAnalogInputResponse> should match
// service_traits::DataType< ::dsr_msgs::GetCtrlBoxAnalogInput >
template<>
struct DataType< ::dsr_msgs::GetCtrlBoxAnalogInputResponse>
{
  static const char* value()
  {
    return DataType< ::dsr_msgs::GetCtrlBoxAnalogInput >::value();
  }
  static const char* value(const ::dsr_msgs::GetCtrlBoxAnalogInputResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DSR_MSGS_MESSAGE_GETCTRLBOXANALOGINPUT_H
