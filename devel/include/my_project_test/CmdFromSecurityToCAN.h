// Generated by gencpp from file my_project_test/CmdFromSecurityToCAN.msg
// DO NOT EDIT!


#ifndef MY_PROJECT_TEST_MESSAGE_CMDFROMSECURITYTOCAN_H
#define MY_PROJECT_TEST_MESSAGE_CMDFROMSECURITYTOCAN_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace my_project_test
{
template <class ContainerAllocator>
struct CmdFromSecurityToCAN_
{
  typedef CmdFromSecurityToCAN_<ContainerAllocator> Type;

  CmdFromSecurityToCAN_()
    : header()
    , upper_fault_level(0)
    , emergency_brake_cmd(0)  {
    }
  CmdFromSecurityToCAN_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , upper_fault_level(0)
    , emergency_brake_cmd(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef int16_t _upper_fault_level_type;
  _upper_fault_level_type upper_fault_level;

   typedef int16_t _emergency_brake_cmd_type;
  _emergency_brake_cmd_type emergency_brake_cmd;





  typedef boost::shared_ptr< ::my_project_test::CmdFromSecurityToCAN_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::my_project_test::CmdFromSecurityToCAN_<ContainerAllocator> const> ConstPtr;

}; // struct CmdFromSecurityToCAN_

typedef ::my_project_test::CmdFromSecurityToCAN_<std::allocator<void> > CmdFromSecurityToCAN;

typedef boost::shared_ptr< ::my_project_test::CmdFromSecurityToCAN > CmdFromSecurityToCANPtr;
typedef boost::shared_ptr< ::my_project_test::CmdFromSecurityToCAN const> CmdFromSecurityToCANConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::my_project_test::CmdFromSecurityToCAN_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::my_project_test::CmdFromSecurityToCAN_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace my_project_test

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'my_project_test': ['/home/workSpace/Pro-UIF-master/src/my_project_test/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::my_project_test::CmdFromSecurityToCAN_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::my_project_test::CmdFromSecurityToCAN_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::my_project_test::CmdFromSecurityToCAN_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::my_project_test::CmdFromSecurityToCAN_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::my_project_test::CmdFromSecurityToCAN_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::my_project_test::CmdFromSecurityToCAN_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::my_project_test::CmdFromSecurityToCAN_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8f36ce0ebb3f0b3a3511cd794f77195f";
  }

  static const char* value(const ::my_project_test::CmdFromSecurityToCAN_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8f36ce0ebb3f0b3aULL;
  static const uint64_t static_value2 = 0x3511cd794f77195fULL;
};

template<class ContainerAllocator>
struct DataType< ::my_project_test::CmdFromSecurityToCAN_<ContainerAllocator> >
{
  static const char* value()
  {
    return "my_project_test/CmdFromSecurityToCAN";
  }

  static const char* value(const ::my_project_test::CmdFromSecurityToCAN_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::my_project_test::CmdFromSecurityToCAN_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# [topic_name]:/pingshuo_security_node/TruckCmdFromSecurityToCAN\n\
\n\
Header header\n\
int16 upper_fault_level             #上层故障等级 0/1/2/3 1-绿色，表示心跳 2-黄色 3-红色等级故障\n\
int16 emergency_brake_cmd            #紧急制动 0：解除，1：实施，发生紧急事件时实施，执行层实施100%电缓行+100%液压制动\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
";
  }

  static const char* value(const ::my_project_test::CmdFromSecurityToCAN_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::my_project_test::CmdFromSecurityToCAN_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.upper_fault_level);
      stream.next(m.emergency_brake_cmd);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CmdFromSecurityToCAN_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::my_project_test::CmdFromSecurityToCAN_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::my_project_test::CmdFromSecurityToCAN_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "upper_fault_level: ";
    Printer<int16_t>::stream(s, indent + "  ", v.upper_fault_level);
    s << indent << "emergency_brake_cmd: ";
    Printer<int16_t>::stream(s, indent + "  ", v.emergency_brake_cmd);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MY_PROJECT_TEST_MESSAGE_CMDFROMSECURITYTOCAN_H