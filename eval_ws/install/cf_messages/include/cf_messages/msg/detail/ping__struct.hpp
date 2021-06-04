// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cf_messages:msg/Ping.idl
// generated code does not contain a copyright notice

#ifndef CF_MESSAGES__MSG__DETAIL__PING__STRUCT_HPP_
#define CF_MESSAGES__MSG__DETAIL__PING__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__cf_messages__msg__Ping __attribute__((deprecated))
#else
# define DEPRECATED__cf_messages__msg__Ping __declspec(deprecated)
#endif

namespace cf_messages
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Ping_
{
  using Type = Ping_<ContainerAllocator>;

  explicit Ping_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit Ping_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _data_type =
    std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__data(
    const std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cf_messages::msg::Ping_<ContainerAllocator> *;
  using ConstRawPtr =
    const cf_messages::msg::Ping_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cf_messages::msg::Ping_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cf_messages::msg::Ping_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cf_messages::msg::Ping_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cf_messages::msg::Ping_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cf_messages::msg::Ping_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cf_messages::msg::Ping_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cf_messages::msg::Ping_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cf_messages::msg::Ping_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cf_messages__msg__Ping
    std::shared_ptr<cf_messages::msg::Ping_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cf_messages__msg__Ping
    std::shared_ptr<cf_messages::msg::Ping_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Ping_ & other) const
  {
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const Ping_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Ping_

// alias to use template instance with default allocator
using Ping =
  cf_messages::msg::Ping_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace cf_messages

#endif  // CF_MESSAGES__MSG__DETAIL__PING__STRUCT_HPP_
