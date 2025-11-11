// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msgs:msg/ControllerInput.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "custom_msgs/msg/controller_input.h"


#ifndef CUSTOM_MSGS__MSG__DETAIL__CONTROLLER_INPUT__STRUCT_H_
#define CUSTOM_MSGS__MSG__DETAIL__CONTROLLER_INPUT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/ControllerInput in the package custom_msgs.
typedef struct custom_msgs__msg__ControllerInput
{
  float axes[8];
  int32_t buttons[13];
} custom_msgs__msg__ControllerInput;

// Struct for a sequence of custom_msgs__msg__ControllerInput.
typedef struct custom_msgs__msg__ControllerInput__Sequence
{
  custom_msgs__msg__ControllerInput * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs__msg__ControllerInput__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS__MSG__DETAIL__CONTROLLER_INPUT__STRUCT_H_
