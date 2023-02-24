// Generated by gencpp from file dsr_msgs/SetUserCartCoord2Request.msg
// DO NOT EDIT!


#ifndef DSR_MSGS_MESSAGE_SETUSERCARTCOORD2REQUEST_H
#define DSR_MSGS_MESSAGE_SETUSERCARTCOORD2REQUEST_H


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
struct SetUserCartCoord2Request_
{
  typedef SetUserCartCoord2Request_<ContainerAllocator> Type;

  SetUserCartCoord2Request_()
    : x1()
    , x2()
    , x3()
    , pos()
    , ref(0)  {
      x1.assign(0.0);

      x2.assign(0.0);

      x3.assign(0.0);

      pos.assign(0.0);
  }
  SetUserCartCoord2Request_(const ContainerAllocator& _alloc)
    : x1()
    , x2()
    , x3()
    , pos()
    , ref(0)  {
  (void)_alloc;
      x1.assign(0.0);

      x2.assign(0.0);

      x3.assign(0.0);

      pos.assign(0.0);
  }



   typedef boost::array<double, 6>  _x1_type;
  _x1_type x1;

   typedef boost::array<double, 6>  _x2_type;
  _x2_type x2;

   typedef boost::array<double, 6>  _x3_type;
  _x3_type x3;

   typedef boost::array<double, 6>  _pos_type;
  _pos_type pos;

   typedef int8_t _ref_type;
  _ref_type ref;





  typedef boost::shared_ptr< ::dsr_msgs::SetUserCartCoord2Request_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dsr_msgs::SetUserCartCoord2Request_<ContainerAllocator> const> ConstPtr;

}; // struct SetUserCartCoord2Request_

typedef ::dsr_msgs::SetUserCartCoord2Request_<std::allocator<void> > SetUserCartCoord2Request;

typedef boost::shared_ptr< ::dsr_msgs::SetUserCartCoord2Request > SetUserCartCoord2RequestPtr;
typedef boost::shared_ptr< ::dsr_msgs::SetUserCartCoord2Request const> SetUserCartCoord2RequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dsr_msgs::SetUserCartCoord2Request_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dsr_msgs::SetUserCartCoord2Request_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::dsr_msgs::SetUserCartCoord2Request_<ContainerAllocator1> & lhs, const ::dsr_msgs::SetUserCartCoord2Request_<ContainerAllocator2> & rhs)
{
  return lhs.x1 == rhs.x1 &&
    lhs.x2 == rhs.x2 &&
    lhs.x3 == rhs.x3 &&
    lhs.pos == rhs.pos &&
    lhs.ref == rhs.ref;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::dsr_msgs::SetUserCartCoord2Request_<ContainerAllocator1> & lhs, const ::dsr_msgs::SetUserCartCoord2Request_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace dsr_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::dsr_msgs::SetUserCartCoord2Request_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dsr_msgs::SetUserCartCoord2Request_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dsr_msgs::SetUserCartCoord2Request_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dsr_msgs::SetUserCartCoord2Request_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dsr_msgs::SetUserCartCoord2Request_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dsr_msgs::SetUserCartCoord2Request_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dsr_msgs::SetUserCartCoord2Request_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b9f3dcf6a65143791504d0e9c825e501";
  }

  static const char* value(const ::dsr_msgs::SetUserCartCoord2Request_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb9f3dcf6a6514379ULL;
  static const uint64_t static_value2 = 0x1504d0e9c825e501ULL;
};

template<class ContainerAllocator>
struct DataType< ::dsr_msgs::SetUserCartCoord2Request_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dsr_msgs/SetUserCartCoord2Request";
  }

  static const char* value(const ::dsr_msgs::SetUserCartCoord2Request_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dsr_msgs::SetUserCartCoord2Request_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#____________________________________________________________________________________________\n"
"# set_user_cart_coord(x1, x2, x3, pos, ref)\n"
"#____________________________________________________________________________________________\n"
"\n"
"float64[6] x1                 # task pos(posx)  \n"
"float64[6] x2                 # task pos(posx)  \n"
"float64[6] x3                 # task pos(posx)\n"
"float64[6] pos                # pos(posx)\n"
"int8       ref                # DR_BASE(0), DR_WORLD(2)\n"
"                              # <ref is only available in M2.40 or later> \n"
;
  }

  static const char* value(const ::dsr_msgs::SetUserCartCoord2Request_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dsr_msgs::SetUserCartCoord2Request_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.x1);
      stream.next(m.x2);
      stream.next(m.x3);
      stream.next(m.pos);
      stream.next(m.ref);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetUserCartCoord2Request_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dsr_msgs::SetUserCartCoord2Request_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dsr_msgs::SetUserCartCoord2Request_<ContainerAllocator>& v)
  {
    s << indent << "x1[]" << std::endl;
    for (size_t i = 0; i < v.x1.size(); ++i)
    {
      s << indent << "  x1[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.x1[i]);
    }
    s << indent << "x2[]" << std::endl;
    for (size_t i = 0; i < v.x2.size(); ++i)
    {
      s << indent << "  x2[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.x2[i]);
    }
    s << indent << "x3[]" << std::endl;
    for (size_t i = 0; i < v.x3.size(); ++i)
    {
      s << indent << "  x3[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.x3[i]);
    }
    s << indent << "pos[]" << std::endl;
    for (size_t i = 0; i < v.pos.size(); ++i)
    {
      s << indent << "  pos[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.pos[i]);
    }
    s << indent << "ref: ";
    Printer<int8_t>::stream(s, indent + "  ", v.ref);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DSR_MSGS_MESSAGE_SETUSERCARTCOORD2REQUEST_H
