// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mobiman_msgs:srv/IKService.idl
// generated code does not contain a copyright notice

#ifndef MOBIMAN_MSGS__SRV__DETAIL__IK_SERVICE__STRUCT_HPP_
#define MOBIMAN_MSGS__SRV__DETAIL__IK_SERVICE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mobiman_msgs__srv__IKService_Request __attribute__((deprecated))
#else
# define DEPRECATED__mobiman_msgs__srv__IKService_Request __declspec(deprecated)
#endif

namespace mobiman_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct IKService_Request_
{
  using Type = IKService_Request_<ContainerAllocator>;

  explicit IKService_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_init)
  {
    (void)_init;
  }

  explicit IKService_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;

  // setters for named parameter idiom
  Type & set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mobiman_msgs::srv::IKService_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const mobiman_msgs::srv::IKService_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mobiman_msgs::srv::IKService_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mobiman_msgs::srv::IKService_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mobiman_msgs::srv::IKService_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mobiman_msgs::srv::IKService_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mobiman_msgs::srv::IKService_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mobiman_msgs::srv::IKService_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mobiman_msgs::srv::IKService_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mobiman_msgs::srv::IKService_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mobiman_msgs__srv__IKService_Request
    std::shared_ptr<mobiman_msgs::srv::IKService_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mobiman_msgs__srv__IKService_Request
    std::shared_ptr<mobiman_msgs::srv::IKService_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IKService_Request_ & other) const
  {
    if (this->pose != other.pose) {
      return false;
    }
    return true;
  }
  bool operator!=(const IKService_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IKService_Request_

// alias to use template instance with default allocator
using IKService_Request =
  mobiman_msgs::srv::IKService_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mobiman_msgs


// Include directives for member types
// Member 'joint_states'
#include "sensor_msgs/msg/detail/joint_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mobiman_msgs__srv__IKService_Response __attribute__((deprecated))
#else
# define DEPRECATED__mobiman_msgs__srv__IKService_Response __declspec(deprecated)
#endif

namespace mobiman_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct IKService_Response_
{
  using Type = IKService_Response_<ContainerAllocator>;

  explicit IKService_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : joint_states(_init)
  {
    (void)_init;
  }

  explicit IKService_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : joint_states(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _joint_states_type =
    sensor_msgs::msg::JointState_<ContainerAllocator>;
  _joint_states_type joint_states;

  // setters for named parameter idiom
  Type & set__joint_states(
    const sensor_msgs::msg::JointState_<ContainerAllocator> & _arg)
  {
    this->joint_states = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mobiman_msgs::srv::IKService_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const mobiman_msgs::srv::IKService_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mobiman_msgs::srv::IKService_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mobiman_msgs::srv::IKService_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mobiman_msgs::srv::IKService_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mobiman_msgs::srv::IKService_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mobiman_msgs::srv::IKService_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mobiman_msgs::srv::IKService_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mobiman_msgs::srv::IKService_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mobiman_msgs::srv::IKService_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mobiman_msgs__srv__IKService_Response
    std::shared_ptr<mobiman_msgs::srv::IKService_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mobiman_msgs__srv__IKService_Response
    std::shared_ptr<mobiman_msgs::srv::IKService_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IKService_Response_ & other) const
  {
    if (this->joint_states != other.joint_states) {
      return false;
    }
    return true;
  }
  bool operator!=(const IKService_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IKService_Response_

// alias to use template instance with default allocator
using IKService_Response =
  mobiman_msgs::srv::IKService_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mobiman_msgs

namespace mobiman_msgs
{

namespace srv
{

struct IKService
{
  using Request = mobiman_msgs::srv::IKService_Request;
  using Response = mobiman_msgs::srv::IKService_Response;
};

}  // namespace srv

}  // namespace mobiman_msgs

#endif  // MOBIMAN_MSGS__SRV__DETAIL__IK_SERVICE__STRUCT_HPP_