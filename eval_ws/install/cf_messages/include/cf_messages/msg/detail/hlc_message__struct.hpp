// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cf_messages:msg/HLCMessage.idl
// generated code does not contain a copyright notice

#ifndef CF_MESSAGES__MSG__DETAIL__HLC_MESSAGE__STRUCT_HPP_
#define CF_MESSAGES__MSG__DETAIL__HLC_MESSAGE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__cf_messages__msg__HLCMessage __attribute__((deprecated))
#else
# define DEPRECATED__cf_messages__msg__HLCMessage __declspec(deprecated)
#endif

namespace cf_messages
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HLCMessage_
{
  using Type = HLCMessage_<ContainerAllocator>;

  explicit HLCMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = 0;
      this->group_mask = 0;
      this->height = 0.0f;
      this->yaw = 0.0f;
      this->use_current_yaw = false;
      this->duration = 0.0f;
    }
  }

  explicit HLCMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = 0;
      this->group_mask = 0;
      this->height = 0.0f;
      this->yaw = 0.0f;
      this->use_current_yaw = false;
      this->duration = 0.0f;
    }
  }

  // field types and members
  using _command_type =
    uint8_t;
  _command_type command;
  using _group_mask_type =
    uint8_t;
  _group_mask_type group_mask;
  using _height_type =
    float;
  _height_type height;
  using _yaw_type =
    float;
  _yaw_type yaw;
  using _use_current_yaw_type =
    bool;
  _use_current_yaw_type use_current_yaw;
  using _duration_type =
    float;
  _duration_type duration;

  // setters for named parameter idiom
  Type & set__command(
    const uint8_t & _arg)
  {
    this->command = _arg;
    return *this;
  }
  Type & set__group_mask(
    const uint8_t & _arg)
  {
    this->group_mask = _arg;
    return *this;
  }
  Type & set__height(
    const float & _arg)
  {
    this->height = _arg;
    return *this;
  }
  Type & set__yaw(
    const float & _arg)
  {
    this->yaw = _arg;
    return *this;
  }
  Type & set__use_current_yaw(
    const bool & _arg)
  {
    this->use_current_yaw = _arg;
    return *this;
  }
  Type & set__duration(
    const float & _arg)
  {
    this->duration = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cf_messages::msg::HLCMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const cf_messages::msg::HLCMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cf_messages::msg::HLCMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cf_messages::msg::HLCMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cf_messages::msg::HLCMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cf_messages::msg::HLCMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cf_messages::msg::HLCMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cf_messages::msg::HLCMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cf_messages::msg::HLCMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cf_messages::msg::HLCMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cf_messages__msg__HLCMessage
    std::shared_ptr<cf_messages::msg::HLCMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cf_messages__msg__HLCMessage
    std::shared_ptr<cf_messages::msg::HLCMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HLCMessage_ & other) const
  {
    if (this->command != other.command) {
      return false;
    }
    if (this->group_mask != other.group_mask) {
      return false;
    }
    if (this->height != other.height) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    if (this->use_current_yaw != other.use_current_yaw) {
      return false;
    }
    if (this->duration != other.duration) {
      return false;
    }
    return true;
  }
  bool operator!=(const HLCMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HLCMessage_

// alias to use template instance with default allocator
using HLCMessage =
  cf_messages::msg::HLCMessage_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace cf_messages

#endif  // CF_MESSAGES__MSG__DETAIL__HLC_MESSAGE__STRUCT_HPP_
