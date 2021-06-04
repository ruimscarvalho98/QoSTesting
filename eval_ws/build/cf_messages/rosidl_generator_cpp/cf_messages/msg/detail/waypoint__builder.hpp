// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cf_messages:msg/Waypoint.idl
// generated code does not contain a copyright notice

#ifndef CF_MESSAGES__MSG__DETAIL__WAYPOINT__BUILDER_HPP_
#define CF_MESSAGES__MSG__DETAIL__WAYPOINT__BUILDER_HPP_

#include "cf_messages/msg/detail/waypoint__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace cf_messages
{

namespace msg
{

namespace builder
{

class Init_Waypoint_yaw
{
public:
  explicit Init_Waypoint_yaw(::cf_messages::msg::Waypoint & msg)
  : msg_(msg)
  {}
  ::cf_messages::msg::Waypoint yaw(::cf_messages::msg::Waypoint::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cf_messages::msg::Waypoint msg_;
};

class Init_Waypoint_z
{
public:
  explicit Init_Waypoint_z(::cf_messages::msg::Waypoint & msg)
  : msg_(msg)
  {}
  Init_Waypoint_yaw z(::cf_messages::msg::Waypoint::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_Waypoint_yaw(msg_);
  }

private:
  ::cf_messages::msg::Waypoint msg_;
};

class Init_Waypoint_y
{
public:
  explicit Init_Waypoint_y(::cf_messages::msg::Waypoint & msg)
  : msg_(msg)
  {}
  Init_Waypoint_z y(::cf_messages::msg::Waypoint::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Waypoint_z(msg_);
  }

private:
  ::cf_messages::msg::Waypoint msg_;
};

class Init_Waypoint_x
{
public:
  Init_Waypoint_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Waypoint_y x(::cf_messages::msg::Waypoint::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Waypoint_y(msg_);
  }

private:
  ::cf_messages::msg::Waypoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cf_messages::msg::Waypoint>()
{
  return cf_messages::msg::builder::Init_Waypoint_x();
}

}  // namespace cf_messages

#endif  // CF_MESSAGES__MSG__DETAIL__WAYPOINT__BUILDER_HPP_
