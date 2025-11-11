// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msgs:msg/ControllerInput.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "custom_msgs/msg/controller_input.hpp"


#ifndef CUSTOM_MSGS__MSG__DETAIL__CONTROLLER_INPUT__STRUCT_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__CONTROLLER_INPUT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__custom_msgs__msg__ControllerInput __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__msg__ControllerInput __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ControllerInput_
{
  using Type = ControllerInput_<ContainerAllocator>;

  explicit ControllerInput_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 8>::iterator, float>(this->axes.begin(), this->axes.end(), 0.0f);
      std::fill<typename std::array<int32_t, 13>::iterator, int32_t>(this->buttons.begin(), this->buttons.end(), 0l);
    }
  }

  explicit ControllerInput_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : axes(_alloc),
    buttons(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 8>::iterator, float>(this->axes.begin(), this->axes.end(), 0.0f);
      std::fill<typename std::array<int32_t, 13>::iterator, int32_t>(this->buttons.begin(), this->buttons.end(), 0l);
    }
  }

  // field types and members
  using _axes_type =
    std::array<float, 8>;
  _axes_type axes;
  using _buttons_type =
    std::array<int32_t, 13>;
  _buttons_type buttons;

  // setters for named parameter idiom
  Type & set__axes(
    const std::array<float, 8> & _arg)
  {
    this->axes = _arg;
    return *this;
  }
  Type & set__buttons(
    const std::array<int32_t, 13> & _arg)
  {
    this->buttons = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs::msg::ControllerInput_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::msg::ControllerInput_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::msg::ControllerInput_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::msg::ControllerInput_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::ControllerInput_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::ControllerInput_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::ControllerInput_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::ControllerInput_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::msg::ControllerInput_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::msg::ControllerInput_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__msg__ControllerInput
    std::shared_ptr<custom_msgs::msg::ControllerInput_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__msg__ControllerInput
    std::shared_ptr<custom_msgs::msg::ControllerInput_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ControllerInput_ & other) const
  {
    if (this->axes != other.axes) {
      return false;
    }
    if (this->buttons != other.buttons) {
      return false;
    }
    return true;
  }
  bool operator!=(const ControllerInput_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ControllerInput_

// alias to use template instance with default allocator
using ControllerInput =
  custom_msgs::msg::ControllerInput_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__CONTROLLER_INPUT__STRUCT_HPP_
