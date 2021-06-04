// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cf_messages:msg/WeatherData.idl
// generated code does not contain a copyright notice

#ifndef CF_MESSAGES__MSG__DETAIL__WEATHER_DATA__STRUCT_HPP_
#define CF_MESSAGES__MSG__DETAIL__WEATHER_DATA__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__cf_messages__msg__WeatherData __attribute__((deprecated))
#else
# define DEPRECATED__cf_messages__msg__WeatherData __declspec(deprecated)
#endif

namespace cf_messages
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WeatherData_
{
  using Type = WeatherData_<ContainerAllocator>;

  explicit WeatherData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->temperature = 0.0f;
      this->rh = 0.0f;
    }
  }

  explicit WeatherData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->temperature = 0.0f;
      this->rh = 0.0f;
    }
  }

  // field types and members
  using _temperature_type =
    float;
  _temperature_type temperature;
  using _rh_type =
    float;
  _rh_type rh;

  // setters for named parameter idiom
  Type & set__temperature(
    const float & _arg)
  {
    this->temperature = _arg;
    return *this;
  }
  Type & set__rh(
    const float & _arg)
  {
    this->rh = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cf_messages::msg::WeatherData_<ContainerAllocator> *;
  using ConstRawPtr =
    const cf_messages::msg::WeatherData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cf_messages::msg::WeatherData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cf_messages::msg::WeatherData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cf_messages::msg::WeatherData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cf_messages::msg::WeatherData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cf_messages::msg::WeatherData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cf_messages::msg::WeatherData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cf_messages::msg::WeatherData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cf_messages::msg::WeatherData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cf_messages__msg__WeatherData
    std::shared_ptr<cf_messages::msg::WeatherData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cf_messages__msg__WeatherData
    std::shared_ptr<cf_messages::msg::WeatherData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WeatherData_ & other) const
  {
    if (this->temperature != other.temperature) {
      return false;
    }
    if (this->rh != other.rh) {
      return false;
    }
    return true;
  }
  bool operator!=(const WeatherData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WeatherData_

// alias to use template instance with default allocator
using WeatherData =
  cf_messages::msg::WeatherData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace cf_messages

#endif  // CF_MESSAGES__MSG__DETAIL__WEATHER_DATA__STRUCT_HPP_
