// Generated by gencpp from file dsr_msgs/IkinRequest.msg
// DO NOT EDIT!


#ifndef DSR_MSGS_MESSAGE_IKINREQUEST_H
#define DSR_MSGS_MESSAGE_IKINREQUEST_H


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
struct IkinRequest_
{
  typedef IkinRequest_<ContainerAllocator> Type;

  IkinRequest_()
    : pos()
    , sol_space(0)
    , ref(0)  {
      pos.assign(0.0);
  }
  IkinRequest_(const ContainerAllocator& _alloc)
    : pos()
    , sol_space(0)
    , ref(0)  {
  (void)_alloc;
      pos.assign(0.0);
  }



   typedef boost::array<double, 6>  _pos_type;
  _pos_type pos;

   typedef int8_t _sol_space_type;
  _sol_space_type sol_space;

   typedef int8_t _ref_type;
  _ref_type ref;





  typedef boost::shared_ptr< ::dsr_msgs::IkinRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dsr_msgs::IkinRequest_<ContainerAllocator> const> ConstPtr;

}; // struct IkinRequest_

typedef ::dsr_msgs::IkinRequest_<std::allocator<void> > IkinRequest;

typedef boost::shared_ptr< ::dsr_msgs::IkinRequest > IkinRequestPtr;
typedef boost::shared_ptr< ::dsr_msgs::IkinRequest const> IkinRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dsr_msgs::IkinRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dsr_msgs::IkinRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::dsr_msgs::IkinRequest_<ContainerAllocator1> & lhs, const ::dsr_msgs::IkinRequest_<ContainerAllocator2> & rhs)
{
  return lhs.pos == rhs.pos &&
    lhs.sol_space == rhs.sol_space &&
    lhs.ref == rhs.ref;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::dsr_msgs::IkinRequest_<ContainerAllocator1> & lhs, const ::dsr_msgs::IkinRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace dsr_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::dsr_msgs::IkinRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dsr_msgs::IkinRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dsr_msgs::IkinRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dsr_msgs::IkinRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dsr_msgs::IkinRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dsr_msgs::IkinRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dsr_msgs::IkinRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8ea6410df00826de29fa23b7537cf261";
  }

  static const char* value(const ::dsr_msgs::IkinRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8ea6410df00826deULL;
  static const uint64_t static_value2 = 0x29fa23b7537cf261ULL;
};

template<class ContainerAllocator>
struct DataType< ::dsr_msgs::IkinRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dsr_msgs/IkinRequest";
  }

  static const char* value(const ::dsr_msgs::IkinRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dsr_msgs::IkinRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#____________________________________________________________________________________________\n"
"# ikin  \n"
"#____________________________________________________________________________________________\n"
"\n"
"float64[6] pos               # task pos(posx)  \n"
"int8       sol_space         # solution space : 0 ~ 7\n"
"int8       ref     #= 0      # DR_BASE(0), DR_WORLD(2)\n"
"                             # <ref is only available in M2.40 or later> \n"
;
  }

  static const char* value(const ::dsr_msgs::IkinRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dsr_msgs::IkinRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.pos);
      stream.next(m.sol_space);
      stream.next(m.ref);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct IkinRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dsr_msgs::IkinRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dsr_msgs::IkinRequest_<ContainerAllocator>& v)
  {
    s << indent << "pos[]" << std::endl;
    for (size_t i = 0; i < v.pos.size(); ++i)
    {
      s << indent << "  pos[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.pos[i]);
    }
    s << indent << "sol_space: ";
    Printer<int8_t>::stream(s, indent + "  ", v.sol_space);
    s << indent << "ref: ";
    Printer<int8_t>::stream(s, indent + "  ", v.ref);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DSR_MSGS_MESSAGE_IKINREQUEST_H
