// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cf_messages:srv/Stop.idl
// generated code does not contain a copyright notice

#ifndef CF_MESSAGES__SRV__DETAIL__STOP__BUILDER_HPP_
#define CF_MESSAGES__SRV__DETAIL__STOP__BUILDER_HPP_

#include "cf_messages/srv/detail/stop__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace cf_messages
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::cf_messages::srv::Stop_Request>()
{
  return ::cf_messages::srv::Stop_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace cf_messages


namespace cf_messages
{

namespace srv
{

namespace builder
{

class Init_Stop_Response_ret
{
public:
  Init_Stop_Response_ret()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::cf_messages::srv::Stop_Response ret(::cf_messages::srv::Stop_Response::_ret_type arg)
  {
    msg_.ret = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cf_messages::srv::Stop_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::cf_messages::srv::Stop_Response>()
{
  return cf_messages::srv::builder::Init_Stop_Response_ret();
}

}  // namespace cf_messages

#endif  // CF_MESSAGES__SRV__DETAIL__STOP__BUILDER_HPP_
