// Generated by gencpp from file ocs2_msgs/resetResponse.msg
// DO NOT EDIT!


#ifndef OCS2_MSGS_MESSAGE_RESETRESPONSE_H
#define OCS2_MSGS_MESSAGE_RESETRESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ocs2_msgs
{
template <class ContainerAllocator>
struct resetResponse_
{
  typedef resetResponse_<ContainerAllocator> Type;

  resetResponse_()
    : done(false)  {
    }
  resetResponse_(const ContainerAllocator& _alloc)
    : done(false)  {
  (void)_alloc;
    }



   typedef uint8_t _done_type;
  _done_type done;





  typedef boost::shared_ptr< ::ocs2_msgs::resetResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ocs2_msgs::resetResponse_<ContainerAllocator> const> ConstPtr;

}; // struct resetResponse_

typedef ::ocs2_msgs::resetResponse_<std::allocator<void> > resetResponse;

typedef boost::shared_ptr< ::ocs2_msgs::resetResponse > resetResponsePtr;
typedef boost::shared_ptr< ::ocs2_msgs::resetResponse const> resetResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ocs2_msgs::resetResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ocs2_msgs::resetResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ocs2_msgs::resetResponse_<ContainerAllocator1> & lhs, const ::ocs2_msgs::resetResponse_<ContainerAllocator2> & rhs)
{
  return lhs.done == rhs.done;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ocs2_msgs::resetResponse_<ContainerAllocator1> & lhs, const ::ocs2_msgs::resetResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ocs2_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::ocs2_msgs::resetResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ocs2_msgs::resetResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ocs2_msgs::resetResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ocs2_msgs::resetResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ocs2_msgs::resetResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ocs2_msgs::resetResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ocs2_msgs::resetResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "89bb254424e4cffedbf494e7b0ddbfea";
  }

  static const char* value(const ::ocs2_msgs::resetResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x89bb254424e4cffeULL;
  static const uint64_t static_value2 = 0xdbf494e7b0ddbfeaULL;
};

template<class ContainerAllocator>
struct DataType< ::ocs2_msgs::resetResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ocs2_msgs/resetResponse";
  }

  static const char* value(const ::ocs2_msgs::resetResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ocs2_msgs::resetResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool                      done\n"
;
  }

  static const char* value(const ::ocs2_msgs::resetResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ocs2_msgs::resetResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.done);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct resetResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ocs2_msgs::resetResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ocs2_msgs::resetResponse_<ContainerAllocator>& v)
  {
    s << indent << "done: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.done);
  }
};

} // namespace message_operations
} // namespace ros

#endif // OCS2_MSGS_MESSAGE_RESETRESPONSE_H