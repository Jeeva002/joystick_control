// Generated by gencpp from file dsr_msgs/CheckOrientationCondition2.msg
// DO NOT EDIT!


#ifndef DSR_MSGS_MESSAGE_CHECKORIENTATIONCONDITION2_H
#define DSR_MSGS_MESSAGE_CHECKORIENTATIONCONDITION2_H

#include <ros/service_traits.h>


#include <dsr_msgs/CheckOrientationCondition2Request.h>
#include <dsr_msgs/CheckOrientationCondition2Response.h>


namespace dsr_msgs
{

struct CheckOrientationCondition2
{

typedef CheckOrientationCondition2Request Request;
typedef CheckOrientationCondition2Response Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct CheckOrientationCondition2
} // namespace dsr_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::dsr_msgs::CheckOrientationCondition2 > {
  static const char* value()
  {
    return "d57ced9cfdce36e99486179c4a55944c";
  }

  static const char* value(const ::dsr_msgs::CheckOrientationCondition2&) { return value(); }
};

template<>
struct DataType< ::dsr_msgs::CheckOrientationCondition2 > {
  static const char* value()
  {
    return "dsr_msgs/CheckOrientationCondition2";
  }

  static const char* value(const ::dsr_msgs::CheckOrientationCondition2&) { return value(); }
};


// service_traits::MD5Sum< ::dsr_msgs::CheckOrientationCondition2Request> should match
// service_traits::MD5Sum< ::dsr_msgs::CheckOrientationCondition2 >
template<>
struct MD5Sum< ::dsr_msgs::CheckOrientationCondition2Request>
{
  static const char* value()
  {
    return MD5Sum< ::dsr_msgs::CheckOrientationCondition2 >::value();
  }
  static const char* value(const ::dsr_msgs::CheckOrientationCondition2Request&)
  {
    return value();
  }
};

// service_traits::DataType< ::dsr_msgs::CheckOrientationCondition2Request> should match
// service_traits::DataType< ::dsr_msgs::CheckOrientationCondition2 >
template<>
struct DataType< ::dsr_msgs::CheckOrientationCondition2Request>
{
  static const char* value()
  {
    return DataType< ::dsr_msgs::CheckOrientationCondition2 >::value();
  }
  static const char* value(const ::dsr_msgs::CheckOrientationCondition2Request&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::dsr_msgs::CheckOrientationCondition2Response> should match
// service_traits::MD5Sum< ::dsr_msgs::CheckOrientationCondition2 >
template<>
struct MD5Sum< ::dsr_msgs::CheckOrientationCondition2Response>
{
  static const char* value()
  {
    return MD5Sum< ::dsr_msgs::CheckOrientationCondition2 >::value();
  }
  static const char* value(const ::dsr_msgs::CheckOrientationCondition2Response&)
  {
    return value();
  }
};

// service_traits::DataType< ::dsr_msgs::CheckOrientationCondition2Response> should match
// service_traits::DataType< ::dsr_msgs::CheckOrientationCondition2 >
template<>
struct DataType< ::dsr_msgs::CheckOrientationCondition2Response>
{
  static const char* value()
  {
    return DataType< ::dsr_msgs::CheckOrientationCondition2 >::value();
  }
  static const char* value(const ::dsr_msgs::CheckOrientationCondition2Response&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DSR_MSGS_MESSAGE_CHECKORIENTATIONCONDITION2_H
