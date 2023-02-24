// Generated by gencpp from file dsr_msgs/MoveSpiralRequest.msg
// DO NOT EDIT!


#ifndef DSR_MSGS_MESSAGE_MOVESPIRALREQUEST_H
#define DSR_MSGS_MESSAGE_MOVESPIRALREQUEST_H


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
struct MoveSpiralRequest_
{
  typedef MoveSpiralRequest_<ContainerAllocator> Type;

  MoveSpiralRequest_()
    : revolution(0.0)
    , maxRadius(0.0)
    , maxLength(0.0)
    , vel()
    , acc()
    , time(0.0)
    , taskAxis(0)
    , ref(0)
    , syncType(0)  {
      vel.assign(0.0);

      acc.assign(0.0);
  }
  MoveSpiralRequest_(const ContainerAllocator& _alloc)
    : revolution(0.0)
    , maxRadius(0.0)
    , maxLength(0.0)
    , vel()
    , acc()
    , time(0.0)
    , taskAxis(0)
    , ref(0)
    , syncType(0)  {
  (void)_alloc;
      vel.assign(0.0);

      acc.assign(0.0);
  }



   typedef double _revolution_type;
  _revolution_type revolution;

   typedef double _maxRadius_type;
  _maxRadius_type maxRadius;

   typedef double _maxLength_type;
  _maxLength_type maxLength;

   typedef boost::array<double, 2>  _vel_type;
  _vel_type vel;

   typedef boost::array<double, 2>  _acc_type;
  _acc_type acc;

   typedef double _time_type;
  _time_type time;

   typedef int8_t _taskAxis_type;
  _taskAxis_type taskAxis;

   typedef int8_t _ref_type;
  _ref_type ref;

   typedef int8_t _syncType_type;
  _syncType_type syncType;





  typedef boost::shared_ptr< ::dsr_msgs::MoveSpiralRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dsr_msgs::MoveSpiralRequest_<ContainerAllocator> const> ConstPtr;

}; // struct MoveSpiralRequest_

typedef ::dsr_msgs::MoveSpiralRequest_<std::allocator<void> > MoveSpiralRequest;

typedef boost::shared_ptr< ::dsr_msgs::MoveSpiralRequest > MoveSpiralRequestPtr;
typedef boost::shared_ptr< ::dsr_msgs::MoveSpiralRequest const> MoveSpiralRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dsr_msgs::MoveSpiralRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dsr_msgs::MoveSpiralRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::dsr_msgs::MoveSpiralRequest_<ContainerAllocator1> & lhs, const ::dsr_msgs::MoveSpiralRequest_<ContainerAllocator2> & rhs)
{
  return lhs.revolution == rhs.revolution &&
    lhs.maxRadius == rhs.maxRadius &&
    lhs.maxLength == rhs.maxLength &&
    lhs.vel == rhs.vel &&
    lhs.acc == rhs.acc &&
    lhs.time == rhs.time &&
    lhs.taskAxis == rhs.taskAxis &&
    lhs.ref == rhs.ref &&
    lhs.syncType == rhs.syncType;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::dsr_msgs::MoveSpiralRequest_<ContainerAllocator1> & lhs, const ::dsr_msgs::MoveSpiralRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace dsr_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::dsr_msgs::MoveSpiralRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dsr_msgs::MoveSpiralRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dsr_msgs::MoveSpiralRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dsr_msgs::MoveSpiralRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dsr_msgs::MoveSpiralRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dsr_msgs::MoveSpiralRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dsr_msgs::MoveSpiralRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d5d20768cc7c6e3fb127c70920255d0e";
  }

  static const char* value(const ::dsr_msgs::MoveSpiralRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd5d20768cc7c6e3fULL;
  static const uint64_t static_value2 = 0xb127c70920255d0eULL;
};

template<class ContainerAllocator>
struct DataType< ::dsr_msgs::MoveSpiralRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dsr_msgs/MoveSpiralRequest";
  }

  static const char* value(const ::dsr_msgs::MoveSpiralRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dsr_msgs::MoveSpiralRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#____________________________________________________________________________________________\n"
"# move_sprial  \n"
"#____________________________________________________________________________________________\n"
"\n"
"float64    revolution       # Total number of revolutions \n"
"float64    maxRadius        # Final spiral radius [mm]\n"
"float64    maxLength        # Distance moved in the axis direction [mm]\n"
"float64[2] vel              # set velocity: [mm/sec], [deg/sec]\n"
"float64[2] acc              # set acceleration: [mm/sec2], [deg/sec2]\n"
"float64    time #= 0.0      # Total execution time <sec> \n"
"int8       taskAxis         # TASK_AXIS_X = 0, TASK_AXIS_Y = 1, TASK_AXIS_Z = 2   \n"
"int8       ref  #= 1        # DR_BASE(0), DR_TOOL(1), DR_WORLD(2)\n"
"                            # <DR_WORLD is only available in M2.40 or later \n"
"int8       syncType #=0     # SYNC = 0, ASYNC = 1 \n"
;
  }

  static const char* value(const ::dsr_msgs::MoveSpiralRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dsr_msgs::MoveSpiralRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.revolution);
      stream.next(m.maxRadius);
      stream.next(m.maxLength);
      stream.next(m.vel);
      stream.next(m.acc);
      stream.next(m.time);
      stream.next(m.taskAxis);
      stream.next(m.ref);
      stream.next(m.syncType);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MoveSpiralRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dsr_msgs::MoveSpiralRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dsr_msgs::MoveSpiralRequest_<ContainerAllocator>& v)
  {
    s << indent << "revolution: ";
    Printer<double>::stream(s, indent + "  ", v.revolution);
    s << indent << "maxRadius: ";
    Printer<double>::stream(s, indent + "  ", v.maxRadius);
    s << indent << "maxLength: ";
    Printer<double>::stream(s, indent + "  ", v.maxLength);
    s << indent << "vel[]" << std::endl;
    for (size_t i = 0; i < v.vel.size(); ++i)
    {
      s << indent << "  vel[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.vel[i]);
    }
    s << indent << "acc[]" << std::endl;
    for (size_t i = 0; i < v.acc.size(); ++i)
    {
      s << indent << "  acc[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.acc[i]);
    }
    s << indent << "time: ";
    Printer<double>::stream(s, indent + "  ", v.time);
    s << indent << "taskAxis: ";
    Printer<int8_t>::stream(s, indent + "  ", v.taskAxis);
    s << indent << "ref: ";
    Printer<int8_t>::stream(s, indent + "  ", v.ref);
    s << indent << "syncType: ";
    Printer<int8_t>::stream(s, indent + "  ", v.syncType);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DSR_MSGS_MESSAGE_MOVESPIRALREQUEST_H
