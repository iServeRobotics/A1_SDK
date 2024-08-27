// Generated by gencpp from file mobiman_msgs/CameraDetection.msg
// DO NOT EDIT!


#ifndef MOBIMAN_MSGS_MESSAGE_CAMERADETECTION_H
#define MOBIMAN_MSGS_MESSAGE_CAMERADETECTION_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <sensor_msgs/Image.h>
#include <mobiman_msgs/Mask.h>

namespace mobiman_msgs
{
template <class ContainerAllocator>
struct CameraDetection_
{
  typedef CameraDetection_<ContainerAllocator> Type;

  CameraDetection_()
    : header()
    , source_img()
    , mask()  {
    }
  CameraDetection_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , source_img(_alloc)
    , mask(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::sensor_msgs::Image_<ContainerAllocator>  _source_img_type;
  _source_img_type source_img;

   typedef  ::mobiman_msgs::Mask_<ContainerAllocator>  _mask_type;
  _mask_type mask;





  typedef boost::shared_ptr< ::mobiman_msgs::CameraDetection_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mobiman_msgs::CameraDetection_<ContainerAllocator> const> ConstPtr;

}; // struct CameraDetection_

typedef ::mobiman_msgs::CameraDetection_<std::allocator<void> > CameraDetection;

typedef boost::shared_ptr< ::mobiman_msgs::CameraDetection > CameraDetectionPtr;
typedef boost::shared_ptr< ::mobiman_msgs::CameraDetection const> CameraDetectionConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mobiman_msgs::CameraDetection_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mobiman_msgs::CameraDetection_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::mobiman_msgs::CameraDetection_<ContainerAllocator1> & lhs, const ::mobiman_msgs::CameraDetection_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.source_img == rhs.source_img &&
    lhs.mask == rhs.mask;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::mobiman_msgs::CameraDetection_<ContainerAllocator1> & lhs, const ::mobiman_msgs::CameraDetection_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace mobiman_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::mobiman_msgs::CameraDetection_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mobiman_msgs::CameraDetection_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mobiman_msgs::CameraDetection_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mobiman_msgs::CameraDetection_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mobiman_msgs::CameraDetection_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mobiman_msgs::CameraDetection_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mobiman_msgs::CameraDetection_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a9d0a9437372acb4fb00e7aff83be190";
  }

  static const char* value(const ::mobiman_msgs::CameraDetection_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa9d0a9437372acb4ULL;
  static const uint64_t static_value2 = 0xfb00e7aff83be190ULL;
};

template<class ContainerAllocator>
struct DataType< ::mobiman_msgs::CameraDetection_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mobiman_msgs/CameraDetection";
  }

  static const char* value(const ::mobiman_msgs::CameraDetection_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mobiman_msgs::CameraDetection_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"sensor_msgs/Image source_img\n"
"Mask mask\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: sensor_msgs/Image\n"
"# This message contains an uncompressed image\n"
"# (0, 0) is at top-left corner of image\n"
"#\n"
"\n"
"Header header        # Header timestamp should be acquisition time of image\n"
"                     # Header frame_id should be optical frame of camera\n"
"                     # origin of frame should be optical center of camera\n"
"                     # +x should point to the right in the image\n"
"                     # +y should point down in the image\n"
"                     # +z should point into to plane of the image\n"
"                     # If the frame_id here and the frame_id of the CameraInfo\n"
"                     # message associated with the image conflict\n"
"                     # the behavior is undefined\n"
"\n"
"uint32 height         # image height, that is, number of rows\n"
"uint32 width          # image width, that is, number of columns\n"
"\n"
"# The legal values for encoding are in file src/image_encodings.cpp\n"
"# If you want to standardize a new string format, join\n"
"# ros-users@lists.sourceforge.net and send an email proposing a new encoding.\n"
"\n"
"string encoding       # Encoding of pixels -- channel meaning, ordering, size\n"
"                      # taken from the list of strings in include/sensor_msgs/image_encodings.h\n"
"\n"
"uint8 is_bigendian    # is this data bigendian?\n"
"uint32 step           # Full row length in bytes\n"
"uint8[] data          # actual matrix data, size is (step * rows)\n"
"\n"
"================================================================================\n"
"MSG: mobiman_msgs/Mask\n"
"Header header\n"
"uint16 height\n"
"uint16 width\n"
"uint8[] data # size h * w, array of mask instance\n"
"uint8[] mask_types # size number of instance\n"
"string[] instance_description # size number of instance\n"
;
  }

  static const char* value(const ::mobiman_msgs::CameraDetection_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mobiman_msgs::CameraDetection_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.source_img);
      stream.next(m.mask);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CameraDetection_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mobiman_msgs::CameraDetection_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mobiman_msgs::CameraDetection_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "source_img: ";
    s << std::endl;
    Printer< ::sensor_msgs::Image_<ContainerAllocator> >::stream(s, indent + "  ", v.source_img);
    s << indent << "mask: ";
    s << std::endl;
    Printer< ::mobiman_msgs::Mask_<ContainerAllocator> >::stream(s, indent + "  ", v.mask);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MOBIMAN_MSGS_MESSAGE_CAMERADETECTION_H