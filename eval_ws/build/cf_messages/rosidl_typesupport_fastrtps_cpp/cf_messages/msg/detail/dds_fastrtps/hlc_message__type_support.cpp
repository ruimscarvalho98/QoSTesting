// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from cf_messages:msg/HLCMessage.idl
// generated code does not contain a copyright notice
#include "cf_messages/msg/detail/hlc_message__rosidl_typesupport_fastrtps_cpp.hpp"
#include "cf_messages/msg/detail/hlc_message__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace cf_messages
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cf_messages
cdr_serialize(
  const cf_messages::msg::HLCMessage & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: command
  cdr << ros_message.command;
  // Member: group_mask
  cdr << ros_message.group_mask;
  // Member: height
  cdr << ros_message.height;
  // Member: yaw
  cdr << ros_message.yaw;
  // Member: use_current_yaw
  cdr << (ros_message.use_current_yaw ? true : false);
  // Member: duration
  cdr << ros_message.duration;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cf_messages
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  cf_messages::msg::HLCMessage & ros_message)
{
  // Member: command
  cdr >> ros_message.command;

  // Member: group_mask
  cdr >> ros_message.group_mask;

  // Member: height
  cdr >> ros_message.height;

  // Member: yaw
  cdr >> ros_message.yaw;

  // Member: use_current_yaw
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.use_current_yaw = tmp ? true : false;
  }

  // Member: duration
  cdr >> ros_message.duration;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cf_messages
get_serialized_size(
  const cf_messages::msg::HLCMessage & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: command
  {
    size_t item_size = sizeof(ros_message.command);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: group_mask
  {
    size_t item_size = sizeof(ros_message.group_mask);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: height
  {
    size_t item_size = sizeof(ros_message.height);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: yaw
  {
    size_t item_size = sizeof(ros_message.yaw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: use_current_yaw
  {
    size_t item_size = sizeof(ros_message.use_current_yaw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: duration
  {
    size_t item_size = sizeof(ros_message.duration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cf_messages
max_serialized_size_HLCMessage(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: command
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: group_mask
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: height
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: yaw
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: use_current_yaw
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: duration
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _HLCMessage__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const cf_messages::msg::HLCMessage *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _HLCMessage__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<cf_messages::msg::HLCMessage *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _HLCMessage__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const cf_messages::msg::HLCMessage *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _HLCMessage__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_HLCMessage(full_bounded, 0);
}

static message_type_support_callbacks_t _HLCMessage__callbacks = {
  "cf_messages::msg",
  "HLCMessage",
  _HLCMessage__cdr_serialize,
  _HLCMessage__cdr_deserialize,
  _HLCMessage__get_serialized_size,
  _HLCMessage__max_serialized_size
};

static rosidl_message_type_support_t _HLCMessage__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_HLCMessage__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace cf_messages

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_cf_messages
const rosidl_message_type_support_t *
get_message_type_support_handle<cf_messages::msg::HLCMessage>()
{
  return &cf_messages::msg::typesupport_fastrtps_cpp::_HLCMessage__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cf_messages, msg, HLCMessage)() {
  return &cf_messages::msg::typesupport_fastrtps_cpp::_HLCMessage__handle;
}

#ifdef __cplusplus
}
#endif
