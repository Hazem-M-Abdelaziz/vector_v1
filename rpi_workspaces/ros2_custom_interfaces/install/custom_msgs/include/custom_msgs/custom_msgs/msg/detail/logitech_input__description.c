// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from custom_msgs:msg/LogitechInput.idl
// generated code does not contain a copyright notice

#include "custom_msgs/msg/detail/logitech_input__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_custom_msgs
const rosidl_type_hash_t *
custom_msgs__msg__LogitechInput__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xfb, 0x42, 0xa8, 0x03, 0xaa, 0x87, 0x3f, 0x60,
      0xb7, 0x02, 0x9f, 0x91, 0x22, 0xd7, 0x0f, 0x22,
      0x40, 0xbd, 0xce, 0x82, 0xbe, 0x31, 0x27, 0xe0,
      0x45, 0x8d, 0xed, 0x8e, 0xa6, 0x57, 0xbe, 0x54,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char custom_msgs__msg__LogitechInput__TYPE_NAME[] = "custom_msgs/msg/LogitechInput";

// Define type names, field names, and default values
static char custom_msgs__msg__LogitechInput__FIELD_NAME__axes[] = "axes";
static char custom_msgs__msg__LogitechInput__FIELD_NAME__buttons[] = "buttons";

static rosidl_runtime_c__type_description__Field custom_msgs__msg__LogitechInput__FIELDS[] = {
  {
    {custom_msgs__msg__LogitechInput__FIELD_NAME__axes, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_ARRAY,
      6,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {custom_msgs__msg__LogitechInput__FIELD_NAME__buttons, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN_ARRAY,
      18,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
custom_msgs__msg__LogitechInput__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {custom_msgs__msg__LogitechInput__TYPE_NAME, 29, 29},
      {custom_msgs__msg__LogitechInput__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#This is a custom ROS2 message to be used in the ros2 subnetwork, \n"
  "#it is used to send logitech input data, \n"
  "#and it consists of 6-Axes and 18-Buttons\n"
  "float64[6] axes\n"
  "bool[18] buttons";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
custom_msgs__msg__LogitechInput__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {custom_msgs__msg__LogitechInput__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 184, 184},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
custom_msgs__msg__LogitechInput__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *custom_msgs__msg__LogitechInput__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
