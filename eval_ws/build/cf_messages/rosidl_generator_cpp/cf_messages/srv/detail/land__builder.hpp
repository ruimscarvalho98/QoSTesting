// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cf_messages:srv/Land.idl
// generated code does not contain a copyright notice

#ifndef CF_MESSAGES__SRV__DETAIL__LAND__BUILDER_HPP_
#define CF_MESSAGES__SRV__DETAIL__LAND__BUILDER_HPP_

#include "cf_messages/srv/detail/land__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace cf_messages
{

namespace srv
{

namespace builder
{

class Init_Land_Request_duration
{
public:
  explicit Init_Land_Request_duration(::cf_messages::srv::Land_Request & msg)
  : msg_(msg)
  {}
  ::cf_messages::srv::Land_Request duration(::cf_messages::srv::Land_Request::_duration_type arg)
  {
    msg_.duration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cf_messages::srv::Land_Request msg_;
};

class Init_Land_Request_height
{
public:
  Init_Land_Request_height()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Land_Request_duration height(::cf_messages::srv::Land_Request::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_Land_Request_duration(msg_);
  }

private:
  ::cf_messages::srv::Land_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::cf_messages::srv::Land_Request>()
{
  return cf_messages::srv::builder::Init_Land_Request_height();
}

}  // namespace cf_messages


namespace cf_messages
{

namespace srv
{

namespace builder
{

class Init_Land_Response_ret
{
public:
  Init_Land_Response_ret()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::cf_messages::srv::Land_Response ret(::cf_messages::srv::Land_Response::_ret_type arg)
  {
    msg_.ret = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cf_messages::srv::Land_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::cf_messages::srv::Land_Response>()
{
  return cf_messages::srv::builder::Init_Land_Response_ret();
}

}  // namespace cf_messages

#endif  // CF_MESSAGES__SRV__DETAIL__LAND__BUILDER_HPP_
