// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from custom_msgs:msg/ControllerInput.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "custom_msgs/msg/detail/controller_input__functions.h"
#include "custom_msgs/msg/detail/controller_input__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace custom_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ControllerInput_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) custom_msgs::msg::ControllerInput(_init);
}

void ControllerInput_fini_function(void * message_memory)
{
  auto typed_message = static_cast<custom_msgs::msg::ControllerInput *>(message_memory);
  typed_message->~ControllerInput();
}

size_t size_function__ControllerInput__axes(const void * untyped_member)
{
  (void)untyped_member;
  return 8;
}

const void * get_const_function__ControllerInput__axes(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 8> *>(untyped_member);
  return &member[index];
}

void * get_function__ControllerInput__axes(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 8> *>(untyped_member);
  return &member[index];
}

void fetch_function__ControllerInput__axes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__ControllerInput__axes(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__ControllerInput__axes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__ControllerInput__axes(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__ControllerInput__buttons(const void * untyped_member)
{
  (void)untyped_member;
  return 13;
}

const void * get_const_function__ControllerInput__buttons(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int32_t, 13> *>(untyped_member);
  return &member[index];
}

void * get_function__ControllerInput__buttons(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int32_t, 13> *>(untyped_member);
  return &member[index];
}

void fetch_function__ControllerInput__buttons(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__ControllerInput__buttons(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__ControllerInput__buttons(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__ControllerInput__buttons(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ControllerInput_message_member_array[2] = {
  {
    "axes",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    8,  // array size
    false,  // is upper bound
    offsetof(custom_msgs::msg::ControllerInput, axes),  // bytes offset in struct
    nullptr,  // default value
    size_function__ControllerInput__axes,  // size() function pointer
    get_const_function__ControllerInput__axes,  // get_const(index) function pointer
    get_function__ControllerInput__axes,  // get(index) function pointer
    fetch_function__ControllerInput__axes,  // fetch(index, &value) function pointer
    assign_function__ControllerInput__axes,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "buttons",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    13,  // array size
    false,  // is upper bound
    offsetof(custom_msgs::msg::ControllerInput, buttons),  // bytes offset in struct
    nullptr,  // default value
    size_function__ControllerInput__buttons,  // size() function pointer
    get_const_function__ControllerInput__buttons,  // get_const(index) function pointer
    get_function__ControllerInput__buttons,  // get(index) function pointer
    fetch_function__ControllerInput__buttons,  // fetch(index, &value) function pointer
    assign_function__ControllerInput__buttons,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ControllerInput_message_members = {
  "custom_msgs::msg",  // message namespace
  "ControllerInput",  // message name
  2,  // number of fields
  sizeof(custom_msgs::msg::ControllerInput),
  false,  // has_any_key_member_
  ControllerInput_message_member_array,  // message members
  ControllerInput_init_function,  // function to initialize message memory (memory has to be allocated)
  ControllerInput_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ControllerInput_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ControllerInput_message_members,
  get_message_typesupport_handle_function,
  &custom_msgs__msg__ControllerInput__get_type_hash,
  &custom_msgs__msg__ControllerInput__get_type_description,
  &custom_msgs__msg__ControllerInput__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace custom_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<custom_msgs::msg::ControllerInput>()
{
  return &::custom_msgs::msg::rosidl_typesupport_introspection_cpp::ControllerInput_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, custom_msgs, msg, ControllerInput)() {
  return &::custom_msgs::msg::rosidl_typesupport_introspection_cpp::ControllerInput_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
