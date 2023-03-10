// Generated by gencpp from file dsr_msgs/StartRTControl.msg
// DO NOT EDIT!


#ifndef DSR_MSGS_MESSAGE_STARTRTCONTROL_H
#define DSR_MSGS_MESSAGE_STARTRTCONTROL_H

#include <ros/service_traits.h>


#include <dsr_msgs/StartRTControlRequest.h>
#include <dsr_msgs/StartRTControlResponse.h>


namespace dsr_msgs
{

struct StartRTControl
{

typedef StartRTControlRequest Request;
typedef StartRTControlResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct StartRTControl
} // namespace dsr_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::dsr_msgs::StartRTControl > {
  static const char* value()
  {
    return "358e233cde0c8a8bcfea4ce193f8fc15";
  }

  static const char* value(const ::dsr_msgs::StartRTControl&) { return value(); }
};

template<>
struct DataType< ::dsr_msgs::StartRTControl > {
  static const char* value()
  {
    return "dsr_msgs/StartRTControl";
  }

  static const char* value(const ::dsr_msgs::StartRTControl&) { return value(); }
};


// service_traits::MD5Sum< ::dsr_msgs::StartRTControlRequest> should match
// service_traits::MD5Sum< ::dsr_msgs::StartRTControl >
template<>
struct MD5Sum< ::dsr_msgs::StartRTControlRequest>
{
  static const char* value()
  {
    return MD5Sum< ::dsr_msgs::StartRTControl >::value();
  }
  static const char* value(const ::dsr_msgs::StartRTControlRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::dsr_msgs::StartRTControlRequest> should match
// service_traits::DataType< ::dsr_msgs::StartRTControl >
template<>
struct DataType< ::dsr_msgs::StartRTControlRequest>
{
  static const char* value()
  {
    return DataType< ::dsr_msgs::StartRTControl >::value();
  }
  static const char* value(const ::dsr_msgs::StartRTControlRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::dsr_msgs::StartRTControlResponse> should match
// service_traits::MD5Sum< ::dsr_msgs::StartRTControl >
template<>
struct MD5Sum< ::dsr_msgs::StartRTControlResponse>
{
  static const char* value()
  {
    return MD5Sum< ::dsr_msgs::StartRTControl >::value();
  }
  static const char* value(const ::dsr_msgs::StartRTControlResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::dsr_msgs::StartRTControlResponse> should match
// service_traits::DataType< ::dsr_msgs::StartRTControl >
template<>
struct DataType< ::dsr_msgs::StartRTControlResponse>
{
  static const char* value()
  {
    return DataType< ::dsr_msgs::StartRTControl >::value();
  }
  static const char* value(const ::dsr_msgs::StartRTControlResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DSR_MSGS_MESSAGE_STARTRTCONTROL_H
