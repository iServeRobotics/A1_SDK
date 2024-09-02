// Generated by gencpp from file mobiman_msgs/Panel3d.msg
// DO NOT EDIT!


#ifndef MOBIMAN_MSGS_MESSAGE_PANEL3D_H
#define MOBIMAN_MSGS_MESSAGE_PANEL3D_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Point.h>
#include <geometry_msgs/Vector3.h>
#include <mobiman_msgs/Button3d.h>

namespace mobiman_msgs
{
template <class ContainerAllocator>
struct Panel3d_
{
  typedef Panel3d_<ContainerAllocator> Type;

  Panel3d_()
    : origin()
    , normal()
    , length(0.0)
    , width(0.0)
    , buttons_3d()  {
    }
  Panel3d_(const ContainerAllocator& _alloc)
    : origin(_alloc)
    , normal(_alloc)
    , length(0.0)
    , width(0.0)
    , buttons_3d(_alloc)  {
  (void)_alloc;
    }



   typedef  ::geometry_msgs::Point_<ContainerAllocator>  _origin_type;
  _origin_type origin;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _normal_type;
  _normal_type normal;

   typedef float _length_type;
  _length_type length;

   typedef float _width_type;
  _width_type width;

   typedef std::vector< ::mobiman_msgs::Button3d_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::mobiman_msgs::Button3d_<ContainerAllocator> >> _buttons_3d_type;
  _buttons_3d_type buttons_3d;





  typedef boost::shared_ptr< ::mobiman_msgs::Panel3d_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mobiman_msgs::Panel3d_<ContainerAllocator> const> ConstPtr;

}; // struct Panel3d_

typedef ::mobiman_msgs::Panel3d_<std::allocator<void> > Panel3d;

typedef boost::shared_ptr< ::mobiman_msgs::Panel3d > Panel3dPtr;
typedef boost::shared_ptr< ::mobiman_msgs::Panel3d const> Panel3dConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mobiman_msgs::Panel3d_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mobiman_msgs::Panel3d_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::mobiman_msgs::Panel3d_<ContainerAllocator1> & lhs, const ::mobiman_msgs::Panel3d_<ContainerAllocator2> & rhs)
{
  return lhs.origin == rhs.origin &&
    lhs.normal == rhs.normal &&
    lhs.length == rhs.length &&
    lhs.width == rhs.width &&
    lhs.buttons_3d == rhs.buttons_3d;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::mobiman_msgs::Panel3d_<ContainerAllocator1> & lhs, const ::mobiman_msgs::Panel3d_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace mobiman_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::mobiman_msgs::Panel3d_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mobiman_msgs::Panel3d_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mobiman_msgs::Panel3d_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mobiman_msgs::Panel3d_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mobiman_msgs::Panel3d_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mobiman_msgs::Panel3d_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mobiman_msgs::Panel3d_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a836babba9d9025b436af0ca907d0866";
  }

  static const char* value(const ::mobiman_msgs::Panel3d_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa836babba9d9025bULL;
  static const uint64_t static_value2 = 0x436af0ca907d0866ULL;
};

template<class ContainerAllocator>
struct DataType< ::mobiman_msgs::Panel3d_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mobiman_msgs/Panel3d";
  }

  static const char* value(const ::mobiman_msgs::Panel3d_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mobiman_msgs::Panel3d_<ContainerAllocator> >
{
  static const char* value()
  {
    return "geometry_msgs/Point origin\n"
"geometry_msgs/Vector3 normal\n"
"float32 length\n"
"float32 width\n"
"Button3d[] buttons_3d\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Vector3\n"
"# This represents a vector in free space. \n"
"# It is only meant to represent a direction. Therefore, it does not\n"
"# make sense to apply a translation to it (e.g., when applying a \n"
"# generic rigid transformation to a Vector3, tf2 will only apply the\n"
"# rotation). If you want your data to be translatable too, use the\n"
"# geometry_msgs/Point message instead.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"================================================================================\n"
"MSG: mobiman_msgs/Button3d\n"
"geometry_msgs/Pose pose\n"
"ButtonSemantics button_semantics\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
"\n"
"================================================================================\n"
"MSG: mobiman_msgs/ButtonSemantics\n"
"string name\n"
"uint8 button_status\n"
;
  }

  static const char* value(const ::mobiman_msgs::Panel3d_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mobiman_msgs::Panel3d_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.origin);
      stream.next(m.normal);
      stream.next(m.length);
      stream.next(m.width);
      stream.next(m.buttons_3d);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Panel3d_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mobiman_msgs::Panel3d_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mobiman_msgs::Panel3d_<ContainerAllocator>& v)
  {
    s << indent << "origin: ";
    s << std::endl;
    Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.origin);
    s << indent << "normal: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.normal);
    s << indent << "length: ";
    Printer<float>::stream(s, indent + "  ", v.length);
    s << indent << "width: ";
    Printer<float>::stream(s, indent + "  ", v.width);
    s << indent << "buttons_3d[]" << std::endl;
    for (size_t i = 0; i < v.buttons_3d.size(); ++i)
    {
      s << indent << "  buttons_3d[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::mobiman_msgs::Button3d_<ContainerAllocator> >::stream(s, indent + "    ", v.buttons_3d[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // MOBIMAN_MSGS_MESSAGE_PANEL3D_H