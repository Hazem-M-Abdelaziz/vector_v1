// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from custom_msgs:msg/LogitechInput.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "custom_msgs/msg/detail/logitech_input__functions.h"
#include "custom_msgs/msg/detail/logitech_input__struct.hpp"
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

void LogitechInput_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) custom_msgs::msg::LogitechInput(_init);
}

void LogitechInput_fini_function(void * message_memory)
{
  auto typed_message = static_cast<custom_msgs::msg::LogitechInput *>(message_memory);
  typed_message->~LogitechInput();
}

size_t size_function__LogitechInput__axes(const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * get_const_function__LogitechInput__axes(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 6> *>(untyped_member);
  return &member[index];
}

void * get_function__LogitechInput__axes(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 6> *>(untyped_member);
  return &member[index];
}

void fetch_function__LogitechInput__axes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__LogitechInput__axes(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__LogitechInput__axes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__LogitechInput__axes(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__LogitechInput__buttons(const void * untyped_member)
{
  (void)untyped_member;
  return 18;
}

const void * get_const_function__LogitechInput__buttons(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<bool, 18> *>(untyped_member);
  return &member[index];
}

void * get_function__LogitechInput__buttons(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<bool, 18> *>(untyped_member);
  return &member[index];
}

void fetch_function__LogitechInput__buttons(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bool *>(
    get_const_function__LogitechInput__buttons(untyped_member, index));
  auto & value = *reinterpret_cast<bool *>(untyped_value);
  value = item;
}

void assign_function__LogitechInput__buttons(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bool *>(
    get_function__LogitechInput__buttons(untyped_member, index));
  const auto & value = *reinterpret_cast<const bool *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember LogitechInput_message_member_array[2] = {
  {
    "axes",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(custom_msgs::msg::LogitechInput, axes),  // bytes offset in struct
    nullptr,  // default value
    size_function__LogitechInput__axes,  // size() function pointer
    get_const_function__LogitechInput__axes,  // get_const(index) function pointer
    get_function__LogitechInput__axes,  // get(index) function pointer
    fetch_function__LogitechInput__axes,  // fetch(index, &value) function pointer
    assign_function__LogitechInput__axes,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "buttons",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    18,  // array size
    false,  // is upper bound
    offsetof(custom_msgs::msg::LogitechInput, buttons),  // bytes offset in struct
    nullptr,  // default value
    size_function__LogitechInput__buttons,  // size() function pointer
    get_const_function__LogitechInput__buttons,  // get_const(index) function pointer
    get_function__LogitechInput__buttons,  // get(index) function pointer
    fetch_function__LogitechInput__buttons,  // fetch(index, &value) function pointer
    assign_function__LogitechInput__buttons,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers LogitechInput_message_members = {
  "custom_msgs::msg",  // message namespace
  "LogitechInput",  // message name
  2,  // number of fields
  sizeof(custom_msgs::msg::LogitechInput),
  false,  // has_any_key_member_
  LogitechInput_message_member_array,  // message members
  LogitechInput_init_function,  // function to initialize message memory (memory has to be allocated)
  LogitechInput_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t LogitechInput_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &LogitechInput_message_members,
  get_message_typesupport_handle_function,
  &custom_msgs__msg__LogitechInput__get_type_hash,
  &custom_msgs__msg__LogitechInput__get_type_description,
  &custom_msgs__msg__LogitechInput__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace custom_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<custom_msgs::msg::LogitechInput>()
{
  return &::custom_msgs::msg::rosidl_typesupport_introspection_cpp::LogitechInput_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, custom_msgs, msg, LogitechInput)() {
  return &::custom_msgs::msg::rosidl_typesupport_introspection_cpp::LogitechInput_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
