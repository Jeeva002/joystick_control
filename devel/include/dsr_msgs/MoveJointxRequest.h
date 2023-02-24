// Generated by gencpp from file dsr_msgs/MoveJointxRequest.msg
// DO NOT EDIT!


#ifndef DSR_MSGS_MESSAGE_MOVEJOINTXREQUEST_H
#define DSR_MSGS_MESSAGE_MOVEJOINTXREQUEST_H


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
struct MoveJointxRequest_
{
  typedef MoveJointxRequest_<ContainerAllocator> Type;

  MoveJointxRequest_()
    : pos()
    , vel(0.0)
    , acc(0.0)
    , time(0.0)
    , radius(0.0)
    , ref(0)
    , mode(0)
    , blendType(0)
    , sol(0)
    , syncType(0)  {
      pos.assign(0.0);
  }
  MoveJointxRequest_(const ContainerAllocator& _alloc)
    : pos()
    , vel(0.0)
    , acc(0.0)
    , time(0.0)
    , radius(0.0)
    , ref(0)
    , mode(0)
    , blendType(0)
    , sol(0)
    , syncType(0)  {
  (void)_alloc;
      pos.assign(0.0);
  }



   typedef boost::array<double, 6>  _pos_type;
  _pos_type pos;

   typedef double _vel_type;
  _vel_type vel;

   typedef double _acc_type;
  _acc_type acc;

   typedef double _time_type;
  _time_type time;

   typedef double _radius_type;
  _radius_type radius;

   typedef int8_t _ref_type;
  _ref_type ref;

   typedef int8_t _mode_type;
  _mode_type mode;

   typedef int8_t _blendType_type;
  _blendType_type blendType;

   typedef int8_t _sol_type;
  _sol_type sol;

   typedef int8_t _syncType_type;
  _syncType_type syncType;





  typedef boost::shared_ptr< ::dsr_msgs::MoveJointxRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dsr_msgs::MoveJointxRequest_<ContainerAllocator> const> ConstPtr;

}; // struct MoveJointxRequest_

typedef ::dsr_msgs::MoveJointxRequest_<std::allocator<void> > MoveJointxRequest;

typedef boost::shared_ptr< ::dsr_msgs::MoveJointxRequest > MoveJointxRequestPtr;
typedef boost::shared_ptr< ::dsr_msgs::MoveJointxRequest const> MoveJointxRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dsr_msgs::MoveJointxRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dsr_msgs::MoveJointxRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::dsr_msgs::MoveJointxRequest_<ContainerAllocator1> & lhs, const ::dsr_msgs::MoveJointxRequest_<ContainerAllocator2> & rhs)
{
  return lhs.pos == rhs.pos &&
    lhs.vel == rhs.vel &&
    lhs.acc == rhs.acc &&
    lhs.time == rhs.time &&
    lhs.radius == rhs.radius &&
    lhs.ref == rhs.ref &&
    lhs.mode == rhs.mode &&
    lhs.blendType == rhs.blendType &&
    lhs.sol == rhs.sol &&
    lhs.syncType == rhs.syncType;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::dsr_msgs::MoveJointxRequest_<ContainerAllocator1> & lhs, const ::dsr_msgs::MoveJointxRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace dsr_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::dsr_msgs::MoveJointxRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dsr_msgs::MoveJointxRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dsr_msgs::MoveJointxRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dsr_msgs::MoveJointxRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dsr_msgs::MoveJointxRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dsr_msgs::MoveJointxRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dsr_msgs::MoveJointxRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "990b77a624453e4a3faf362b98093629";
  }

  static const char* value(const ::dsr_msgs::MoveJointxRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x990b77a624453e4aULL;
  static const uint64_t static_value2 = 0x3faf362b98093629ULL;
};

template<class ContainerAllocator>
struct DataType< ::dsr_msgs::MoveJointxRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dsr_msgs/MoveJointxRequest";
  }

  static const char* value(const ::dsr_msgs::MoveJointxRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dsr_msgs::MoveJointxRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#____________________________________________________________________________________________\n"
"# move_jointx  \n"
"#____________________________________________________________________________________________\n"
"\n"
"float64[6] pos              # target  \n"
"float64    vel              # set velocity: [deg/sec]\n"
"float64    acc              # set acceleration: [deg/sec2] \n"
"float64    time #= 0.0      # Time [sec] \n"
"float64    radius #=0.0     # Radius under blending mode [mm]   \n"
"int8       ref              # DR_BASE(0), DR_TOOL(1), DR_WORLD(2)\n"
"                            # <DR_WORLD is only available in M2.40 or later> \n"
"int8       mode #= 0        # MOVE_MODE_ABSOLUTE=0, MOVE_MODE_RELATIVE=1 \n"
"int8       blendType #= 0   # BLENDING_SPEED_TYPE_DUPLICATE=0, BLENDING_SPEED_TYPE_OVERRIDE=1\n"
"int8       sol              # SolutionSpace : 0~7\n"
"int8       syncType #=0     # SYNC = 0, ASYNC = 1\n"
;
  }

  static const char* value(const ::dsr_msgs::MoveJointxRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dsr_msgs::MoveJointxRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.pos);
      stream.next(m.vel);
      stream.next(m.acc);
      stream.next(m.time);
      stream.next(m.radius);
      stream.next(m.ref);
      stream.next(m.mode);
      stream.next(m.blendType);
      stream.next(m.sol);
      stream.next(m.syncType);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MoveJointxRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dsr_msgs::MoveJointxRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dsr_msgs::MoveJointxRequest_<ContainerAllocator>& v)
  {
    s << indent << "pos[]" << std::endl;
    for (size_t i = 0; i < v.pos.size(); ++i)
    {
      s << indent << "  pos[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.pos[i]);
    }
    s << indent << "vel: ";
    Printer<double>::stream(s, indent + "  ", v.vel);
    s << indent << "acc: ";
    Printer<double>::stream(s, indent + "  ", v.acc);
    s << indent << "time: ";
    Printer<double>::stream(s, indent + "  ", v.time);
    s << indent << "radius: ";
    Printer<double>::stream(s, indent + "  ", v.radius);
    s << indent << "ref: ";
    Printer<int8_t>::stream(s, indent + "  ", v.ref);
    s << indent << "mode: ";
    Printer<int8_t>::stream(s, indent + "  ", v.mode);
    s << indent << "blendType: ";
    Printer<int8_t>::stream(s, indent + "  ", v.blendType);
    s << indent << "sol: ";
    Printer<int8_t>::stream(s, indent + "  ", v.sol);
    s << indent << "syncType: ";
    Printer<int8_t>::stream(s, indent + "  ", v.syncType);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DSR_MSGS_MESSAGE_MOVEJOINTXREQUEST_H
