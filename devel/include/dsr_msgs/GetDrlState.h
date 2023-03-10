// Generated by gencpp from file dsr_msgs/GetDrlState.msg
// DO NOT EDIT!


#ifndef DSR_MSGS_MESSAGE_GETDRLSTATE_H
#define DSR_MSGS_MESSAGE_GETDRLSTATE_H

#include <ros/service_traits.h>


#include <dsr_msgs/GetDrlStateRequest.h>
#include <dsr_msgs/GetDrlStateResponse.h>


namespace dsr_msgs
{

struct GetDrlState
{

typedef GetDrlStateRequest Request;
typedef GetDrlStateResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetDrlState
} // namespace dsr_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::dsr_msgs::GetDrlState > {
  static const char* value()
  {
    return "9dd00c5d3b26eace3288075b31af3114";
  }

  static const char* value(const ::dsr_msgs::GetDrlState&) { return value(); }
};

template<>
struct DataType< ::dsr_msgs::GetDrlState > {
  static const char* value()
  {
    return "dsr_msgs/GetDrlState";
  }

  static const char* value(const ::dsr_msgs::GetDrlState&) { return value(); }
};


// service_traits::MD5Sum< ::dsr_msgs::GetDrlStateRequest> should match
// service_traits::MD5Sum< ::dsr_msgs::GetDrlState >
template<>
struct MD5Sum< ::dsr_msgs::GetDrlStateRequest>
{
  static const char* value()
  {
    return MD5Sum< ::dsr_msgs::GetDrlState >::value();
  }
  static const char* value(const ::dsr_msgs::GetDrlStateRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::dsr_msgs::GetDrlStateRequest> should match
// service_traits::DataType< ::dsr_msgs::GetDrlState >
template<>
struct DataType< ::dsr_msgs::GetDrlStateRequest>
{
  static const char* value()
  {
    return DataType< ::dsr_msgs::GetDrlState >::value();
  }
  static const char* value(const ::dsr_msgs::GetDrlStateRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::dsr_msgs::GetDrlStateResponse> should match
// service_traits::MD5Sum< ::dsr_msgs::GetDrlState >
template<>
struct MD5Sum< ::dsr_msgs::GetDrlStateResponse>
{
  static const char* value()
  {
    return MD5Sum< ::dsr_msgs::GetDrlState >::value();
  }
  static const char* value(const ::dsr_msgs::GetDrlStateResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::dsr_msgs::GetDrlStateResponse> should match
// service_traits::DataType< ::dsr_msgs::GetDrlState >
template<>
struct DataType< ::dsr_msgs::GetDrlStateResponse>
{
  static const char* value()
  {
    return DataType< ::dsr_msgs::GetDrlState >::value();
  }
  static const char* value(const ::dsr_msgs::GetDrlStateResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DSR_MSGS_MESSAGE_GETDRLSTATE_H
