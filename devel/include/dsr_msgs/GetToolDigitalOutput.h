// Generated by gencpp from file dsr_msgs/GetToolDigitalOutput.msg
// DO NOT EDIT!


#ifndef DSR_MSGS_MESSAGE_GETTOOLDIGITALOUTPUT_H
#define DSR_MSGS_MESSAGE_GETTOOLDIGITALOUTPUT_H

#include <ros/service_traits.h>


#include <dsr_msgs/GetToolDigitalOutputRequest.h>
#include <dsr_msgs/GetToolDigitalOutputResponse.h>


namespace dsr_msgs
{

struct GetToolDigitalOutput
{

typedef GetToolDigitalOutputRequest Request;
typedef GetToolDigitalOutputResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetToolDigitalOutput
} // namespace dsr_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::dsr_msgs::GetToolDigitalOutput > {
  static const char* value()
  {
    return "66249e10e881902f2908d5046d836788";
  }

  static const char* value(const ::dsr_msgs::GetToolDigitalOutput&) { return value(); }
};

template<>
struct DataType< ::dsr_msgs::GetToolDigitalOutput > {
  static const char* value()
  {
    return "dsr_msgs/GetToolDigitalOutput";
  }

  static const char* value(const ::dsr_msgs::GetToolDigitalOutput&) { return value(); }
};


// service_traits::MD5Sum< ::dsr_msgs::GetToolDigitalOutputRequest> should match
// service_traits::MD5Sum< ::dsr_msgs::GetToolDigitalOutput >
template<>
struct MD5Sum< ::dsr_msgs::GetToolDigitalOutputRequest>
{
  static const char* value()
  {
    return MD5Sum< ::dsr_msgs::GetToolDigitalOutput >::value();
  }
  static const char* value(const ::dsr_msgs::GetToolDigitalOutputRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::dsr_msgs::GetToolDigitalOutputRequest> should match
// service_traits::DataType< ::dsr_msgs::GetToolDigitalOutput >
template<>
struct DataType< ::dsr_msgs::GetToolDigitalOutputRequest>
{
  static const char* value()
  {
    return DataType< ::dsr_msgs::GetToolDigitalOutput >::value();
  }
  static const char* value(const ::dsr_msgs::GetToolDigitalOutputRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::dsr_msgs::GetToolDigitalOutputResponse> should match
// service_traits::MD5Sum< ::dsr_msgs::GetToolDigitalOutput >
template<>
struct MD5Sum< ::dsr_msgs::GetToolDigitalOutputResponse>
{
  static const char* value()
  {
    return MD5Sum< ::dsr_msgs::GetToolDigitalOutput >::value();
  }
  static const char* value(const ::dsr_msgs::GetToolDigitalOutputResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::dsr_msgs::GetToolDigitalOutputResponse> should match
// service_traits::DataType< ::dsr_msgs::GetToolDigitalOutput >
template<>
struct DataType< ::dsr_msgs::GetToolDigitalOutputResponse>
{
  static const char* value()
  {
    return DataType< ::dsr_msgs::GetToolDigitalOutput >::value();
  }
  static const char* value(const ::dsr_msgs::GetToolDigitalOutputResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DSR_MSGS_MESSAGE_GETTOOLDIGITALOUTPUT_H
