// Generated by gencpp from file robotiq_urcap_control/Robotiq2FGripper_robot_output.msg
// DO NOT EDIT!


#ifndef ROBOTIQ_URCAP_CONTROL_MESSAGE_ROBOTIQ2FGRIPPER_ROBOT_OUTPUT_H
#define ROBOTIQ_URCAP_CONTROL_MESSAGE_ROBOTIQ2FGRIPPER_ROBOT_OUTPUT_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace robotiq_urcap_control
{
template <class ContainerAllocator>
struct Robotiq2FGripper_robot_output_
{
  typedef Robotiq2FGripper_robot_output_<ContainerAllocator> Type;

  Robotiq2FGripper_robot_output_()
    : rACT(0)
    , rGTO(0)
    , rATR(0)
    , rPR(0)
    , rSP(0)
    , rFR(0)  {
    }
  Robotiq2FGripper_robot_output_(const ContainerAllocator& _alloc)
    : rACT(0)
    , rGTO(0)
    , rATR(0)
    , rPR(0)
    , rSP(0)
    , rFR(0)  {
  (void)_alloc;
    }



   typedef uint8_t _rACT_type;
  _rACT_type rACT;

   typedef uint8_t _rGTO_type;
  _rGTO_type rGTO;

   typedef uint8_t _rATR_type;
  _rATR_type rATR;

   typedef uint8_t _rPR_type;
  _rPR_type rPR;

   typedef uint8_t _rSP_type;
  _rSP_type rSP;

   typedef uint8_t _rFR_type;
  _rFR_type rFR;





  typedef boost::shared_ptr< ::robotiq_urcap_control::Robotiq2FGripper_robot_output_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::robotiq_urcap_control::Robotiq2FGripper_robot_output_<ContainerAllocator> const> ConstPtr;

}; // struct Robotiq2FGripper_robot_output_

typedef ::robotiq_urcap_control::Robotiq2FGripper_robot_output_<std::allocator<void> > Robotiq2FGripper_robot_output;

typedef boost::shared_ptr< ::robotiq_urcap_control::Robotiq2FGripper_robot_output > Robotiq2FGripper_robot_outputPtr;
typedef boost::shared_ptr< ::robotiq_urcap_control::Robotiq2FGripper_robot_output const> Robotiq2FGripper_robot_outputConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::robotiq_urcap_control::Robotiq2FGripper_robot_output_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::robotiq_urcap_control::Robotiq2FGripper_robot_output_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::robotiq_urcap_control::Robotiq2FGripper_robot_output_<ContainerAllocator1> & lhs, const ::robotiq_urcap_control::Robotiq2FGripper_robot_output_<ContainerAllocator2> & rhs)
{
  return lhs.rACT == rhs.rACT &&
    lhs.rGTO == rhs.rGTO &&
    lhs.rATR == rhs.rATR &&
    lhs.rPR == rhs.rPR &&
    lhs.rSP == rhs.rSP &&
    lhs.rFR == rhs.rFR;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::robotiq_urcap_control::Robotiq2FGripper_robot_output_<ContainerAllocator1> & lhs, const ::robotiq_urcap_control::Robotiq2FGripper_robot_output_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace robotiq_urcap_control

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::robotiq_urcap_control::Robotiq2FGripper_robot_output_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robotiq_urcap_control::Robotiq2FGripper_robot_output_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robotiq_urcap_control::Robotiq2FGripper_robot_output_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robotiq_urcap_control::Robotiq2FGripper_robot_output_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robotiq_urcap_control::Robotiq2FGripper_robot_output_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robotiq_urcap_control::Robotiq2FGripper_robot_output_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::robotiq_urcap_control::Robotiq2FGripper_robot_output_<ContainerAllocator> >
{
  static const char* value()
  {
    return "481503a99d995d0e403b7ee708c6862c";
  }

  static const char* value(const ::robotiq_urcap_control::Robotiq2FGripper_robot_output_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x481503a99d995d0eULL;
  static const uint64_t static_value2 = 0x403b7ee708c6862cULL;
};

template<class ContainerAllocator>
struct DataType< ::robotiq_urcap_control::Robotiq2FGripper_robot_output_<ContainerAllocator> >
{
  static const char* value()
  {
    return "robotiq_urcap_control/Robotiq2FGripper_robot_output";
  }

  static const char* value(const ::robotiq_urcap_control::Robotiq2FGripper_robot_output_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::robotiq_urcap_control::Robotiq2FGripper_robot_output_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 rACT\n"
"uint8 rGTO\n"
"uint8 rATR\n"
"uint8 rPR\n"
"uint8 rSP\n"
"uint8 rFR\n"
"\n"
;
  }

  static const char* value(const ::robotiq_urcap_control::Robotiq2FGripper_robot_output_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::robotiq_urcap_control::Robotiq2FGripper_robot_output_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.rACT);
      stream.next(m.rGTO);
      stream.next(m.rATR);
      stream.next(m.rPR);
      stream.next(m.rSP);
      stream.next(m.rFR);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Robotiq2FGripper_robot_output_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::robotiq_urcap_control::Robotiq2FGripper_robot_output_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::robotiq_urcap_control::Robotiq2FGripper_robot_output_<ContainerAllocator>& v)
  {
    s << indent << "rACT: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.rACT);
    s << indent << "rGTO: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.rGTO);
    s << indent << "rATR: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.rATR);
    s << indent << "rPR: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.rPR);
    s << indent << "rSP: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.rSP);
    s << indent << "rFR: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.rFR);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOTIQ_URCAP_CONTROL_MESSAGE_ROBOTIQ2FGRIPPER_ROBOT_OUTPUT_H
