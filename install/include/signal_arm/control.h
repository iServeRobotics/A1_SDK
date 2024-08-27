// Generated by gencpp from file signal_arm/control.msg
// DO NOT EDIT!


#ifndef SIGNAL_ARM_MESSAGE_CONTROL_H
#define SIGNAL_ARM_MESSAGE_CONTROL_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace signal_arm
{
template <class ContainerAllocator>
struct control_
{
  typedef control_<ContainerAllocator> Type;

  control_()
    : p_des()
    , v_des()
    , kp()
    , kd()
    , t_ff()  {
    }
  control_(const ContainerAllocator& _alloc)
    : p_des(_alloc)
    , v_des(_alloc)
    , kp(_alloc)
    , kd(_alloc)
    , t_ff(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> _p_des_type;
  _p_des_type p_des;

   typedef std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> _v_des_type;
  _v_des_type v_des;

   typedef std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> _kp_type;
  _kp_type kp;

   typedef std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> _kd_type;
  _kd_type kd;

   typedef std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> _t_ff_type;
  _t_ff_type t_ff;





  typedef boost::shared_ptr< ::signal_arm::control_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::signal_arm::control_<ContainerAllocator> const> ConstPtr;

}; // struct control_

typedef ::signal_arm::control_<std::allocator<void> > control;

typedef boost::shared_ptr< ::signal_arm::control > controlPtr;
typedef boost::shared_ptr< ::signal_arm::control const> controlConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::signal_arm::control_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::signal_arm::control_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::signal_arm::control_<ContainerAllocator1> & lhs, const ::signal_arm::control_<ContainerAllocator2> & rhs)
{
  return lhs.p_des == rhs.p_des &&
    lhs.v_des == rhs.v_des &&
    lhs.kp == rhs.kp &&
    lhs.kd == rhs.kd &&
    lhs.t_ff == rhs.t_ff;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::signal_arm::control_<ContainerAllocator1> & lhs, const ::signal_arm::control_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace signal_arm

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::signal_arm::control_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::signal_arm::control_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::signal_arm::control_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::signal_arm::control_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::signal_arm::control_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::signal_arm::control_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::signal_arm::control_<ContainerAllocator> >
{
  static const char* value()
  {
    return "92db34ecb249af9c33832065efc76c23";
  }

  static const char* value(const ::signal_arm::control_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x92db34ecb249af9cULL;
  static const uint64_t static_value2 = 0x33832065efc76c23ULL;
};

template<class ContainerAllocator>
struct DataType< ::signal_arm::control_<ContainerAllocator> >
{
  static const char* value()
  {
    return "signal_arm/control";
  }

  static const char* value(const ::signal_arm::control_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::signal_arm::control_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32[] p_des\n"
"float32[] v_des\n"
"float32[] kp\n"
"float32[] kd\n"
"float32[] t_ff\n"
;
  }

  static const char* value(const ::signal_arm::control_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::signal_arm::control_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.p_des);
      stream.next(m.v_des);
      stream.next(m.kp);
      stream.next(m.kd);
      stream.next(m.t_ff);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct control_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::signal_arm::control_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::signal_arm::control_<ContainerAllocator>& v)
  {
    s << indent << "p_des[]" << std::endl;
    for (size_t i = 0; i < v.p_des.size(); ++i)
    {
      s << indent << "  p_des[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.p_des[i]);
    }
    s << indent << "v_des[]" << std::endl;
    for (size_t i = 0; i < v.v_des.size(); ++i)
    {
      s << indent << "  v_des[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.v_des[i]);
    }
    s << indent << "kp[]" << std::endl;
    for (size_t i = 0; i < v.kp.size(); ++i)
    {
      s << indent << "  kp[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.kp[i]);
    }
    s << indent << "kd[]" << std::endl;
    for (size_t i = 0; i < v.kd.size(); ++i)
    {
      s << indent << "  kd[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.kd[i]);
    }
    s << indent << "t_ff[]" << std::endl;
    for (size_t i = 0; i < v.t_ff.size(); ++i)
    {
      s << indent << "  t_ff[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.t_ff[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // SIGNAL_ARM_MESSAGE_CONTROL_H