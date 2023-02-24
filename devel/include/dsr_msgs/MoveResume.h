// Generated by gencpp from file dsr_msgs/MoveResume.msg
// DO NOT EDIT!


#ifndef DSR_MSGS_MESSAGE_MOVERESUME_H
#define DSR_MSGS_MESSAGE_MOVERESUME_H

#include <ros/service_traits.h>


#include <dsr_msgs/MoveResumeRequest.h>
#include <dsr_msgs/MoveResumeResponse.h>


namespace dsr_msgs
{

struct MoveResume
{

typedef MoveResumeRequest Request;
typedef MoveResumeResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct MoveResume
} // namespace dsr_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::dsr_msgs::MoveResume > {
  static const char* value()
  {
    return "358e233cde0c8a8bcfea4ce193f8fc15";
  }

  static const char* value(const ::dsr_msgs::MoveResume&) { return value(); }
};

template<>
struct DataType< ::dsr_msgs::MoveResume > {
  static const char* value()
  {
    return "dsr_msgs/MoveResume";
  }

  static const char* value(const ::dsr_msgs::MoveResume&) { return value(); }
};


// service_traits::MD5Sum< ::dsr_msgs::MoveResumeRequest> should match
// service_traits::MD5Sum< ::dsr_msgs::MoveResume >
template<>
struct MD5Sum< ::dsr_msgs::MoveResumeRequest>
{
  static const char* value()
  {
    return MD5Sum< ::dsr_msgs::MoveResume >::value();
  }
  static const char* value(const ::dsr_msgs::MoveResumeRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::dsr_msgs::MoveResumeRequest> should match
// service_traits::DataType< ::dsr_msgs::MoveResume >
template<>
struct DataType< ::dsr_msgs::MoveResumeRequest>
{
  static const char* value()
  {
    return DataType< ::dsr_msgs::MoveResume >::value();
  }
  static const char* value(const ::dsr_msgs::MoveResumeRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::dsr_msgs::MoveResumeResponse> should match
// service_traits::MD5Sum< ::dsr_msgs::MoveResume >
template<>
struct MD5Sum< ::dsr_msgs::MoveResumeResponse>
{
  static const char* value()
  {
    return MD5Sum< ::dsr_msgs::MoveResume >::value();
  }
  static const char* value(const ::dsr_msgs::MoveResumeResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::dsr_msgs::MoveResumeResponse> should match
// service_traits::DataType< ::dsr_msgs::MoveResume >
template<>
struct DataType< ::dsr_msgs::MoveResumeResponse>
{
  static const char* value()
  {
    return DataType< ::dsr_msgs::MoveResume >::value();
  }
  static const char* value(const ::dsr_msgs::MoveResumeResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DSR_MSGS_MESSAGE_MOVERESUME_H
