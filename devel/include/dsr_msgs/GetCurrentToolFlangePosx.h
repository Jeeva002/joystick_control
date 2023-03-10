// Generated by gencpp from file dsr_msgs/GetCurrentToolFlangePosx.msg
// DO NOT EDIT!


#ifndef DSR_MSGS_MESSAGE_GETCURRENTTOOLFLANGEPOSX_H
#define DSR_MSGS_MESSAGE_GETCURRENTTOOLFLANGEPOSX_H

#include <ros/service_traits.h>


#include <dsr_msgs/GetCurrentToolFlangePosxRequest.h>
#include <dsr_msgs/GetCurrentToolFlangePosxResponse.h>


namespace dsr_msgs
{

struct GetCurrentToolFlangePosx
{

typedef GetCurrentToolFlangePosxRequest Request;
typedef GetCurrentToolFlangePosxResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetCurrentToolFlangePosx
} // namespace dsr_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::dsr_msgs::GetCurrentToolFlangePosx > {
  static const char* value()
  {
    return "88547bdd1d2b717be93c04de7f32b5ea";
  }

  static const char* value(const ::dsr_msgs::GetCurrentToolFlangePosx&) { return value(); }
};

template<>
struct DataType< ::dsr_msgs::GetCurrentToolFlangePosx > {
  static const char* value()
  {
    return "dsr_msgs/GetCurrentToolFlangePosx";
  }

  static const char* value(const ::dsr_msgs::GetCurrentToolFlangePosx&) { return value(); }
};


// service_traits::MD5Sum< ::dsr_msgs::GetCurrentToolFlangePosxRequest> should match
// service_traits::MD5Sum< ::dsr_msgs::GetCurrentToolFlangePosx >
template<>
struct MD5Sum< ::dsr_msgs::GetCurrentToolFlangePosxRequest>
{
  static const char* value()
  {
    return MD5Sum< ::dsr_msgs::GetCurrentToolFlangePosx >::value();
  }
  static const char* value(const ::dsr_msgs::GetCurrentToolFlangePosxRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::dsr_msgs::GetCurrentToolFlangePosxRequest> should match
// service_traits::DataType< ::dsr_msgs::GetCurrentToolFlangePosx >
template<>
struct DataType< ::dsr_msgs::GetCurrentToolFlangePosxRequest>
{
  static const char* value()
  {
    return DataType< ::dsr_msgs::GetCurrentToolFlangePosx >::value();
  }
  static const char* value(const ::dsr_msgs::GetCurrentToolFlangePosxRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::dsr_msgs::GetCurrentToolFlangePosxResponse> should match
// service_traits::MD5Sum< ::dsr_msgs::GetCurrentToolFlangePosx >
template<>
struct MD5Sum< ::dsr_msgs::GetCurrentToolFlangePosxResponse>
{
  static const char* value()
  {
    return MD5Sum< ::dsr_msgs::GetCurrentToolFlangePosx >::value();
  }
  static const char* value(const ::dsr_msgs::GetCurrentToolFlangePosxResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::dsr_msgs::GetCurrentToolFlangePosxResponse> should match
// service_traits::DataType< ::dsr_msgs::GetCurrentToolFlangePosx >
template<>
struct DataType< ::dsr_msgs::GetCurrentToolFlangePosxResponse>
{
  static const char* value()
  {
    return DataType< ::dsr_msgs::GetCurrentToolFlangePosx >::value();
  }
  static const char* value(const ::dsr_msgs::GetCurrentToolFlangePosxResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DSR_MSGS_MESSAGE_GETCURRENTTOOLFLANGEPOSX_H
