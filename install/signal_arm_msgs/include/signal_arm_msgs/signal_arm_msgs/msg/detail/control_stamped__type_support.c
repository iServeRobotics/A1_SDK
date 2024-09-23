// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from signal_arm_msgs:msg/ControlStamped.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "signal_arm_msgs/msg/detail/control_stamped__rosidl_typesupport_introspection_c.h"
#include "signal_arm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "signal_arm_msgs/msg/detail/control_stamped__functions.h"
#include "signal_arm_msgs/msg/detail/control_stamped__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `data`
#include "signal_arm_msgs/msg/control.h"
// Member `data`
#include "signal_arm_msgs/msg/detail/control__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void signal_arm_msgs__msg__ControlStamped__rosidl_typesupport_introspection_c__ControlStamped_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  signal_arm_msgs__msg__ControlStamped__init(message_memory);
}

void signal_arm_msgs__msg__ControlStamped__rosidl_typesupport_introspection_c__ControlStamped_fini_function(void * message_memory)
{
  signal_arm_msgs__msg__ControlStamped__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember signal_arm_msgs__msg__ControlStamped__rosidl_typesupport_introspection_c__ControlStamped_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(signal_arm_msgs__msg__ControlStamped, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(signal_arm_msgs__msg__ControlStamped, data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers signal_arm_msgs__msg__ControlStamped__rosidl_typesupport_introspection_c__ControlStamped_message_members = {
  "signal_arm_msgs__msg",  // message namespace
  "ControlStamped",  // message name
  2,  // number of fields
  sizeof(signal_arm_msgs__msg__ControlStamped),
  signal_arm_msgs__msg__ControlStamped__rosidl_typesupport_introspection_c__ControlStamped_message_member_array,  // message members
  signal_arm_msgs__msg__ControlStamped__rosidl_typesupport_introspection_c__ControlStamped_init_function,  // function to initialize message memory (memory has to be allocated)
  signal_arm_msgs__msg__ControlStamped__rosidl_typesupport_introspection_c__ControlStamped_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t signal_arm_msgs__msg__ControlStamped__rosidl_typesupport_introspection_c__ControlStamped_message_type_support_handle = {
  0,
  &signal_arm_msgs__msg__ControlStamped__rosidl_typesupport_introspection_c__ControlStamped_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_signal_arm_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, signal_arm_msgs, msg, ControlStamped)() {
  signal_arm_msgs__msg__ControlStamped__rosidl_typesupport_introspection_c__ControlStamped_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  signal_arm_msgs__msg__ControlStamped__rosidl_typesupport_introspection_c__ControlStamped_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, signal_arm_msgs, msg, Control)();
  if (!signal_arm_msgs__msg__ControlStamped__rosidl_typesupport_introspection_c__ControlStamped_message_type_support_handle.typesupport_identifier) {
    signal_arm_msgs__msg__ControlStamped__rosidl_typesupport_introspection_c__ControlStamped_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &signal_arm_msgs__msg__ControlStamped__rosidl_typesupport_introspection_c__ControlStamped_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif