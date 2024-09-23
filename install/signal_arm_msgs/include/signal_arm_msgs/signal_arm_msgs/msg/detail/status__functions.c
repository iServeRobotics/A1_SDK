// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from signal_arm_msgs:msg/Status.idl
// generated code does not contain a copyright notice
#include "signal_arm_msgs/msg/detail/status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `motor_errors`
#include "signal_arm_msgs/msg/detail/motor_error__functions.h"

bool
signal_arm_msgs__msg__Status__init(signal_arm_msgs__msg__Status * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__Sequence__init(&msg->name, 0)) {
    signal_arm_msgs__msg__Status__fini(msg);
    return false;
  }
  // motor_errors
  if (!signal_arm_msgs__msg__MotorError__Sequence__init(&msg->motor_errors, 0)) {
    signal_arm_msgs__msg__Status__fini(msg);
    return false;
  }
  return true;
}

void
signal_arm_msgs__msg__Status__fini(signal_arm_msgs__msg__Status * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__Sequence__fini(&msg->name);
  // motor_errors
  signal_arm_msgs__msg__MotorError__Sequence__fini(&msg->motor_errors);
}

bool
signal_arm_msgs__msg__Status__are_equal(const signal_arm_msgs__msg__Status * lhs, const signal_arm_msgs__msg__Status * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // motor_errors
  if (!signal_arm_msgs__msg__MotorError__Sequence__are_equal(
      &(lhs->motor_errors), &(rhs->motor_errors)))
  {
    return false;
  }
  return true;
}

bool
signal_arm_msgs__msg__Status__copy(
  const signal_arm_msgs__msg__Status * input,
  signal_arm_msgs__msg__Status * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // motor_errors
  if (!signal_arm_msgs__msg__MotorError__Sequence__copy(
      &(input->motor_errors), &(output->motor_errors)))
  {
    return false;
  }
  return true;
}

signal_arm_msgs__msg__Status *
signal_arm_msgs__msg__Status__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  signal_arm_msgs__msg__Status * msg = (signal_arm_msgs__msg__Status *)allocator.allocate(sizeof(signal_arm_msgs__msg__Status), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(signal_arm_msgs__msg__Status));
  bool success = signal_arm_msgs__msg__Status__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
signal_arm_msgs__msg__Status__destroy(signal_arm_msgs__msg__Status * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    signal_arm_msgs__msg__Status__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
signal_arm_msgs__msg__Status__Sequence__init(signal_arm_msgs__msg__Status__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  signal_arm_msgs__msg__Status * data = NULL;

  if (size) {
    data = (signal_arm_msgs__msg__Status *)allocator.zero_allocate(size, sizeof(signal_arm_msgs__msg__Status), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = signal_arm_msgs__msg__Status__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        signal_arm_msgs__msg__Status__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
signal_arm_msgs__msg__Status__Sequence__fini(signal_arm_msgs__msg__Status__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      signal_arm_msgs__msg__Status__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

signal_arm_msgs__msg__Status__Sequence *
signal_arm_msgs__msg__Status__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  signal_arm_msgs__msg__Status__Sequence * array = (signal_arm_msgs__msg__Status__Sequence *)allocator.allocate(sizeof(signal_arm_msgs__msg__Status__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = signal_arm_msgs__msg__Status__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
signal_arm_msgs__msg__Status__Sequence__destroy(signal_arm_msgs__msg__Status__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    signal_arm_msgs__msg__Status__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
signal_arm_msgs__msg__Status__Sequence__are_equal(const signal_arm_msgs__msg__Status__Sequence * lhs, const signal_arm_msgs__msg__Status__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!signal_arm_msgs__msg__Status__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
signal_arm_msgs__msg__Status__Sequence__copy(
  const signal_arm_msgs__msg__Status__Sequence * input,
  signal_arm_msgs__msg__Status__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(signal_arm_msgs__msg__Status);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    signal_arm_msgs__msg__Status * data =
      (signal_arm_msgs__msg__Status *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!signal_arm_msgs__msg__Status__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          signal_arm_msgs__msg__Status__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!signal_arm_msgs__msg__Status__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}