// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cf_messages:msg/HLCMessage.idl
// generated code does not contain a copyright notice

#ifndef CF_MESSAGES__MSG__DETAIL__HLC_MESSAGE__BUILDER_HPP_
#define CF_MESSAGES__MSG__DETAIL__HLC_MESSAGE__BUILDER_HPP_

#include "cf_messages/msg/detail/hlc_message__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace cf_messages
{

namespace msg
{

namespace builder
{

class Init_HLCMessage_duration
{
public:
  explicit Init_HLCMessage_duration(::cf_messages::msg::HLCMessage & msg)
  : msg_(msg)
  {}
  ::cf_messages::msg::HLCMessage duration(::cf_messages::msg::HLCMessage::_duration_type arg)
  {
    msg_.duration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cf_messages::msg::HLCMessage msg_;
};

class Init_HLCMessage_use_current_yaw
{
public:
  explicit Init_HLCMessage_use_current_yaw(::cf_messages::msg::HLCMessage & msg)
  : msg_(msg)
  {}
  Init_HLCMessage_duration use_current_yaw(::cf_messages::msg::HLCMessage::_use_current_yaw_type arg)
  {
    msg_.use_current_yaw = std::move(arg);
    return Init_HLCMessage_duration(msg_);
  }

private:
  ::cf_messages::msg::HLCMessage msg_;
};

class Init_HLCMessage_yaw
{
public:
  explicit Init_HLCMessage_yaw(::cf_messages::msg::HLCMessage & msg)
  : msg_(msg)
  {}
  Init_HLCMessage_use_current_yaw yaw(::cf_messages::msg::HLCMessage::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_HLCMessage_use_current_yaw(msg_);
  }

private:
  ::cf_messages::msg::HLCMessage msg_;
};

class Init_HLCMessage_height
{
public:
  explicit Init_HLCMessage_height(::cf_messages::msg::HLCMessage & msg)
  : msg_(msg)
  {}
  Init_HLCMessage_yaw height(::cf_messages::msg::HLCMessage::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_HLCMessage_yaw(msg_);
  }

private:
  ::cf_messages::msg::HLCMessage msg_;
};

class Init_HLCMessage_group_mask
{
public:
  explicit Init_HLCMessage_group_mask(::cf_messages::msg::HLCMessage & msg)
  : msg_(msg)
  {}
  Init_HLCMessage_height group_mask(::cf_messages::msg::HLCMessage::_group_mask_type arg)
  {
    msg_.group_mask = std::move(arg);
    return Init_HLCMessage_height(msg_);
  }

private:
  ::cf_messages::msg::HLCMessage msg_;
};

class Init_HLCMessage_command
{
public:
  Init_HLCMessage_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HLCMessage_group_mask command(::cf_messages::msg::HLCMessage::_command_type arg)
  {
    msg_.command = std::move(arg);
    return Init_HLCMessage_group_mask(msg_);
  }

private:
  ::cf_messages::msg::HLCMessage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cf_messages::msg::HLCMessage>()
{
  return cf_messages::msg::builder::Init_HLCMessage_command();
}

}  // namespace cf_messages

#endif  // CF_MESSAGES__MSG__DETAIL__HLC_MESSAGE__BUILDER_HPP_
