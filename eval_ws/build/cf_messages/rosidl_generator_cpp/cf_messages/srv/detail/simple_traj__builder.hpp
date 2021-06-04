// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cf_messages:srv/SimpleTraj.idl
// generated code does not contain a copyright notice

#ifndef CF_MESSAGES__SRV__DETAIL__SIMPLE_TRAJ__BUILDER_HPP_
#define CF_MESSAGES__SRV__DETAIL__SIMPLE_TRAJ__BUILDER_HPP_

#include "cf_messages/srv/detail/simple_traj__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace cf_messages
{

namespace srv
{

namespace builder
{

class Init_SimpleTraj_Request_len
{
public:
  explicit Init_SimpleTraj_Request_len(::cf_messages::srv::SimpleTraj_Request & msg)
  : msg_(msg)
  {}
  ::cf_messages::srv::SimpleTraj_Request len(::cf_messages::srv::SimpleTraj_Request::_len_type arg)
  {
    msg_.len = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cf_messages::srv::SimpleTraj_Request msg_;
};

class Init_SimpleTraj_Request_duration
{
public:
  explicit Init_SimpleTraj_Request_duration(::cf_messages::srv::SimpleTraj_Request & msg)
  : msg_(msg)
  {}
  Init_SimpleTraj_Request_len duration(::cf_messages::srv::SimpleTraj_Request::_duration_type arg)
  {
    msg_.duration = std::move(arg);
    return Init_SimpleTraj_Request_len(msg_);
  }

private:
  ::cf_messages::srv::SimpleTraj_Request msg_;
};

class Init_SimpleTraj_Request_traj
{
public:
  Init_SimpleTraj_Request_traj()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SimpleTraj_Request_duration traj(::cf_messages::srv::SimpleTraj_Request::_traj_type arg)
  {
    msg_.traj = std::move(arg);
    return Init_SimpleTraj_Request_duration(msg_);
  }

private:
  ::cf_messages::srv::SimpleTraj_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::cf_messages::srv::SimpleTraj_Request>()
{
  return cf_messages::srv::builder::Init_SimpleTraj_Request_traj();
}

}  // namespace cf_messages


namespace cf_messages
{

namespace srv
{

namespace builder
{

class Init_SimpleTraj_Response_ret
{
public:
  Init_SimpleTraj_Response_ret()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::cf_messages::srv::SimpleTraj_Response ret(::cf_messages::srv::SimpleTraj_Response::_ret_type arg)
  {
    msg_.ret = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cf_messages::srv::SimpleTraj_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::cf_messages::srv::SimpleTraj_Response>()
{
  return cf_messages::srv::builder::Init_SimpleTraj_Response_ret();
}

}  // namespace cf_messages

#endif  // CF_MESSAGES__SRV__DETAIL__SIMPLE_TRAJ__BUILDER_HPP_
