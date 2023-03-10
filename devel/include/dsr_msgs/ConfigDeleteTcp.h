// Generated by gencpp from file dsr_msgs/ConfigDeleteTcp.msg
// DO NOT EDIT!


#ifndef DSR_MSGS_MESSAGE_CONFIGDELETETCP_H
#define DSR_MSGS_MESSAGE_CONFIGDELETETCP_H

#include <ros/service_traits.h>


#include <dsr_msgs/ConfigDeleteTcpRequest.h>
#include <dsr_msgs/ConfigDeleteTcpResponse.h>


namespace dsr_msgs
{

struct ConfigDeleteTcp
{

typedef ConfigDeleteTcpRequest Request;
typedef ConfigDeleteTcpResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct ConfigDeleteTcp
} // namespace dsr_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::dsr_msgs::ConfigDeleteTcp > {
  static const char* value()
  {
    return "d08a3b641c2f8680fbdfb1ea2e17a3e1";
  }

  static const char* value(const ::dsr_msgs::ConfigDeleteTcp&) { return value(); }
};

template<>
struct DataType< ::dsr_msgs::ConfigDeleteTcp > {
  static const char* value()
  {
    return "dsr_msgs/ConfigDeleteTcp";
  }

  static const char* value(const ::dsr_msgs::ConfigDeleteTcp&) { return value(); }
};


// service_traits::MD5Sum< ::dsr_msgs::ConfigDeleteTcpRequest> should match
// service_traits::MD5Sum< ::dsr_msgs::ConfigDeleteTcp >
template<>
struct MD5Sum< ::dsr_msgs::ConfigDeleteTcpRequest>
{
  static const char* value()
  {
    return MD5Sum< ::dsr_msgs::ConfigDeleteTcp >::value();
  }
  static const char* value(const ::dsr_msgs::ConfigDeleteTcpRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::dsr_msgs::ConfigDeleteTcpRequest> should match
// service_traits::DataType< ::dsr_msgs::ConfigDeleteTcp >
template<>
struct DataType< ::dsr_msgs::ConfigDeleteTcpRequest>
{
  static const char* value()
  {
    return DataType< ::dsr_msgs::ConfigDeleteTcp >::value();
  }
  static const char* value(const ::dsr_msgs::ConfigDeleteTcpRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::dsr_msgs::ConfigDeleteTcpResponse> should match
// service_traits::MD5Sum< ::dsr_msgs::ConfigDeleteTcp >
template<>
struct MD5Sum< ::dsr_msgs::ConfigDeleteTcpResponse>
{
  static const char* value()
  {
    return MD5Sum< ::dsr_msgs::ConfigDeleteTcp >::value();
  }
  static const char* value(const ::dsr_msgs::ConfigDeleteTcpResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::dsr_msgs::ConfigDeleteTcpResponse> should match
// service_traits::DataType< ::dsr_msgs::ConfigDeleteTcp >
template<>
struct DataType< ::dsr_msgs::ConfigDeleteTcpResponse>
{
  static const char* value()
  {
    return DataType< ::dsr_msgs::ConfigDeleteTcp >::value();
  }
  static const char* value(const ::dsr_msgs::ConfigDeleteTcpResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DSR_MSGS_MESSAGE_CONFIGDELETETCP_H
