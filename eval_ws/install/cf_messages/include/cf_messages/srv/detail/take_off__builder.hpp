// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cf_messages:srv/TakeOff.idl
// generated code does not contain a copyright notice

#ifndef CF_MESSAGES__SRV__DETAIL__TAKE_OFF__BUILDER_HPP_
#define CF_MESSAGES__SRV__DETAIL__TAKE_OFF__BUILDER_HPP_

#include "cf_messages/srv/detail/take_off__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace cf_messages
{

namespace srv
{

namespace builder
{

class Init_TakeOff_Request_duration
{
public:
  explicit Init_TakeOff_Request_duration(::cf_messages::srv::TakeOff_Request & msg)
  : msg_(msg)
  {}
  ::cf_messages::srv::TakeOff_Request duration(::cf_messages::srv::TakeOff_Request::_duration_type arg)
  {
    msg_.duration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cf_messages::srv::TakeOff_Request msg_;
};

class Init_TakeOff_Request_height
{
public:
  Init_TakeOff_Request_height()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TakeOff_Request_duration height(::cf_messages::srv::TakeOff_Request::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_TakeOff_Request_duration(msg_);
  }

private:
  ::cf_messages::srv::TakeOff_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::cf_messages::srv::TakeOff_Request>()
{
  return cf_messages::srv::builder::Init_TakeOff_Request_height();
}

}  // namespace cf_messages


namespace cf_messages
{

namespace srv
{

namespace builder
{

class Init_TakeOff_Response_ret
{
public:
  Init_TakeOff_Response_ret()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::cf_messages::srv::TakeOff_Response ret(::cf_messages::srv::TakeOff_Response::_ret_type arg)
  {
    msg_.ret = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cf_messages::srv::TakeOff_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::cf_messages::srv::TakeOff_Response>()
{
  return cf_messages::srv::builder::Init_TakeOff_Response_ret();
}

}  // namespace cf_messages

#endif  // CF_MESSAGES__SRV__DETAIL__TAKE_OFF__BUILDER_HPP_
