// Generated by gencpp from file dsr_msgs/CalcCoord.msg
// DO NOT EDIT!


#ifndef DSR_MSGS_MESSAGE_CALCCOORD_H
#define DSR_MSGS_MESSAGE_CALCCOORD_H

#include <ros/service_traits.h>


#include <dsr_msgs/CalcCoordRequest.h>
#include <dsr_msgs/CalcCoordResponse.h>


namespace dsr_msgs
{

struct CalcCoord
{

typedef CalcCoordRequest Request;
typedef CalcCoordResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct CalcCoord
} // namespace dsr_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::dsr_msgs::CalcCoord > {
  static const char* value()
  {
    return "2001e63c6ceb43ba2ea8431cc72302b9";
  }

  static const char* value(const ::dsr_msgs::CalcCoord&) { return value(); }
};

template<>
struct DataType< ::dsr_msgs::CalcCoord > {
  static const char* value()
  {
    return "dsr_msgs/CalcCoord";
  }

  static const char* value(const ::dsr_msgs::CalcCoord&) { return value(); }
};


// service_traits::MD5Sum< ::dsr_msgs::CalcCoordRequest> should match
// service_traits::MD5Sum< ::dsr_msgs::CalcCoord >
template<>
struct MD5Sum< ::dsr_msgs::CalcCoordRequest>
{
  static const char* value()
  {
    return MD5Sum< ::dsr_msgs::CalcCoord >::value();
  }
  static const char* value(const ::dsr_msgs::CalcCoordRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::dsr_msgs::CalcCoordRequest> should match
// service_traits::DataType< ::dsr_msgs::CalcCoord >
template<>
struct DataType< ::dsr_msgs::CalcCoordRequest>
{
  static const char* value()
  {
    return DataType< ::dsr_msgs::CalcCoord >::value();
  }
  static const char* value(const ::dsr_msgs::CalcCoordRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::dsr_msgs::CalcCoordResponse> should match
// service_traits::MD5Sum< ::dsr_msgs::CalcCoord >
template<>
struct MD5Sum< ::dsr_msgs::CalcCoordResponse>
{
  static const char* value()
  {
    return MD5Sum< ::dsr_msgs::CalcCoord >::value();
  }
  static const char* value(const ::dsr_msgs::CalcCoordResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::dsr_msgs::CalcCoordResponse> should match
// service_traits::DataType< ::dsr_msgs::CalcCoord >
template<>
struct DataType< ::dsr_msgs::CalcCoordResponse>
{
  static const char* value()
  {
    return DataType< ::dsr_msgs::CalcCoord >::value();
  }
  static const char* value(const ::dsr_msgs::CalcCoordResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DSR_MSGS_MESSAGE_CALCCOORD_H
