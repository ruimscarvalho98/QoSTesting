// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cf_messages:msg/AirQuality.idl
// generated code does not contain a copyright notice

#ifndef CF_MESSAGES__MSG__DETAIL__AIR_QUALITY__STRUCT_HPP_
#define CF_MESSAGES__MSG__DETAIL__AIR_QUALITY__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'p'
#include "geometry_msgs/msg/detail/point32__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__cf_messages__msg__AirQuality __attribute__((deprecated))
#else
# define DEPRECATED__cf_messages__msg__AirQuality __declspec(deprecated)
#endif

namespace cf_messages
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AirQuality_
{
  using Type = AirQuality_<ContainerAllocator>;

  explicit AirQuality_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : p(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->eco2 = 0.0f;
      this->tvoc = 0.0f;
    }
  }

  explicit AirQuality_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : p(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->eco2 = 0.0f;
      this->tvoc = 0.0f;
    }
  }

  // field types and members
  using _p_type =
    geometry_msgs::msg::Point32_<ContainerAllocator>;
  _p_type p;
  using _eco2_type =
    float;
  _eco2_type eco2;
  using _tvoc_type =
    float;
  _tvoc_type tvoc;

  // setters for named parameter idiom
  Type & set__p(
    const geometry_msgs::msg::Point32_<ContainerAllocator> & _arg)
  {
    this->p = _arg;
    return *this;
  }
  Type & set__eco2(
    const float & _arg)
  {
    this->eco2 = _arg;
    return *this;
  }
  Type & set__tvoc(
    const float & _arg)
  {
    this->tvoc = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cf_messages::msg::AirQuality_<ContainerAllocator> *;
  using ConstRawPtr =
    const cf_messages::msg::AirQuality_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cf_messages::msg::AirQuality_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cf_messages::msg::AirQuality_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cf_messages::msg::AirQuality_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cf_messages::msg::AirQuality_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cf_messages::msg::AirQuality_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cf_messages::msg::AirQuality_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cf_messages::msg::AirQuality_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cf_messages::msg::AirQuality_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cf_messages__msg__AirQuality
    std::shared_ptr<cf_messages::msg::AirQuality_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cf_messages__msg__AirQuality
    std::shared_ptr<cf_messages::msg::AirQuality_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AirQuality_ & other) const
  {
    if (this->p != other.p) {
      return false;
    }
    if (this->eco2 != other.eco2) {
      return false;
    }
    if (this->tvoc != other.tvoc) {
      return false;
    }
    return true;
  }
  bool operator!=(const AirQuality_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AirQuality_

// alias to use template instance with default allocator
using AirQuality =
  cf_messages::msg::AirQuality_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace cf_messages

#endif  // CF_MESSAGES__MSG__DETAIL__AIR_QUALITY__STRUCT_HPP_
