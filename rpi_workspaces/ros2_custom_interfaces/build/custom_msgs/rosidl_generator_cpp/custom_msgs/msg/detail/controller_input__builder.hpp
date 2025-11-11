// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/ControllerInput.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "custom_msgs/msg/controller_input.hpp"


#ifndef CUSTOM_MSGS__MSG__DETAIL__CONTROLLER_INPUT__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__CONTROLLER_INPUT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_msgs/msg/detail/controller_input__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_ControllerInput_buttons
{
public:
  explicit Init_ControllerInput_buttons(::custom_msgs::msg::ControllerInput & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::ControllerInput buttons(::custom_msgs::msg::ControllerInput::_buttons_type arg)
  {
    msg_.buttons = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::ControllerInput msg_;
};

class Init_ControllerInput_axes
{
public:
  Init_ControllerInput_axes()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ControllerInput_buttons axes(::custom_msgs::msg::ControllerInput::_axes_type arg)
  {
    msg_.axes = std::move(arg);
    return Init_ControllerInput_buttons(msg_);
  }

private:
  ::custom_msgs::msg::ControllerInput msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::ControllerInput>()
{
  return custom_msgs::msg::builder::Init_ControllerInput_axes();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__CONTROLLER_INPUT__BUILDER_HPP_
