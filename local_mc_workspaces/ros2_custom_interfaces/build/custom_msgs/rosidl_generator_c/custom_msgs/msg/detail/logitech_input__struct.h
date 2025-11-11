// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msgs:msg/LogitechInput.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "custom_msgs/msg/logitech_input.h"


#ifndef CUSTOM_MSGS__MSG__DETAIL__LOGITECH_INPUT__STRUCT_H_
#define CUSTOM_MSGS__MSG__DETAIL__LOGITECH_INPUT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/LogitechInput in the package custom_msgs.
/**
  * This is a custom ROS2 message to be used in the ros2 subnetwork, 
  * it is used to send logitech input data, 
  * and it consists of 6-Axes and 18-Buttons
 */
typedef struct custom_msgs__msg__LogitechInput
{
  double axes[6];
  bool buttons[18];
} custom_msgs__msg__LogitechInput;

// Struct for a sequence of custom_msgs__msg__LogitechInput.
typedef struct custom_msgs__msg__LogitechInput__Sequence
{
  custom_msgs__msg__LogitechInput * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs__msg__LogitechInput__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS__MSG__DETAIL__LOGITECH_INPUT__STRUCT_H_
