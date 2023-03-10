// Generated by gencpp from file dsr_msgs/ReleaseForce.msg
// DO NOT EDIT!


#ifndef DSR_MSGS_MESSAGE_RELEASEFORCE_H
#define DSR_MSGS_MESSAGE_RELEASEFORCE_H

#include <ros/service_traits.h>


#include <dsr_msgs/ReleaseForceRequest.h>
#include <dsr_msgs/ReleaseForceResponse.h>


namespace dsr_msgs
{

struct ReleaseForce
{

typedef ReleaseForceRequest Request;
typedef ReleaseForceResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct ReleaseForce
} // namespace dsr_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::dsr_msgs::ReleaseForce > {
  static const char* value()
  {
    return "54a0fd05cf7c093a898987563c9ea327";
  }

  static const char* value(const ::dsr_msgs::ReleaseForce&) { return value(); }
};

template<>
struct DataType< ::dsr_msgs::ReleaseForce > {
  static const char* value()
  {
    return "dsr_msgs/ReleaseForce";
  }

  static const char* value(const ::dsr_msgs::ReleaseForce&) { return value(); }
};


// service_traits::MD5Sum< ::dsr_msgs::ReleaseForceRequest> should match
// service_traits::MD5Sum< ::dsr_msgs::ReleaseForce >
template<>
struct MD5Sum< ::dsr_msgs::ReleaseForceRequest>
{
  static const char* value()
  {
    return MD5Sum< ::dsr_msgs::ReleaseForce >::value();
  }
  static const char* value(const ::dsr_msgs::ReleaseForceRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::dsr_msgs::ReleaseForceRequest> should match
// service_traits::DataType< ::dsr_msgs::ReleaseForce >
template<>
struct DataType< ::dsr_msgs::ReleaseForceRequest>
{
  static const char* value()
  {
    return DataType< ::dsr_msgs::ReleaseForce >::value();
  }
  static const char* value(const ::dsr_msgs::ReleaseForceRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::dsr_msgs::ReleaseForceResponse> should match
// service_traits::MD5Sum< ::dsr_msgs::ReleaseForce >
template<>
struct MD5Sum< ::dsr_msgs::ReleaseForceResponse>
{
  static const char* value()
  {
    return MD5Sum< ::dsr_msgs::ReleaseForce >::value();
  }
  static const char* value(const ::dsr_msgs::ReleaseForceResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::dsr_msgs::ReleaseForceResponse> should match
// service_traits::DataType< ::dsr_msgs::ReleaseForce >
template<>
struct DataType< ::dsr_msgs::ReleaseForceResponse>
{
  static const char* value()
  {
    return DataType< ::dsr_msgs::ReleaseForce >::value();
  }
  static const char* value(const ::dsr_msgs::ReleaseForceResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DSR_MSGS_MESSAGE_RELEASEFORCE_H
