// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cf_messages:msg/Ping.idl
// generated code does not contain a copyright notice

#ifndef CF_MESSAGES__MSG__DETAIL__PING__BUILDER_HPP_
#define CF_MESSAGES__MSG__DETAIL__PING__BUILDER_HPP_

#include "cf_messages/msg/detail/ping__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace cf_messages
{

namespace msg
{

namespace builder
{

class Init_Ping_data
{
public:
  Init_Ping_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::cf_messages::msg::Ping data(::cf_messages::msg::Ping::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cf_messages::msg::Ping msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cf_messages::msg::Ping>()
{
  return cf_messages::msg::builder::Init_Ping_data();
}

}  // namespace cf_messages

#endif  // CF_MESSAGES__MSG__DETAIL__PING__BUILDER_HPP_
