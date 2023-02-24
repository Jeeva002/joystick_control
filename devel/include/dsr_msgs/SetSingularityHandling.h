// Generated by gencpp from file dsr_msgs/SetSingularityHandling.msg
// DO NOT EDIT!


#ifndef DSR_MSGS_MESSAGE_SETSINGULARITYHANDLING_H
#define DSR_MSGS_MESSAGE_SETSINGULARITYHANDLING_H

#include <ros/service_traits.h>


#include <dsr_msgs/SetSingularityHandlingRequest.h>
#include <dsr_msgs/SetSingularityHandlingResponse.h>


namespace dsr_msgs
{

struct SetSingularityHandling
{

typedef SetSingularityHandlingRequest Request;
typedef SetSingularityHandlingResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SetSingularityHandling
} // namespace dsr_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::dsr_msgs::SetSingularityHandling > {
  static const char* value()
  {
    return "5da578ca824a6682cf704b593bb1a59e";
  }

  static const char* value(const ::dsr_msgs::SetSingularityHandling&) { return value(); }
};

template<>
struct DataType< ::dsr_msgs::SetSingularityHandling > {
  static const char* value()
  {
    return "dsr_msgs/SetSingularityHandling";
  }

  static const char* value(const ::dsr_msgs::SetSingularityHandling&) { return value(); }
};


// service_traits::MD5Sum< ::dsr_msgs::SetSingularityHandlingRequest> should match
// service_traits::MD5Sum< ::dsr_msgs::SetSingularityHandling >
template<>
struct MD5Sum< ::dsr_msgs::SetSingularityHandlingRequest>
{
  static const char* value()
  {
    return MD5Sum< ::dsr_msgs::SetSingularityHandling >::value();
  }
  static const char* value(const ::dsr_msgs::SetSingularityHandlingRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::dsr_msgs::SetSingularityHandlingRequest> should match
// service_traits::DataType< ::dsr_msgs::SetSingularityHandling >
template<>
struct DataType< ::dsr_msgs::SetSingularityHandlingRequest>
{
  static const char* value()
  {
    return DataType< ::dsr_msgs::SetSingularityHandling >::value();
  }
  static const char* value(const ::dsr_msgs::SetSingularityHandlingRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::dsr_msgs::SetSingularityHandlingResponse> should match
// service_traits::MD5Sum< ::dsr_msgs::SetSingularityHandling >
template<>
struct MD5Sum< ::dsr_msgs::SetSingularityHandlingResponse>
{
  static const char* value()
  {
    return MD5Sum< ::dsr_msgs::SetSingularityHandling >::value();
  }
  static const char* value(const ::dsr_msgs::SetSingularityHandlingResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::dsr_msgs::SetSingularityHandlingResponse> should match
// service_traits::DataType< ::dsr_msgs::SetSingularityHandling >
template<>
struct DataType< ::dsr_msgs::SetSingularityHandlingResponse>
{
  static const char* value()
  {
    return DataType< ::dsr_msgs::SetSingularityHandling >::value();
  }
  static const char* value(const ::dsr_msgs::SetSingularityHandlingResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DSR_MSGS_MESSAGE_SETSINGULARITYHANDLING_H
