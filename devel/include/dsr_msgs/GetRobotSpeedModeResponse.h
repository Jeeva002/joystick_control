// Generated by gencpp from file dsr_msgs/GetRobotSpeedModeResponse.msg
// DO NOT EDIT!


#ifndef DSR_MSGS_MESSAGE_GETROBOTSPEEDMODERESPONSE_H
#define DSR_MSGS_MESSAGE_GETROBOTSPEEDMODERESPONSE_H


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
struct GetRobotSpeedModeResponse_
{
  typedef GetRobotSpeedModeResponse_<ContainerAllocator> Type;

  GetRobotSpeedModeResponse_()
    : speed_mode(0)
    , success(false)  {
    }
  GetRobotSpeedModeResponse_(const ContainerAllocator& _alloc)
    : speed_mode(0)
    , success(false)  {
  (void)_alloc;
    }



   typedef int8_t _speed_mode_type;
  _speed_mode_type speed_mode;

   typedef uint8_t _success_type;
  _success_type success;





  typedef boost::shared_ptr< ::dsr_msgs::GetRobotSpeedModeResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dsr_msgs::GetRobotSpeedModeResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetRobotSpeedModeResponse_

typedef ::dsr_msgs::GetRobotSpeedModeResponse_<std::allocator<void> > GetRobotSpeedModeResponse;

typedef boost::shared_ptr< ::dsr_msgs::GetRobotSpeedModeResponse > GetRobotSpeedModeResponsePtr;
typedef boost::shared_ptr< ::dsr_msgs::GetRobotSpeedModeResponse const> GetRobotSpeedModeResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dsr_msgs::GetRobotSpeedModeResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dsr_msgs::GetRobotSpeedModeResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::dsr_msgs::GetRobotSpeedModeResponse_<ContainerAllocator1> & lhs, const ::dsr_msgs::GetRobotSpeedModeResponse_<ContainerAllocator2> & rhs)
{
  return lhs.speed_mode == rhs.speed_mode &&
    lhs.success == rhs.success;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::dsr_msgs::GetRobotSpeedModeResponse_<ContainerAllocator1> & lhs, const ::dsr_msgs::GetRobotSpeedModeResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace dsr_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::dsr_msgs::GetRobotSpeedModeResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dsr_msgs::GetRobotSpeedModeResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dsr_msgs::GetRobotSpeedModeResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dsr_msgs::GetRobotSpeedModeResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dsr_msgs::GetRobotSpeedModeResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dsr_msgs::GetRobotSpeedModeResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dsr_msgs::GetRobotSpeedModeResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b5d54772deeae3778247a5930ed4c1f0";
  }

  static const char* value(const ::dsr_msgs::GetRobotSpeedModeResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb5d54772deeae377ULL;
  static const uint64_t static_value2 = 0x8247a5930ed4c1f0ULL;
};

template<class ContainerAllocator>
struct DataType< ::dsr_msgs::GetRobotSpeedModeResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dsr_msgs/GetRobotSpeedModeResponse";
  }

  static const char* value(const ::dsr_msgs::GetRobotSpeedModeResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dsr_msgs::GetRobotSpeedModeResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int8 speed_mode # 0 : SPEED_NORMAL_MODE\n"
"                # 1 : SPEED_REDUCED_MODE\n"
"bool        success   \n"
;
  }

  static const char* value(const ::dsr_msgs::GetRobotSpeedModeResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dsr_msgs::GetRobotSpeedModeResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.speed_mode);
      stream.next(m.success);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetRobotSpeedModeResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dsr_msgs::GetRobotSpeedModeResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dsr_msgs::GetRobotSpeedModeResponse_<ContainerAllocator>& v)
  {
    s << indent << "speed_mode: ";
    Printer<int8_t>::stream(s, indent + "  ", v.speed_mode);
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DSR_MSGS_MESSAGE_GETROBOTSPEEDMODERESPONSE_H
