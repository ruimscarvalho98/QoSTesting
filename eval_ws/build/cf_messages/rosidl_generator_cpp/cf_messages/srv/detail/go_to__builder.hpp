// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cf_messages:srv/GoTo.idl
// generated code does not contain a copyright notice

#ifndef CF_MESSAGES__SRV__DETAIL__GO_TO__BUILDER_HPP_
#define CF_MESSAGES__SRV__DETAIL__GO_TO__BUILDER_HPP_

#include "cf_messages/srv/detail/go_to__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace cf_messages
{

namespace srv
{

namespace builder
{

class Init_GoTo_Request_duration
{
public:
  explicit Init_GoTo_Request_duration(::cf_messages::srv::GoTo_Request & msg)
  : msg_(msg)
  {}
  ::cf_messages::srv::GoTo_Request duration(::cf_messages::srv::GoTo_Request::_duration_type arg)
  {
    msg_.duration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cf_messages::srv::GoTo_Request msg_;
};

class Init_GoTo_Request_yaw
{
public:
  explicit Init_GoTo_Request_yaw(::cf_messages::srv::GoTo_Request & msg)
  : msg_(msg)
  {}
  Init_GoTo_Request_duration yaw(::cf_messages::srv::GoTo_Request::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_GoTo_Request_duration(msg_);
  }

private:
  ::cf_messages::srv::GoTo_Request msg_;
};

class Init_GoTo_Request_z
{
public:
  explicit Init_GoTo_Request_z(::cf_messages::srv::GoTo_Request & msg)
  : msg_(msg)
  {}
  Init_GoTo_Request_yaw z(::cf_messages::srv::GoTo_Request::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_GoTo_Request_yaw(msg_);
  }

private:
  ::cf_messages::srv::GoTo_Request msg_;
};

class Init_GoTo_Request_y
{
public:
  explicit Init_GoTo_Request_y(::cf_messages::srv::GoTo_Request & msg)
  : msg_(msg)
  {}
  Init_GoTo_Request_z y(::cf_messages::srv::GoTo_Request::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_GoTo_Request_z(msg_);
  }

private:
  ::cf_messages::srv::GoTo_Request msg_;
};

class Init_GoTo_Request_x
{
public:
  Init_GoTo_Request_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GoTo_Request_y x(::cf_messages::srv::GoTo_Request::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_GoTo_Request_y(msg_);
  }

private:
  ::cf_messages::srv::GoTo_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::cf_messages::srv::GoTo_Request>()
{
  return cf_messages::srv::builder::Init_GoTo_Request_x();
}

}  // namespace cf_messages


namespace cf_messages
{

namespace srv
{

namespace builder
{

class Init_GoTo_Response_ret
{
public:
  Init_GoTo_Response_ret()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::cf_messages::srv::GoTo_Response ret(::cf_messages::srv::GoTo_Response::_ret_type arg)
  {
    msg_.ret = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cf_messages::srv::GoTo_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::cf_messages::srv::GoTo_Response>()
{
  return cf_messages::srv::builder::Init_GoTo_Response_ret();
}

}  // namespace cf_messages

#endif  // CF_MESSAGES__SRV__DETAIL__GO_TO__BUILDER_HPP_
