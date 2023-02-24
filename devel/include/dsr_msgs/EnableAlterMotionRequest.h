// Generated by gencpp from file dsr_msgs/EnableAlterMotionRequest.msg
// DO NOT EDIT!


#ifndef DSR_MSGS_MESSAGE_ENABLEALTERMOTIONREQUEST_H
#define DSR_MSGS_MESSAGE_ENABLEALTERMOTIONREQUEST_H


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
struct EnableAlterMotionRequest_
{
  typedef EnableAlterMotionRequest_<ContainerAllocator> Type;

  EnableAlterMotionRequest_()
    : n(0)
    , mode(0)
    , ref(0)
    , limit_dPOS()
    , limit_dPOS_per()  {
      limit_dPOS.assign(0.0);

      limit_dPOS_per.assign(0.0);
  }
  EnableAlterMotionRequest_(const ContainerAllocator& _alloc)
    : n(0)
    , mode(0)
    , ref(0)
    , limit_dPOS()
    , limit_dPOS_per()  {
  (void)_alloc;
      limit_dPOS.assign(0.0);

      limit_dPOS_per.assign(0.0);
  }



   typedef int32_t _n_type;
  _n_type n;

   typedef int8_t _mode_type;
  _mode_type mode;

   typedef int8_t _ref_type;
  _ref_type ref;

   typedef boost::array<double, 2>  _limit_dPOS_type;
  _limit_dPOS_type limit_dPOS;

   typedef boost::array<double, 2>  _limit_dPOS_per_type;
  _limit_dPOS_per_type limit_dPOS_per;





  typedef boost::shared_ptr< ::dsr_msgs::EnableAlterMotionRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dsr_msgs::EnableAlterMotionRequest_<ContainerAllocator> const> ConstPtr;

}; // struct EnableAlterMotionRequest_

typedef ::dsr_msgs::EnableAlterMotionRequest_<std::allocator<void> > EnableAlterMotionRequest;

typedef boost::shared_ptr< ::dsr_msgs::EnableAlterMotionRequest > EnableAlterMotionRequestPtr;
typedef boost::shared_ptr< ::dsr_msgs::EnableAlterMotionRequest const> EnableAlterMotionRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dsr_msgs::EnableAlterMotionRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dsr_msgs::EnableAlterMotionRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::dsr_msgs::EnableAlterMotionRequest_<ContainerAllocator1> & lhs, const ::dsr_msgs::EnableAlterMotionRequest_<ContainerAllocator2> & rhs)
{
  return lhs.n == rhs.n &&
    lhs.mode == rhs.mode &&
    lhs.ref == rhs.ref &&
    lhs.limit_dPOS == rhs.limit_dPOS &&
    lhs.limit_dPOS_per == rhs.limit_dPOS_per;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::dsr_msgs::EnableAlterMotionRequest_<ContainerAllocator1> & lhs, const ::dsr_msgs::EnableAlterMotionRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace dsr_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::dsr_msgs::EnableAlterMotionRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dsr_msgs::EnableAlterMotionRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dsr_msgs::EnableAlterMotionRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dsr_msgs::EnableAlterMotionRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dsr_msgs::EnableAlterMotionRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dsr_msgs::EnableAlterMotionRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dsr_msgs::EnableAlterMotionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "29de75ebd8f3d681fcf3acce7db9a9d2";
  }

  static const char* value(const ::dsr_msgs::EnableAlterMotionRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x29de75ebd8f3d681ULL;
  static const uint64_t static_value2 = 0xfcf3acce7db9a9d2ULL;
};

template<class ContainerAllocator>
struct DataType< ::dsr_msgs::EnableAlterMotionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dsr_msgs/EnableAlterMotionRequest";
  }

  static const char* value(const ::dsr_msgs::EnableAlterMotionRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dsr_msgs::EnableAlterMotionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#____________________________________________________________________________________________\n"
"# enable_alter_motion  \n"
"# \n"
"#____________________________________________________________________________________________\n"
"\n"
"int32      n                 # Cycle time number \n"
"int8       mode              # DR_DPOS(0) : accumulation amount, DR_DVEL(1) : increment amount \n"
"int8       ref               # DR_BASE(0), DR_TOOL(1), DR_WORLD(2), user coord(101~200) \n"
"                             # <ref is only available in M2.40 or later> \n"
"float64[2] limit_dPOS        # First value : limitation of position[mm], Second value : limitation of orientation[deg]\n"
"float64[2] limit_dPOS_per    # First value : limitation of position[mm], Second value : limitation of orientation[deg]\n"
"\n"
;
  }

  static const char* value(const ::dsr_msgs::EnableAlterMotionRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dsr_msgs::EnableAlterMotionRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.n);
      stream.next(m.mode);
      stream.next(m.ref);
      stream.next(m.limit_dPOS);
      stream.next(m.limit_dPOS_per);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct EnableAlterMotionRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dsr_msgs::EnableAlterMotionRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dsr_msgs::EnableAlterMotionRequest_<ContainerAllocator>& v)
  {
    s << indent << "n: ";
    Printer<int32_t>::stream(s, indent + "  ", v.n);
    s << indent << "mode: ";
    Printer<int8_t>::stream(s, indent + "  ", v.mode);
    s << indent << "ref: ";
    Printer<int8_t>::stream(s, indent + "  ", v.ref);
    s << indent << "limit_dPOS[]" << std::endl;
    for (size_t i = 0; i < v.limit_dPOS.size(); ++i)
    {
      s << indent << "  limit_dPOS[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.limit_dPOS[i]);
    }
    s << indent << "limit_dPOS_per[]" << std::endl;
    for (size_t i = 0; i < v.limit_dPOS_per.size(); ++i)
    {
      s << indent << "  limit_dPOS_per[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.limit_dPOS_per[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // DSR_MSGS_MESSAGE_ENABLEALTERMOTIONREQUEST_H