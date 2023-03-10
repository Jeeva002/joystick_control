// Generated by gencpp from file dsr_msgs/GetSolutionSpace.msg
// DO NOT EDIT!


#ifndef DSR_MSGS_MESSAGE_GETSOLUTIONSPACE_H
#define DSR_MSGS_MESSAGE_GETSOLUTIONSPACE_H

#include <ros/service_traits.h>


#include <dsr_msgs/GetSolutionSpaceRequest.h>
#include <dsr_msgs/GetSolutionSpaceResponse.h>


namespace dsr_msgs
{

struct GetSolutionSpace
{

typedef GetSolutionSpaceRequest Request;
typedef GetSolutionSpaceResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetSolutionSpace
} // namespace dsr_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::dsr_msgs::GetSolutionSpace > {
  static const char* value()
  {
    return "27abbe19a7d41c61a3226076e3320ebf";
  }

  static const char* value(const ::dsr_msgs::GetSolutionSpace&) { return value(); }
};

template<>
struct DataType< ::dsr_msgs::GetSolutionSpace > {
  static const char* value()
  {
    return "dsr_msgs/GetSolutionSpace";
  }

  static const char* value(const ::dsr_msgs::GetSolutionSpace&) { return value(); }
};


// service_traits::MD5Sum< ::dsr_msgs::GetSolutionSpaceRequest> should match
// service_traits::MD5Sum< ::dsr_msgs::GetSolutionSpace >
template<>
struct MD5Sum< ::dsr_msgs::GetSolutionSpaceRequest>
{
  static const char* value()
  {
    return MD5Sum< ::dsr_msgs::GetSolutionSpace >::value();
  }
  static const char* value(const ::dsr_msgs::GetSolutionSpaceRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::dsr_msgs::GetSolutionSpaceRequest> should match
// service_traits::DataType< ::dsr_msgs::GetSolutionSpace >
template<>
struct DataType< ::dsr_msgs::GetSolutionSpaceRequest>
{
  static const char* value()
  {
    return DataType< ::dsr_msgs::GetSolutionSpace >::value();
  }
  static const char* value(const ::dsr_msgs::GetSolutionSpaceRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::dsr_msgs::GetSolutionSpaceResponse> should match
// service_traits::MD5Sum< ::dsr_msgs::GetSolutionSpace >
template<>
struct MD5Sum< ::dsr_msgs::GetSolutionSpaceResponse>
{
  static const char* value()
  {
    return MD5Sum< ::dsr_msgs::GetSolutionSpace >::value();
  }
  static const char* value(const ::dsr_msgs::GetSolutionSpaceResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::dsr_msgs::GetSolutionSpaceResponse> should match
// service_traits::DataType< ::dsr_msgs::GetSolutionSpace >
template<>
struct DataType< ::dsr_msgs::GetSolutionSpaceResponse>
{
  static const char* value()
  {
    return DataType< ::dsr_msgs::GetSolutionSpace >::value();
  }
  static const char* value(const ::dsr_msgs::GetSolutionSpaceResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DSR_MSGS_MESSAGE_GETSOLUTIONSPACE_H
