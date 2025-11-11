// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from custom_msgs:msg/ControllerInput.idl
// generated code does not contain a copyright notice

#include "custom_msgs/msg/detail/controller_input__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_custom_msgs
const rosidl_type_hash_t *
custom_msgs__msg__ControllerInput__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x96, 0x7a, 0xa9, 0x2f, 0x1d, 0xa6, 0x4a, 0xee,
      0x82, 0xed, 0x08, 0x0d, 0xd6, 0xb1, 0x2a, 0x6c,
      0xa6, 0x57, 0x5d, 0x42, 0x5b, 0xb1, 0x56, 0x5e,
      0x66, 0x2c, 0xe5, 0xc6, 0x18, 0xce, 0x96, 0xac,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char custom_msgs__msg__ControllerInput__TYPE_NAME[] = "custom_msgs/msg/ControllerInput";

// Define type names, field names, and default values
static char custom_msgs__msg__ControllerInput__FIELD_NAME__axes[] = "axes";
static char custom_msgs__msg__ControllerInput__FIELD_NAME__buttons[] = "buttons";

static rosidl_runtime_c__type_description__Field custom_msgs__msg__ControllerInput__FIELDS[] = {
  {
    {custom_msgs__msg__ControllerInput__FIELD_NAME__axes, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      8,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {custom_msgs__msg__ControllerInput__FIELD_NAME__buttons, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32_ARRAY,
      13,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
custom_msgs__msg__ControllerInput__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {custom_msgs__msg__ControllerInput__TYPE_NAME, 31, 31},
      {custom_msgs__msg__ControllerInput__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32[8] axes\n"
  "int32[13] buttons\n"
  "";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
custom_msgs__msg__ControllerInput__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {custom_msgs__msg__ControllerInput__TYPE_NAME, 31, 31},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 35, 35},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
custom_msgs__msg__ControllerInput__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *custom_msgs__msg__ControllerInput__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
