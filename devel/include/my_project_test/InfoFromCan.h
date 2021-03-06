// Generated by gencpp from file my_project_test/InfoFromCan.msg
// DO NOT EDIT!


#ifndef MY_PROJECT_TEST_MESSAGE_INFOFROMCAN_H
#define MY_PROJECT_TEST_MESSAGE_INFOFROMCAN_H


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
struct InfoFromCan_
{
  typedef InfoFromCan_<ContainerAllocator> Type;

  InfoFromCan_()
    : header()
    , executive_fault_level(0)
    , truck_load_weight(0.0)
    , hydraulic_brake_fb(0.0)
    , auto_mode_fb(0)
    , emergency_brake_fb(0)
    , container_rising(0)
    , container_falling(0)
    , container_rising_over(0)
    , container_falling_over(0)
    , electric_brake_fb(0)
    , load_brake_fb(0)
    , park_brake_fb(0)
    , remaining_oil(0.0)
    , steer_angle_fb(0.0)
    , engine_speed(0.0)
    , truck_speed(0.0)
    , gear_fb(0)  {
    }
  InfoFromCan_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , executive_fault_level(0)
    , truck_load_weight(0.0)
    , hydraulic_brake_fb(0.0)
    , auto_mode_fb(0)
    , emergency_brake_fb(0)
    , container_rising(0)
    , container_falling(0)
    , container_rising_over(0)
    , container_falling_over(0)
    , electric_brake_fb(0)
    , load_brake_fb(0)
    , park_brake_fb(0)
    , remaining_oil(0.0)
    , steer_angle_fb(0.0)
    , engine_speed(0.0)
    , truck_speed(0.0)
    , gear_fb(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef int16_t _executive_fault_level_type;
  _executive_fault_level_type executive_fault_level;

   typedef double _truck_load_weight_type;
  _truck_load_weight_type truck_load_weight;

   typedef double _hydraulic_brake_fb_type;
  _hydraulic_brake_fb_type hydraulic_brake_fb;

   typedef int16_t _auto_mode_fb_type;
  _auto_mode_fb_type auto_mode_fb;

   typedef int16_t _emergency_brake_fb_type;
  _emergency_brake_fb_type emergency_brake_fb;

   typedef int16_t _container_rising_type;
  _container_rising_type container_rising;

   typedef int16_t _container_falling_type;
  _container_falling_type container_falling;

   typedef int16_t _container_rising_over_type;
  _container_rising_over_type container_rising_over;

   typedef int16_t _container_falling_over_type;
  _container_falling_over_type container_falling_over;

   typedef int16_t _electric_brake_fb_type;
  _electric_brake_fb_type electric_brake_fb;

   typedef int16_t _load_brake_fb_type;
  _load_brake_fb_type load_brake_fb;

   typedef int16_t _park_brake_fb_type;
  _park_brake_fb_type park_brake_fb;

   typedef double _remaining_oil_type;
  _remaining_oil_type remaining_oil;

   typedef double _steer_angle_fb_type;
  _steer_angle_fb_type steer_angle_fb;

   typedef double _engine_speed_type;
  _engine_speed_type engine_speed;

   typedef double _truck_speed_type;
  _truck_speed_type truck_speed;

   typedef int16_t _gear_fb_type;
  _gear_fb_type gear_fb;





  typedef boost::shared_ptr< ::my_project_test::InfoFromCan_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::my_project_test::InfoFromCan_<ContainerAllocator> const> ConstPtr;

}; // struct InfoFromCan_

typedef ::my_project_test::InfoFromCan_<std::allocator<void> > InfoFromCan;

typedef boost::shared_ptr< ::my_project_test::InfoFromCan > InfoFromCanPtr;
typedef boost::shared_ptr< ::my_project_test::InfoFromCan const> InfoFromCanConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::my_project_test::InfoFromCan_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::my_project_test::InfoFromCan_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::my_project_test::InfoFromCan_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::my_project_test::InfoFromCan_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::my_project_test::InfoFromCan_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::my_project_test::InfoFromCan_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::my_project_test::InfoFromCan_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::my_project_test::InfoFromCan_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::my_project_test::InfoFromCan_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bda89dc8657dd2a63999416b115e9fde";
  }

  static const char* value(const ::my_project_test::InfoFromCan_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xbda89dc8657dd2a6ULL;
  static const uint64_t static_value2 = 0x3999416b115e9fdeULL;
};

template<class ContainerAllocator>
struct DataType< ::my_project_test::InfoFromCan_<ContainerAllocator> >
{
  static const char* value()
  {
    return "my_project_test/InfoFromCan";
  }

  static const char* value(const ::my_project_test::InfoFromCan_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::my_project_test::InfoFromCan_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# [topic_name]:/can_node/TruckInfoFromCAN\n\
\n\
Header header\n\
\n\
int16   executive_fault_level             # 执行层故障等级信号 0/1/2/3 , 1-绿色,表示心跳 2-黄色 3-红色等级故障\n\
float64 truck_load_weight               # 车辆载重信号      0~255吨\n\
float64 hydraulic_brake_fb              # 液压工作制动反馈信号 0~100 对应0~最高压力\n\
int16   auto_mode_fb                      # 无人/人工驾驶模式信号 0/1 0:人工驾驶，1：自动驾驶\n\
int16   emergency_brake_fb                # 紧急制动-实施/解除反馈信号 0/1 0:解除，1：已实施\n\
int16   container_rising                  # 车厢举升控制信号 0/1 1:举升中\n\
int16   container_falling                 # 车厢下降控制信号 0/1 1:下降中\n\
int16   container_rising_over             # 车厢举升控制反馈信号 0/1 1:举升到位\n\
int16   container_falling_over            # 车厢下降控制反馈信号 0/1 1:下降到位\n\
int16   electric_brake_fb                 # 电缓行实施  0/1  0:未实施，1：已实施\n\
int16   load_brake_fb                     # 装载制动-实施/解除反馈信号 0/1 0:解除，1：已实施\n\
int16   park_brake_fb                     # 驻车制动-实施/解除反馈信号 0/1 0:解除，1：已实施\n\
float64 remaining_oil                   # 油量剩余 0~100 0~100%百分比范围值\n\
float64 steer_angle_fb                  # 左前轮转向角（左转为正，右转为负）-35~35\n\
float64 engine_speed                    # 发动机转速 0~8031.875rpm\n\
float64 truck_speed                     # 车速 0~125km/h\n\
int16   gear_fb                           # 档位反馈  0/1/2 0-N,1-D,2-R\n\
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

  static const char* value(const ::my_project_test::InfoFromCan_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::my_project_test::InfoFromCan_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.executive_fault_level);
      stream.next(m.truck_load_weight);
      stream.next(m.hydraulic_brake_fb);
      stream.next(m.auto_mode_fb);
      stream.next(m.emergency_brake_fb);
      stream.next(m.container_rising);
      stream.next(m.container_falling);
      stream.next(m.container_rising_over);
      stream.next(m.container_falling_over);
      stream.next(m.electric_brake_fb);
      stream.next(m.load_brake_fb);
      stream.next(m.park_brake_fb);
      stream.next(m.remaining_oil);
      stream.next(m.steer_angle_fb);
      stream.next(m.engine_speed);
      stream.next(m.truck_speed);
      stream.next(m.gear_fb);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct InfoFromCan_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::my_project_test::InfoFromCan_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::my_project_test::InfoFromCan_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "executive_fault_level: ";
    Printer<int16_t>::stream(s, indent + "  ", v.executive_fault_level);
    s << indent << "truck_load_weight: ";
    Printer<double>::stream(s, indent + "  ", v.truck_load_weight);
    s << indent << "hydraulic_brake_fb: ";
    Printer<double>::stream(s, indent + "  ", v.hydraulic_brake_fb);
    s << indent << "auto_mode_fb: ";
    Printer<int16_t>::stream(s, indent + "  ", v.auto_mode_fb);
    s << indent << "emergency_brake_fb: ";
    Printer<int16_t>::stream(s, indent + "  ", v.emergency_brake_fb);
    s << indent << "container_rising: ";
    Printer<int16_t>::stream(s, indent + "  ", v.container_rising);
    s << indent << "container_falling: ";
    Printer<int16_t>::stream(s, indent + "  ", v.container_falling);
    s << indent << "container_rising_over: ";
    Printer<int16_t>::stream(s, indent + "  ", v.container_rising_over);
    s << indent << "container_falling_over: ";
    Printer<int16_t>::stream(s, indent + "  ", v.container_falling_over);
    s << indent << "electric_brake_fb: ";
    Printer<int16_t>::stream(s, indent + "  ", v.electric_brake_fb);
    s << indent << "load_brake_fb: ";
    Printer<int16_t>::stream(s, indent + "  ", v.load_brake_fb);
    s << indent << "park_brake_fb: ";
    Printer<int16_t>::stream(s, indent + "  ", v.park_brake_fb);
    s << indent << "remaining_oil: ";
    Printer<double>::stream(s, indent + "  ", v.remaining_oil);
    s << indent << "steer_angle_fb: ";
    Printer<double>::stream(s, indent + "  ", v.steer_angle_fb);
    s << indent << "engine_speed: ";
    Printer<double>::stream(s, indent + "  ", v.engine_speed);
    s << indent << "truck_speed: ";
    Printer<double>::stream(s, indent + "  ", v.truck_speed);
    s << indent << "gear_fb: ";
    Printer<int16_t>::stream(s, indent + "  ", v.gear_fb);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MY_PROJECT_TEST_MESSAGE_INFOFROMCAN_H
