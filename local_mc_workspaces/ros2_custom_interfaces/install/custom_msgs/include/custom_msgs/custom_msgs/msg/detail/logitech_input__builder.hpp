// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/LogitechInput.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "custom_msgs/msg/logitech_input.hpp"


#ifndef CUSTOM_MSGS__MSG__DETAIL__LOGITECH_INPUT__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__LOGITECH_INPUT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_msgs/msg/detail/logitech_input__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_LogitechInput_buttons
{
public:
  explicit Init_LogitechInput_buttons(::custom_msgs::msg::LogitechInput & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::LogitechInput buttons(::custom_msgs::msg::LogitechInput::_buttons_type arg)
  {
    msg_.buttons = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::LogitechInput msg_;
};

class Init_LogitechInput_axes
{
public:
  Init_LogitechInput_axes()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LogitechInput_buttons axes(::custom_msgs::msg::LogitechInput::_axes_type arg)
  {
    msg_.axes = std::move(arg);
    return Init_LogitechInput_buttons(msg_);
  }

private:
  ::custom_msgs::msg::LogitechInput msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::LogitechInput>()
{
  return custom_msgs::msg::builder::Init_LogitechInput_axes();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__LOGITECH_INPUT__BUILDER_HPP_
