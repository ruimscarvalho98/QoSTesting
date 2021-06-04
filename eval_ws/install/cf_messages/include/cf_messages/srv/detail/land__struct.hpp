// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cf_messages:srv/Land.idl
// generated code does not contain a copyright notice

#ifndef CF_MESSAGES__SRV__DETAIL__LAND__STRUCT_HPP_
#define CF_MESSAGES__SRV__DETAIL__LAND__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__cf_messages__srv__Land_Request __attribute__((deprecated))
#else
# define DEPRECATED__cf_messages__srv__Land_Request __declspec(deprecated)
#endif

namespace cf_messages
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Land_Request_
{
  using Type = Land_Request_<ContainerAllocator>;

  explicit Land_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->height = 0.0f;
      this->duration = 0.0f;
    }
  }

  explicit Land_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->height = 0.0f;
      this->duration = 0.0f;
    }
  }

  // field types and members
  using _height_type =
    float;
  _height_type height;
  using _duration_type =
    float;
  _duration_type duration;

  // setters for named parameter idiom
  Type & set__height(
    const float & _arg)
  {
    this->height = _arg;
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
    cf_messages::srv::Land_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const cf_messages::srv::Land_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cf_messages::srv::Land_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cf_messages::srv::Land_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cf_messages::srv::Land_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cf_messages::srv::Land_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cf_messages::srv::Land_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cf_messages::srv::Land_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cf_messages::srv::Land_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cf_messages::srv::Land_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cf_messages__srv__Land_Request
    std::shared_ptr<cf_messages::srv::Land_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cf_messages__srv__Land_Request
    std::shared_ptr<cf_messages::srv::Land_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Land_Request_ & other) const
  {
    if (this->height != other.height) {
      return false;
    }
    if (this->duration != other.duration) {
      return false;
    }
    return true;
  }
  bool operator!=(const Land_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Land_Request_

// alias to use template instance with default allocator
using Land_Request =
  cf_messages::srv::Land_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace cf_messages


#ifndef _WIN32
# define DEPRECATED__cf_messages__srv__Land_Response __attribute__((deprecated))
#else
# define DEPRECATED__cf_messages__srv__Land_Response __declspec(deprecated)
#endif

namespace cf_messages
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Land_Response_
{
  using Type = Land_Response_<ContainerAllocator>;

  explicit Land_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ret = 0;
    }
  }

  explicit Land_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ret = 0;
    }
  }

  // field types and members
  using _ret_type =
    int8_t;
  _ret_type ret;

  // setters for named parameter idiom
  Type & set__ret(
    const int8_t & _arg)
  {
    this->ret = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cf_messages::srv::Land_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const cf_messages::srv::Land_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cf_messages::srv::Land_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cf_messages::srv::Land_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cf_messages::srv::Land_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cf_messages::srv::Land_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cf_messages::srv::Land_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cf_messages::srv::Land_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cf_messages::srv::Land_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cf_messages::srv::Land_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cf_messages__srv__Land_Response
    std::shared_ptr<cf_messages::srv::Land_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cf_messages__srv__Land_Response
    std::shared_ptr<cf_messages::srv::Land_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Land_Response_ & other) const
  {
    if (this->ret != other.ret) {
      return false;
    }
    return true;
  }
  bool operator!=(const Land_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Land_Response_

// alias to use template instance with default allocator
using Land_Response =
  cf_messages::srv::Land_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace cf_messages

namespace cf_messages
{

namespace srv
{

struct Land
{
  using Request = cf_messages::srv::Land_Request;
  using Response = cf_messages::srv::Land_Response;
};

}  // namespace srv

}  // namespace cf_messages

#endif  // CF_MESSAGES__SRV__DETAIL__LAND__STRUCT_HPP_
