// Generated by gencpp from file dsr_msgs/GetCtrlBoxDigitalOutput.msg
// DO NOT EDIT!


#ifndef DSR_MSGS_MESSAGE_GETCTRLBOXDIGITALOUTPUT_H
#define DSR_MSGS_MESSAGE_GETCTRLBOXDIGITALOUTPUT_H

#include <ros/service_traits.h>


#include <dsr_msgs/GetCtrlBoxDigitalOutputRequest.h>
#include <dsr_msgs/GetCtrlBoxDigitalOutputResponse.h>


namespace dsr_msgs
{

struct GetCtrlBoxDigitalOutput
{

typedef GetCtrlBoxDigitalOutputRequest Request;
typedef GetCtrlBoxDigitalOutputResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetCtrlBoxDigitalOutput
} // namespace dsr_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::dsr_msgs::GetCtrlBoxDigitalOutput > {
  static const char* value()
  {
    return "66249e10e881902f2908d5046d836788";
  }

  static const char* value(const ::dsr_msgs::GetCtrlBoxDigitalOutput&) { return value(); }
};

template<>
struct DataType< ::dsr_msgs::GetCtrlBoxDigitalOutput > {
  static const char* value()
  {
    return "dsr_msgs/GetCtrlBoxDigitalOutput";
  }

  static const char* value(const ::dsr_msgs::GetCtrlBoxDigitalOutput&) { return value(); }
};


// service_traits::MD5Sum< ::dsr_msgs::GetCtrlBoxDigitalOutputRequest> should match
// service_traits::MD5Sum< ::dsr_msgs::GetCtrlBoxDigitalOutput >
template<>
struct MD5Sum< ::dsr_msgs::GetCtrlBoxDigitalOutputRequest>
{
  static const char* value()
  {
    return MD5Sum< ::dsr_msgs::GetCtrlBoxDigitalOutput >::value();
  }
  static const char* value(const ::dsr_msgs::GetCtrlBoxDigitalOutputRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::dsr_msgs::GetCtrlBoxDigitalOutputRequest> should match
// service_traits::DataType< ::dsr_msgs::GetCtrlBoxDigitalOutput >
template<>
struct DataType< ::dsr_msgs::GetCtrlBoxDigitalOutputRequest>
{
  static const char* value()
  {
    return DataType< ::dsr_msgs::GetCtrlBoxDigitalOutput >::value();
  }
  static const char* value(const ::dsr_msgs::GetCtrlBoxDigitalOutputRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::dsr_msgs::GetCtrlBoxDigitalOutputResponse> should match
// service_traits::MD5Sum< ::dsr_msgs::GetCtrlBoxDigitalOutput >
template<>
struct MD5Sum< ::dsr_msgs::GetCtrlBoxDigitalOutputResponse>
{
  static const char* value()
  {
    return MD5Sum< ::dsr_msgs::GetCtrlBoxDigitalOutput >::value();
  }
  static const char* value(const ::dsr_msgs::GetCtrlBoxDigitalOutputResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::dsr_msgs::GetCtrlBoxDigitalOutputResponse> should match
// service_traits::DataType< ::dsr_msgs::GetCtrlBoxDigitalOutput >
template<>
struct DataType< ::dsr_msgs::GetCtrlBoxDigitalOutputResponse>
{
  static const char* value()
  {
    return DataType< ::dsr_msgs::GetCtrlBoxDigitalOutput >::value();
  }
  static const char* value(const ::dsr_msgs::GetCtrlBoxDigitalOutputResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DSR_MSGS_MESSAGE_GETCTRLBOXDIGITALOUTPUT_H
