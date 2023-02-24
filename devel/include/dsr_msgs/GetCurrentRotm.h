// Generated by gencpp from file dsr_msgs/GetCurrentRotm.msg
// DO NOT EDIT!


#ifndef DSR_MSGS_MESSAGE_GETCURRENTROTM_H
#define DSR_MSGS_MESSAGE_GETCURRENTROTM_H

#include <ros/service_traits.h>


#include <dsr_msgs/GetCurrentRotmRequest.h>
#include <dsr_msgs/GetCurrentRotmResponse.h>


namespace dsr_msgs
{

struct GetCurrentRotm
{

typedef GetCurrentRotmRequest Request;
typedef GetCurrentRotmResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetCurrentRotm
} // namespace dsr_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::dsr_msgs::GetCurrentRotm > {
  static const char* value()
  {
    return "b547f5d15d7bef34dd869e770e7e403f";
  }

  static const char* value(const ::dsr_msgs::GetCurrentRotm&) { return value(); }
};

template<>
struct DataType< ::dsr_msgs::GetCurrentRotm > {
  static const char* value()
  {
    return "dsr_msgs/GetCurrentRotm";
  }

  static const char* value(const ::dsr_msgs::GetCurrentRotm&) { return value(); }
};


// service_traits::MD5Sum< ::dsr_msgs::GetCurrentRotmRequest> should match
// service_traits::MD5Sum< ::dsr_msgs::GetCurrentRotm >
template<>
struct MD5Sum< ::dsr_msgs::GetCurrentRotmRequest>
{
  static const char* value()
  {
    return MD5Sum< ::dsr_msgs::GetCurrentRotm >::value();
  }
  static const char* value(const ::dsr_msgs::GetCurrentRotmRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::dsr_msgs::GetCurrentRotmRequest> should match
// service_traits::DataType< ::dsr_msgs::GetCurrentRotm >
template<>
struct DataType< ::dsr_msgs::GetCurrentRotmRequest>
{
  static const char* value()
  {
    return DataType< ::dsr_msgs::GetCurrentRotm >::value();
  }
  static const char* value(const ::dsr_msgs::GetCurrentRotmRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::dsr_msgs::GetCurrentRotmResponse> should match
// service_traits::MD5Sum< ::dsr_msgs::GetCurrentRotm >
template<>
struct MD5Sum< ::dsr_msgs::GetCurrentRotmResponse>
{
  static const char* value()
  {
    return MD5Sum< ::dsr_msgs::GetCurrentRotm >::value();
  }
  static const char* value(const ::dsr_msgs::GetCurrentRotmResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::dsr_msgs::GetCurrentRotmResponse> should match
// service_traits::DataType< ::dsr_msgs::GetCurrentRotm >
template<>
struct DataType< ::dsr_msgs::GetCurrentRotmResponse>
{
  static const char* value()
  {
    return DataType< ::dsr_msgs::GetCurrentRotm >::value();
  }
  static const char* value(const ::dsr_msgs::GetCurrentRotmResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DSR_MSGS_MESSAGE_GETCURRENTROTM_H