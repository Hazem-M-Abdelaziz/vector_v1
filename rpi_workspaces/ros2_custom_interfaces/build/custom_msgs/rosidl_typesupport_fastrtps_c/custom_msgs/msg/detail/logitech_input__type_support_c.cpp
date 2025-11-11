// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from custom_msgs:msg/LogitechInput.idl
// generated code does not contain a copyright notice
#include "custom_msgs/msg/detail/logitech_input__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "custom_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "custom_msgs/msg/detail/logitech_input__struct.h"
#include "custom_msgs/msg/detail/logitech_input__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _LogitechInput__ros_msg_type = custom_msgs__msg__LogitechInput;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msgs
bool cdr_serialize_custom_msgs__msg__LogitechInput(
  const custom_msgs__msg__LogitechInput * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: axes
  {
    size_t size = 6;
    auto array_ptr = ros_message->axes;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: buttons
  {
    size_t size = 18;
    auto array_ptr = ros_message->buttons;
    cdr.serialize_array(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msgs
bool cdr_deserialize_custom_msgs__msg__LogitechInput(
  eprosima::fastcdr::Cdr & cdr,
  custom_msgs__msg__LogitechInput * ros_message)
{
  // Field name: axes
  {
    size_t size = 6;
    auto array_ptr = ros_message->axes;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: buttons
  {
    size_t size = 18;
    auto array_ptr = ros_message->buttons;
    for (size_t i = 0; i < size; ++i) {
      uint8_t tmp;
      cdr >> tmp;
      array_ptr[i] = tmp ? true : false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msgs
size_t get_serialized_size_custom_msgs__msg__LogitechInput(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LogitechInput__ros_msg_type * ros_message = static_cast<const _LogitechInput__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: axes
  {
    size_t array_size = 6;
    auto array_ptr = ros_message->axes;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: buttons
  {
    size_t array_size = 18;
    auto array_ptr = ros_message->buttons;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msgs
size_t max_serialized_size_custom_msgs__msg__LogitechInput(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: axes
  {
    size_t array_size = 6;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: buttons
  {
    size_t array_size = 18;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = custom_msgs__msg__LogitechInput;
    is_plain =
      (
      offsetof(DataType, buttons) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msgs
bool cdr_serialize_key_custom_msgs__msg__LogitechInput(
  const custom_msgs__msg__LogitechInput * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: axes
  {
    size_t size = 6;
    auto array_ptr = ros_message->axes;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: buttons
  {
    size_t size = 18;
    auto array_ptr = ros_message->buttons;
    cdr.serialize_array(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msgs
size_t get_serialized_size_key_custom_msgs__msg__LogitechInput(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LogitechInput__ros_msg_type * ros_message = static_cast<const _LogitechInput__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: axes
  {
    size_t array_size = 6;
    auto array_ptr = ros_message->axes;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: buttons
  {
    size_t array_size = 18;
    auto array_ptr = ros_message->buttons;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msgs
size_t max_serialized_size_key_custom_msgs__msg__LogitechInput(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: axes
  {
    size_t array_size = 6;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: buttons
  {
    size_t array_size = 18;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = custom_msgs__msg__LogitechInput;
    is_plain =
      (
      offsetof(DataType, buttons) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _LogitechInput__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const custom_msgs__msg__LogitechInput * ros_message = static_cast<const custom_msgs__msg__LogitechInput *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_custom_msgs__msg__LogitechInput(ros_message, cdr);
}

static bool _LogitechInput__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  custom_msgs__msg__LogitechInput * ros_message = static_cast<custom_msgs__msg__LogitechInput *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_custom_msgs__msg__LogitechInput(cdr, ros_message);
}

static uint32_t _LogitechInput__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_custom_msgs__msg__LogitechInput(
      untyped_ros_message, 0));
}

static size_t _LogitechInput__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_custom_msgs__msg__LogitechInput(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_LogitechInput = {
  "custom_msgs::msg",
  "LogitechInput",
  _LogitechInput__cdr_serialize,
  _LogitechInput__cdr_deserialize,
  _LogitechInput__get_serialized_size,
  _LogitechInput__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _LogitechInput__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_LogitechInput,
  get_message_typesupport_handle_function,
  &custom_msgs__msg__LogitechInput__get_type_hash,
  &custom_msgs__msg__LogitechInput__get_type_description,
  &custom_msgs__msg__LogitechInput__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_msgs, msg, LogitechInput)() {
  return &_LogitechInput__type_support;
}

#if defined(__cplusplus)
}
#endif
