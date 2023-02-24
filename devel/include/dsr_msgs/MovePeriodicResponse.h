// Generated by gencpp from file dsr_msgs/MovePeriodicResponse.msg
// DO NOT EDIT!


#ifndef DSR_MSGS_MESSAGE_MOVEPERIODICRESPONSE_H
#define DSR_MSGS_MESSAGE_MOVEPERIODICRESPONSE_H


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
struct MovePeriodicResponse_
{
  typedef MovePeriodicResponse_<ContainerAllocator> Type;

  MovePeriodicResponse_()
    : success(false)  {
    }
  MovePeriodicResponse_(const ContainerAllocator& _alloc)
    : success(false)  {
  (void)_alloc;
    }



   typedef uint8_t _success_type;
  _success_type success;





  typedef boost::shared_ptr< ::dsr_msgs::MovePeriodicResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dsr_msgs::MovePeriodicResponse_<ContainerAllocator> const> ConstPtr;

}; // struct MovePeriodicResponse_

typedef ::dsr_msgs::MovePeriodicResponse_<std::allocator<void> > MovePeriodicResponse;

typedef boost::shared_ptr< ::dsr_msgs::MovePeriodicResponse > MovePeriodicResponsePtr;
typedef boost::shared_ptr< ::dsr_msgs::MovePeriodicResponse const> MovePeriodicResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dsr_msgs::MovePeriodicResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dsr_msgs::MovePeriodicResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::dsr_msgs::MovePeriodicResponse_<ContainerAllocator1> & lhs, const ::dsr_msgs::MovePeriodicResponse_<ContainerAllocator2> & rhs)
{
  return lhs.success == rhs.success;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::dsr_msgs::MovePeriodicResponse_<ContainerAllocator1> & lhs, const ::dsr_msgs::MovePeriodicResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace dsr_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::dsr_msgs::MovePeriodicResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dsr_msgs::MovePeriodicResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dsr_msgs::MovePeriodicResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dsr_msgs::MovePeriodicResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dsr_msgs::MovePeriodicResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dsr_msgs::MovePeriodicResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dsr_msgs::MovePeriodicResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "358e233cde0c8a8bcfea4ce193f8fc15";
  }

  static const char* value(const ::dsr_msgs::MovePeriodicResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x358e233cde0c8a8bULL;
  static const uint64_t static_value2 = 0xcfea4ce193f8fc15ULL;
};

template<class ContainerAllocator>
struct DataType< ::dsr_msgs::MovePeriodicResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dsr_msgs/MovePeriodicResponse";
  }

  static const char* value(const ::dsr_msgs::MovePeriodicResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dsr_msgs::MovePeriodicResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool success\n"
;
  }

  static const char* value(const ::dsr_msgs::MovePeriodicResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dsr_msgs::MovePeriodicResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.success);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MovePeriodicResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dsr_msgs::MovePeriodicResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dsr_msgs::MovePeriodicResponse_<ContainerAllocator>& v)
  {
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DSR_MSGS_MESSAGE_MOVEPERIODICRESPONSE_H
