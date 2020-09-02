// Generated by gencpp from file my_project_test/ctr_can_930E.msg
// DO NOT EDIT!


#ifndef MY_PROJECT_TEST_MESSAGE_CTR_CAN_930E_H
#define MY_PROJECT_TEST_MESSAGE_CTR_CAN_930E_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace my_project_test
{
template <class ContainerAllocator>
struct ctr_can_930E_
{
  typedef ctr_can_930E_<ContainerAllocator> Type;

  ctr_can_930E_()
    : driveMode_b(false)
    , throttle(0.0)
    , electronic_break(0.0)
    , hydraulic_break(0.0)
    , steerAngle(0.0)
    , park_b(false)
    , loadBrake_b(false)
    , gear(0)
    , dump_bed(0.0)
    , powerSupply_b(false)
    , engine_b(false)
    , turtle_b(false)
    , lubricate_b(false)
    , firePrevent_b(false)
    , emergencyBrake_b(false)
    , lighting_b(false)
    , horn_b(false)
    , leftLamp_b(false)
    , rightLamp_b(false)
    , bothLamp_b(false)
    , asternLamp_b(false)  {
    }
  ctr_can_930E_(const ContainerAllocator& _alloc)
    : driveMode_b(false)
    , throttle(0.0)
    , electronic_break(0.0)
    , hydraulic_break(0.0)
    , steerAngle(0.0)
    , park_b(false)
    , loadBrake_b(false)
    , gear(0)
    , dump_bed(0.0)
    , powerSupply_b(false)
    , engine_b(false)
    , turtle_b(false)
    , lubricate_b(false)
    , firePrevent_b(false)
    , emergencyBrake_b(false)
    , lighting_b(false)
    , horn_b(false)
    , leftLamp_b(false)
    , rightLamp_b(false)
    , bothLamp_b(false)
    , asternLamp_b(false)  {
  (void)_alloc;
    }



   typedef uint8_t _driveMode_b_type;
  _driveMode_b_type driveMode_b;

   typedef float _throttle_type;
  _throttle_type throttle;

   typedef float _electronic_break_type;
  _electronic_break_type electronic_break;

   typedef float _hydraulic_break_type;
  _hydraulic_break_type hydraulic_break;

   typedef float _steerAngle_type;
  _steerAngle_type steerAngle;

   typedef uint8_t _park_b_type;
  _park_b_type park_b;

   typedef uint8_t _loadBrake_b_type;
  _loadBrake_b_type loadBrake_b;

   typedef int16_t _gear_type;
  _gear_type gear;

   typedef float _dump_bed_type;
  _dump_bed_type dump_bed;

   typedef uint8_t _powerSupply_b_type;
  _powerSupply_b_type powerSupply_b;

   typedef uint8_t _engine_b_type;
  _engine_b_type engine_b;

   typedef uint8_t _turtle_b_type;
  _turtle_b_type turtle_b;

   typedef uint8_t _lubricate_b_type;
  _lubricate_b_type lubricate_b;

   typedef uint8_t _firePrevent_b_type;
  _firePrevent_b_type firePrevent_b;

   typedef uint8_t _emergencyBrake_b_type;
  _emergencyBrake_b_type emergencyBrake_b;

   typedef uint8_t _lighting_b_type;
  _lighting_b_type lighting_b;

   typedef uint8_t _horn_b_type;
  _horn_b_type horn_b;

   typedef uint8_t _leftLamp_b_type;
  _leftLamp_b_type leftLamp_b;

   typedef uint8_t _rightLamp_b_type;
  _rightLamp_b_type rightLamp_b;

   typedef uint8_t _bothLamp_b_type;
  _bothLamp_b_type bothLamp_b;

   typedef uint8_t _asternLamp_b_type;
  _asternLamp_b_type asternLamp_b;





  typedef boost::shared_ptr< ::my_project_test::ctr_can_930E_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::my_project_test::ctr_can_930E_<ContainerAllocator> const> ConstPtr;

}; // struct ctr_can_930E_

typedef ::my_project_test::ctr_can_930E_<std::allocator<void> > ctr_can_930E;

typedef boost::shared_ptr< ::my_project_test::ctr_can_930E > ctr_can_930EPtr;
typedef boost::shared_ptr< ::my_project_test::ctr_can_930E const> ctr_can_930EConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::my_project_test::ctr_can_930E_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::my_project_test::ctr_can_930E_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace my_project_test

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'my_project_test': ['/home/workSpace/Pro-UIF-master/src/my_project_test/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::my_project_test::ctr_can_930E_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::my_project_test::ctr_can_930E_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::my_project_test::ctr_can_930E_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::my_project_test::ctr_can_930E_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::my_project_test::ctr_can_930E_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::my_project_test::ctr_can_930E_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::my_project_test::ctr_can_930E_<ContainerAllocator> >
{
  static const char* value()
  {
    return "14f0cfcc0536ff927b6417311180ea87";
  }

  static const char* value(const ::my_project_test::ctr_can_930E_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x14f0cfcc0536ff92ULL;
  static const uint64_t static_value2 = 0x7b6417311180ea87ULL;
};

template<class ContainerAllocator>
struct DataType< ::my_project_test::ctr_can_930E_<ContainerAllocator> >
{
  static const char* value()
  {
    return "my_project_test/ctr_can_930E";
  }

  static const char* value(const ::my_project_test::ctr_can_930E_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::my_project_test::ctr_can_930E_<ContainerAllocator> >
{
  static const char* value()
  {
    return "## topic name : \"ros_to_can_MT4000\"\n\
###############\n\
\n\
bool driveMode_b            #自动模式开关 0:人工驾驶   1：自动驾驶\n\
float32 throttle            #油门踏板指令 0-100\n\
float32 electronic_break    #电制动踏板指令 0-100\n\
float32 hydraulic_break     #液压制动踏板指令 0-100\n\
float32 steerAngle          #前轮转向角度[-350,250]，1=0.1度，左转为正数最大25度，右转为负数最值为-35度\n\
bool park_b                 # 驻车制动, 0 无动作， 1 动作\n\
bool loadBrake_b            # 装载制动, 0 无动作， 1 动作\n\
int16 gear                  #档位指令 0：空挡 1：前进档 2：倒车档\n\
###############\n\
float32 dump_bed 	        #货箱举升高度指令 0-100\n\
bool powerSupply_b          # 断电指令, 0 无动作， 1 动作\n\
bool engine_b               # 发送机熄火指令, 0 无动作， 1 动作\n\
bool turtle_b               # 龟速模式, 0 无动作， 1 动作\n\
bool lubricate_b            # 强制润滑, 0 无动作， 1 动作\n\
bool firePrevent_b          # 消防, 0 无动作， 1 动作\n\
bool emergencyBrake_b       # 紧急制动, 0 无动作， 1 动作\n\
bool lighting_b             # 照明, 0 无动作， 1 动作\n\
bool horn_b                 # 喇叭, 0 无动作， 1 动作\n\
bool leftLamp_b\n\
bool rightLamp_b            # 转向灯, 0 无动作， 1 动作\n\
bool bothLamp_b             # 双闪, 0 无动作， 1 动作\n\
bool asternLamp_b           #倒车灯 ,0 无动作, 1 动作\n\
";
  }

  static const char* value(const ::my_project_test::ctr_can_930E_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::my_project_test::ctr_can_930E_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.driveMode_b);
      stream.next(m.throttle);
      stream.next(m.electronic_break);
      stream.next(m.hydraulic_break);
      stream.next(m.steerAngle);
      stream.next(m.park_b);
      stream.next(m.loadBrake_b);
      stream.next(m.gear);
      stream.next(m.dump_bed);
      stream.next(m.powerSupply_b);
      stream.next(m.engine_b);
      stream.next(m.turtle_b);
      stream.next(m.lubricate_b);
      stream.next(m.firePrevent_b);
      stream.next(m.emergencyBrake_b);
      stream.next(m.lighting_b);
      stream.next(m.horn_b);
      stream.next(m.leftLamp_b);
      stream.next(m.rightLamp_b);
      stream.next(m.bothLamp_b);
      stream.next(m.asternLamp_b);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ctr_can_930E_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::my_project_test::ctr_can_930E_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::my_project_test::ctr_can_930E_<ContainerAllocator>& v)
  {
    s << indent << "driveMode_b: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.driveMode_b);
    s << indent << "throttle: ";
    Printer<float>::stream(s, indent + "  ", v.throttle);
    s << indent << "electronic_break: ";
    Printer<float>::stream(s, indent + "  ", v.electronic_break);
    s << indent << "hydraulic_break: ";
    Printer<float>::stream(s, indent + "  ", v.hydraulic_break);
    s << indent << "steerAngle: ";
    Printer<float>::stream(s, indent + "  ", v.steerAngle);
    s << indent << "park_b: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.park_b);
    s << indent << "loadBrake_b: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.loadBrake_b);
    s << indent << "gear: ";
    Printer<int16_t>::stream(s, indent + "  ", v.gear);
    s << indent << "dump_bed: ";
    Printer<float>::stream(s, indent + "  ", v.dump_bed);
    s << indent << "powerSupply_b: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.powerSupply_b);
    s << indent << "engine_b: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.engine_b);
    s << indent << "turtle_b: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.turtle_b);
    s << indent << "lubricate_b: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.lubricate_b);
    s << indent << "firePrevent_b: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.firePrevent_b);
    s << indent << "emergencyBrake_b: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.emergencyBrake_b);
    s << indent << "lighting_b: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.lighting_b);
    s << indent << "horn_b: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.horn_b);
    s << indent << "leftLamp_b: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.leftLamp_b);
    s << indent << "rightLamp_b: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.rightLamp_b);
    s << indent << "bothLamp_b: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.bothLamp_b);
    s << indent << "asternLamp_b: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.asternLamp_b);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MY_PROJECT_TEST_MESSAGE_CTR_CAN_930E_H