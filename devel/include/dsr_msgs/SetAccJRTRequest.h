// Generated by gencpp from file dsr_msgs/SetAccJRTRequest.msg
// DO NOT EDIT!


#ifndef DSR_MSGS_MESSAGE_SETACCJRTREQUEST_H
#define DSR_MSGS_MESSAGE_SETACCJRTREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace dsr_msgs
{
template <class ContainerAllocator>
struct SetAccJRTRequest_
{
  typedef SetAccJRTRequest_<ContainerAllocator> Type;

  SetAccJRTRequest_()
    : acc()  {
      acc.assign(0.0);
  }
  SetAccJRTRequest_(const ContainerAllocator& _alloc)
    : acc()  {
  (void)_alloc;
      acc.assign(0.0);
  }



   typedef boost::array<double, 6>  _acc_type;
  _acc_type acc;





  typedef boost::shared_ptr< ::dsr_msgs::SetAccJRTRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dsr_msgs::SetAccJRTRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetAccJRTRequest_

typedef ::dsr_msgs::SetAccJRTRequest_<std::allocator<void> > SetAccJRTRequest;

typedef boost::shared_ptr< ::dsr_msgs::SetAccJRTRequest > SetAccJRTRequestPtr;
typedef boost::shared_ptr< ::dsr_msgs::SetAccJRTRequest const> SetAccJRTRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dsr_msgs::SetAccJRTRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dsr_msgs::SetAccJRTRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::dsr_msgs::SetAccJRTRequest_<ContainerAllocator1> & lhs, const ::dsr_msgs::SetAccJRTRequest_<ContainerAllocator2> & rhs)
{
  return lhs.acc == rhs.acc;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::dsr_msgs::SetAccJRTRequest_<ContainerAllocator1> & lhs, const ::dsr_msgs::SetAccJRTRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace dsr_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::dsr_msgs::SetAccJRTRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dsr_msgs::SetAccJRTRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dsr_msgs::SetAccJRTRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dsr_msgs::SetAccJRTRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dsr_msgs::SetAccJRTRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dsr_msgs::SetAccJRTRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dsr_msgs::SetAccJRTRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "65b89901455da92d2ad3ba5d1d0640ed";
  }

  static const char* value(const ::dsr_msgs::SetAccJRTRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x65b89901455da92dULL;
  static const uint64_t static_value2 = 0x2ad3ba5d1d0640edULL;
};

template<class ContainerAllocator>
struct DataType< ::dsr_msgs::SetAccJRTRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dsr_msgs/SetAccJRTRequest";
  }

  static const char* value(const ::dsr_msgs::SetAccJRTRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dsr_msgs::SetAccJRTRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#____________________________________________________________________________________________\n"
"# set_accj_rt\n"
"#____________________________________________________________________________________________\n"
"float64[6] acc\n"
;
  }

  static const char* value(const ::dsr_msgs::SetAccJRTRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dsr_msgs::SetAccJRTRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.acc);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetAccJRTRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dsr_msgs::SetAccJRTRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dsr_msgs::SetAccJRTRequest_<ContainerAllocator>& v)
  {
    s << indent << "acc[]" << std::endl;
    for (size_t i = 0; i < v.acc.size(); ++i)
    {
      s << indent << "  acc[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.acc[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // DSR_MSGS_MESSAGE_SETACCJRTREQUEST_H