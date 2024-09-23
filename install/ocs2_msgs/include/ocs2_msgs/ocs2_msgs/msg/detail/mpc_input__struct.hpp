// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ocs2_msgs:msg/MpcInput.idl
// generated code does not contain a copyright notice

#ifndef OCS2_MSGS__MSG__DETAIL__MPC_INPUT__STRUCT_HPP_
#define OCS2_MSGS__MSG__DETAIL__MPC_INPUT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ocs2_msgs__msg__MpcInput __attribute__((deprecated))
#else
# define DEPRECATED__ocs2_msgs__msg__MpcInput __declspec(deprecated)
#endif

namespace ocs2_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MpcInput_
{
  using Type = MpcInput_<ContainerAllocator>;

  explicit MpcInput_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit MpcInput_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _value_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _value_type value;

  // setters for named parameter idiom
  Type & set__value(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->value = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ocs2_msgs::msg::MpcInput_<ContainerAllocator> *;
  using ConstRawPtr =
    const ocs2_msgs::msg::MpcInput_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ocs2_msgs::msg::MpcInput_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ocs2_msgs::msg::MpcInput_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ocs2_msgs::msg::MpcInput_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ocs2_msgs::msg::MpcInput_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ocs2_msgs::msg::MpcInput_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ocs2_msgs::msg::MpcInput_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ocs2_msgs::msg::MpcInput_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ocs2_msgs::msg::MpcInput_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ocs2_msgs__msg__MpcInput
    std::shared_ptr<ocs2_msgs::msg::MpcInput_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ocs2_msgs__msg__MpcInput
    std::shared_ptr<ocs2_msgs::msg::MpcInput_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MpcInput_ & other) const
  {
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const MpcInput_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MpcInput_

// alias to use template instance with default allocator
using MpcInput =
  ocs2_msgs::msg::MpcInput_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ocs2_msgs

#endif  // OCS2_MSGS__MSG__DETAIL__MPC_INPUT__STRUCT_HPP_