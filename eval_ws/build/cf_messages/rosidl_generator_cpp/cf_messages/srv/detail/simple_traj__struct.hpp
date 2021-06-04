// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cf_messages:srv/SimpleTraj.idl
// generated code does not contain a copyright notice

#ifndef CF_MESSAGES__SRV__DETAIL__SIMPLE_TRAJ__STRUCT_HPP_
#define CF_MESSAGES__SRV__DETAIL__SIMPLE_TRAJ__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'traj'
#include "cf_messages/msg/detail/waypoint__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__cf_messages__srv__SimpleTraj_Request __attribute__((deprecated))
#else
# define DEPRECATED__cf_messages__srv__SimpleTraj_Request __declspec(deprecated)
#endif

namespace cf_messages
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SimpleTraj_Request_
{
  using Type = SimpleTraj_Request_<ContainerAllocator>;

  explicit SimpleTraj_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->len = 0;
    }
  }

  explicit SimpleTraj_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->len = 0;
    }
  }

  // field types and members
  using _traj_type =
    std::vector<cf_messages::msg::Waypoint_<ContainerAllocator>, typename ContainerAllocator::template rebind<cf_messages::msg::Waypoint_<ContainerAllocator>>::other>;
  _traj_type traj;
  using _duration_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _duration_type duration;
  using _len_type =
    int8_t;
  _len_type len;

  // setters for named parameter idiom
  Type & set__traj(
    const std::vector<cf_messages::msg::Waypoint_<ContainerAllocator>, typename ContainerAllocator::template rebind<cf_messages::msg::Waypoint_<ContainerAllocator>>::other> & _arg)
  {
    this->traj = _arg;
    return *this;
  }
  Type & set__duration(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->duration = _arg;
    return *this;
  }
  Type & set__len(
    const int8_t & _arg)
  {
    this->len = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cf_messages::srv::SimpleTraj_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const cf_messages::srv::SimpleTraj_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cf_messages::srv::SimpleTraj_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cf_messages::srv::SimpleTraj_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cf_messages::srv::SimpleTraj_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cf_messages::srv::SimpleTraj_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cf_messages::srv::SimpleTraj_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cf_messages::srv::SimpleTraj_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cf_messages::srv::SimpleTraj_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cf_messages::srv::SimpleTraj_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cf_messages__srv__SimpleTraj_Request
    std::shared_ptr<cf_messages::srv::SimpleTraj_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cf_messages__srv__SimpleTraj_Request
    std::shared_ptr<cf_messages::srv::SimpleTraj_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SimpleTraj_Request_ & other) const
  {
    if (this->traj != other.traj) {
      return false;
    }
    if (this->duration != other.duration) {
      return false;
    }
    if (this->len != other.len) {
      return false;
    }
    return true;
  }
  bool operator!=(const SimpleTraj_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SimpleTraj_Request_

// alias to use template instance with default allocator
using SimpleTraj_Request =
  cf_messages::srv::SimpleTraj_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace cf_messages


#ifndef _WIN32
# define DEPRECATED__cf_messages__srv__SimpleTraj_Response __attribute__((deprecated))
#else
# define DEPRECATED__cf_messages__srv__SimpleTraj_Response __declspec(deprecated)
#endif

namespace cf_messages
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SimpleTraj_Response_
{
  using Type = SimpleTraj_Response_<ContainerAllocator>;

  explicit SimpleTraj_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ret = 0;
    }
  }

  explicit SimpleTraj_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    cf_messages::srv::SimpleTraj_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const cf_messages::srv::SimpleTraj_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cf_messages::srv::SimpleTraj_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cf_messages::srv::SimpleTraj_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cf_messages::srv::SimpleTraj_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cf_messages::srv::SimpleTraj_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cf_messages::srv::SimpleTraj_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cf_messages::srv::SimpleTraj_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cf_messages::srv::SimpleTraj_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cf_messages::srv::SimpleTraj_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cf_messages__srv__SimpleTraj_Response
    std::shared_ptr<cf_messages::srv::SimpleTraj_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cf_messages__srv__SimpleTraj_Response
    std::shared_ptr<cf_messages::srv::SimpleTraj_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SimpleTraj_Response_ & other) const
  {
    if (this->ret != other.ret) {
      return false;
    }
    return true;
  }
  bool operator!=(const SimpleTraj_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SimpleTraj_Response_

// alias to use template instance with default allocator
using SimpleTraj_Response =
  cf_messages::srv::SimpleTraj_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace cf_messages

namespace cf_messages
{

namespace srv
{

struct SimpleTraj
{
  using Request = cf_messages::srv::SimpleTraj_Request;
  using Response = cf_messages::srv::SimpleTraj_Response;
};

}  // namespace srv

}  // namespace cf_messages

#endif  // CF_MESSAGES__SRV__DETAIL__SIMPLE_TRAJ__STRUCT_HPP_
