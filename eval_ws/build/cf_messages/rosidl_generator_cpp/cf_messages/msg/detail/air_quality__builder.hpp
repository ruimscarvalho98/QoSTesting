// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cf_messages:msg/AirQuality.idl
// generated code does not contain a copyright notice

#ifndef CF_MESSAGES__MSG__DETAIL__AIR_QUALITY__BUILDER_HPP_
#define CF_MESSAGES__MSG__DETAIL__AIR_QUALITY__BUILDER_HPP_

#include "cf_messages/msg/detail/air_quality__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace cf_messages
{

namespace msg
{

namespace builder
{

class Init_AirQuality_tvoc
{
public:
  explicit Init_AirQuality_tvoc(::cf_messages::msg::AirQuality & msg)
  : msg_(msg)
  {}
  ::cf_messages::msg::AirQuality tvoc(::cf_messages::msg::AirQuality::_tvoc_type arg)
  {
    msg_.tvoc = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cf_messages::msg::AirQuality msg_;
};

class Init_AirQuality_eco2
{
public:
  explicit Init_AirQuality_eco2(::cf_messages::msg::AirQuality & msg)
  : msg_(msg)
  {}
  Init_AirQuality_tvoc eco2(::cf_messages::msg::AirQuality::_eco2_type arg)
  {
    msg_.eco2 = std::move(arg);
    return Init_AirQuality_tvoc(msg_);
  }

private:
  ::cf_messages::msg::AirQuality msg_;
};

class Init_AirQuality_p
{
public:
  Init_AirQuality_p()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AirQuality_eco2 p(::cf_messages::msg::AirQuality::_p_type arg)
  {
    msg_.p = std::move(arg);
    return Init_AirQuality_eco2(msg_);
  }

private:
  ::cf_messages::msg::AirQuality msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cf_messages::msg::AirQuality>()
{
  return cf_messages::msg::builder::Init_AirQuality_p();
}

}  // namespace cf_messages

#endif  // CF_MESSAGES__MSG__DETAIL__AIR_QUALITY__BUILDER_HPP_
