// Generated by gencpp from file dsr_msgs/SetAccXRTRequest.msg
// DO NOT EDIT!


#ifndef DSR_MSGS_MESSAGE_SETACCXRTREQUEST_H
#define DSR_MSGS_MESSAGE_SETACCXRTREQUEST_H


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
struct SetAccXRTRequest_
{
  typedef SetAccXRTRequest_<ContainerAllocator> Type;

  SetAccXRTRequest_()
    : trans(0.0)
    , rotation(0.0)  {
    }
  SetAccXRTRequest_(const ContainerAllocator& _alloc)
    : trans(0.0)
    , rotation(0.0)  {
  (void)_alloc;
    }



   typedef double _trans_type;
  _trans_type trans;

   typedef double _rotation_type;
  _rotation_type rotation;





  typedef boost::shared_ptr< ::dsr_msgs::SetAccXRTRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dsr_msgs::SetAccXRTRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetAccXRTRequest_

typedef ::dsr_msgs::SetAccXRTRequest_<std::allocator<void> > SetAccXRTRequest;

typedef boost::shared_ptr< ::dsr_msgs::SetAccXRTRequest > SetAccXRTRequestPtr;
typedef boost::shared_ptr< ::dsr_msgs::SetAccXRTRequest const> SetAccXRTRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dsr_msgs::SetAccXRTRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dsr_msgs::SetAccXRTRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::dsr_msgs::SetAccXRTRequest_<ContainerAllocator1> & lhs, const ::dsr_msgs::SetAccXRTRequest_<ContainerAllocator2> & rhs)
{
  return lhs.trans == rhs.trans &&
    lhs.rotation == rhs.rotation;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::dsr_msgs::SetAccXRTRequest_<ContainerAllocator1> & lhs, const ::dsr_msgs::SetAccXRTRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace dsr_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::dsr_msgs::SetAccXRTRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dsr_msgs::SetAccXRTRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dsr_msgs::SetAccXRTRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dsr_msgs::SetAccXRTRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dsr_msgs::SetAccXRTRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dsr_msgs::SetAccXRTRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dsr_msgs::SetAccXRTRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b5a2c0b73f38f62d5ad9d8e46279c3af";
  }

  static const char* value(const ::dsr_msgs::SetAccXRTRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb5a2c0b73f38f62dULL;
  static const uint64_t static_value2 = 0x5ad9d8e46279c3afULL;
};

template<class ContainerAllocator>
struct DataType< ::dsr_msgs::SetAccXRTRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dsr_msgs/SetAccXRTRequest";
  }

  static const char* value(const ::dsr_msgs::SetAccXRTRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dsr_msgs::SetAccXRTRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#____________________________________________________________________________________________\n"
"# set_accx_rt\n"
"#____________________________________________________________________________________________\n"
"float64    trans\n"
"float64    rotation\n"
;
  }

  static const char* value(const ::dsr_msgs::SetAccXRTRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dsr_msgs::SetAccXRTRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.trans);
      stream.next(m.rotation);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetAccXRTRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dsr_msgs::SetAccXRTRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dsr_msgs::SetAccXRTRequest_<ContainerAllocator>& v)
  {
    s << indent << "trans: ";
    Printer<double>::stream(s, indent + "  ", v.trans);
    s << indent << "rotation: ";
    Printer<double>::stream(s, indent + "  ", v.rotation);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DSR_MSGS_MESSAGE_SETACCXRTREQUEST_H
