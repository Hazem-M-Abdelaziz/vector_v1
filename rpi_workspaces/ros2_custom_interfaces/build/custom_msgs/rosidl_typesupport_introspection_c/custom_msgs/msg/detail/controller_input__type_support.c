// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from custom_msgs:msg/ControllerInput.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "custom_msgs/msg/detail/controller_input__rosidl_typesupport_introspection_c.h"
#include "custom_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "custom_msgs/msg/detail/controller_input__functions.h"
#include "custom_msgs/msg/detail/controller_input__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void custom_msgs__msg__ControllerInput__rosidl_typesupport_introspection_c__ControllerInput_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  custom_msgs__msg__ControllerInput__init(message_memory);
}

void custom_msgs__msg__ControllerInput__rosidl_typesupport_introspection_c__ControllerInput_fini_function(void * message_memory)
{
  custom_msgs__msg__ControllerInput__fini(message_memory);
}

size_t custom_msgs__msg__ControllerInput__rosidl_typesupport_introspection_c__size_function__ControllerInput__axes(
  const void * untyped_member)
{
  (void)untyped_member;
  return 8;
}

const void * custom_msgs__msg__ControllerInput__rosidl_typesupport_introspection_c__get_const_function__ControllerInput__axes(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * custom_msgs__msg__ControllerInput__rosidl_typesupport_introspection_c__get_function__ControllerInput__axes(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void custom_msgs__msg__ControllerInput__rosidl_typesupport_introspection_c__fetch_function__ControllerInput__axes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    custom_msgs__msg__ControllerInput__rosidl_typesupport_introspection_c__get_const_function__ControllerInput__axes(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void custom_msgs__msg__ControllerInput__rosidl_typesupport_introspection_c__assign_function__ControllerInput__axes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    custom_msgs__msg__ControllerInput__rosidl_typesupport_introspection_c__get_function__ControllerInput__axes(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t custom_msgs__msg__ControllerInput__rosidl_typesupport_introspection_c__size_function__ControllerInput__buttons(
  const void * untyped_member)
{
  (void)untyped_member;
  return 13;
}

const void * custom_msgs__msg__ControllerInput__rosidl_typesupport_introspection_c__get_const_function__ControllerInput__buttons(
  const void * untyped_member, size_t index)
{
  const int32_t * member =
    (const int32_t *)(untyped_member);
  return &member[index];
}

void * custom_msgs__msg__ControllerInput__rosidl_typesupport_introspection_c__get_function__ControllerInput__buttons(
  void * untyped_member, size_t index)
{
  int32_t * member =
    (int32_t *)(untyped_member);
  return &member[index];
}

void custom_msgs__msg__ControllerInput__rosidl_typesupport_introspection_c__fetch_function__ControllerInput__buttons(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    custom_msgs__msg__ControllerInput__rosidl_typesupport_introspection_c__get_const_function__ControllerInput__buttons(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void custom_msgs__msg__ControllerInput__rosidl_typesupport_introspection_c__assign_function__ControllerInput__buttons(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    custom_msgs__msg__ControllerInput__rosidl_typesupport_introspection_c__get_function__ControllerInput__buttons(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember custom_msgs__msg__ControllerInput__rosidl_typesupport_introspection_c__ControllerInput_message_member_array[2] = {
  {
    "axes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    8,  // array size
    false,  // is upper bound
    offsetof(custom_msgs__msg__ControllerInput, axes),  // bytes offset in struct
    NULL,  // default value
    custom_msgs__msg__ControllerInput__rosidl_typesupport_introspection_c__size_function__ControllerInput__axes,  // size() function pointer
    custom_msgs__msg__ControllerInput__rosidl_typesupport_introspection_c__get_const_function__ControllerInput__axes,  // get_const(index) function pointer
    custom_msgs__msg__ControllerInput__rosidl_typesupport_introspection_c__get_function__ControllerInput__axes,  // get(index) function pointer
    custom_msgs__msg__ControllerInput__rosidl_typesupport_introspection_c__fetch_function__ControllerInput__axes,  // fetch(index, &value) function pointer
    custom_msgs__msg__ControllerInput__rosidl_typesupport_introspection_c__assign_function__ControllerInput__axes,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "buttons",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    13,  // array size
    false,  // is upper bound
    offsetof(custom_msgs__msg__ControllerInput, buttons),  // bytes offset in struct
    NULL,  // default value
    custom_msgs__msg__ControllerInput__rosidl_typesupport_introspection_c__size_function__ControllerInput__buttons,  // size() function pointer
    custom_msgs__msg__ControllerInput__rosidl_typesupport_introspection_c__get_const_function__ControllerInput__buttons,  // get_const(index) function pointer
    custom_msgs__msg__ControllerInput__rosidl_typesupport_introspection_c__get_function__ControllerInput__buttons,  // get(index) function pointer
    custom_msgs__msg__ControllerInput__rosidl_typesupport_introspection_c__fetch_function__ControllerInput__buttons,  // fetch(index, &value) function pointer
    custom_msgs__msg__ControllerInput__rosidl_typesupport_introspection_c__assign_function__ControllerInput__buttons,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers custom_msgs__msg__ControllerInput__rosidl_typesupport_introspection_c__ControllerInput_message_members = {
  "custom_msgs__msg",  // message namespace
  "ControllerInput",  // message name
  2,  // number of fields
  sizeof(custom_msgs__msg__ControllerInput),
  false,  // has_any_key_member_
  custom_msgs__msg__ControllerInput__rosidl_typesupport_introspection_c__ControllerInput_message_member_array,  // message members
  custom_msgs__msg__ControllerInput__rosidl_typesupport_introspection_c__ControllerInput_init_function,  // function to initialize message memory (memory has to be allocated)
  custom_msgs__msg__ControllerInput__rosidl_typesupport_introspection_c__ControllerInput_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t custom_msgs__msg__ControllerInput__rosidl_typesupport_introspection_c__ControllerInput_message_type_support_handle = {
  0,
  &custom_msgs__msg__ControllerInput__rosidl_typesupport_introspection_c__ControllerInput_message_members,
  get_message_typesupport_handle_function,
  &custom_msgs__msg__ControllerInput__get_type_hash,
  &custom_msgs__msg__ControllerInput__get_type_description,
  &custom_msgs__msg__ControllerInput__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_msgs, msg, ControllerInput)() {
  if (!custom_msgs__msg__ControllerInput__rosidl_typesupport_introspection_c__ControllerInput_message_type_support_handle.typesupport_identifier) {
    custom_msgs__msg__ControllerInput__rosidl_typesupport_introspection_c__ControllerInput_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &custom_msgs__msg__ControllerInput__rosidl_typesupport_introspection_c__ControllerInput_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
