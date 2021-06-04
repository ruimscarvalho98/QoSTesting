// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from cf_messages:msg/HLCMessage.idl
// generated code does not contain a copyright notice
#include "cf_messages/msg/detail/hlc_message__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "cf_messages/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "cf_messages/msg/detail/hlc_message__struct.h"
#include "cf_messages/msg/detail/hlc_message__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _HLCMessage__ros_msg_type = cf_messages__msg__HLCMessage;

static bool _HLCMessage__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _HLCMessage__ros_msg_type * ros_message = static_cast<const _HLCMessage__ros_msg_type *>(untyped_ros_message);
  // Field name: command
  {
    cdr << ros_message->command;
  }

  // Field name: group_mask
  {
    cdr << ros_message->group_mask;
  }

  // Field name: height
  {
    cdr << ros_message->height;
  }

  // Field name: yaw
  {
    cdr << ros_message->yaw;
  }

  // Field name: use_current_yaw
  {
    cdr << (ros_message->use_current_yaw ? true : false);
  }

  // Field name: duration
  {
    cdr << ros_message->duration;
  }

  return true;
}

static bool _HLCMessage__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _HLCMessage__ros_msg_type * ros_message = static_cast<_HLCMessage__ros_msg_type *>(untyped_ros_message);
  // Field name: command
  {
    cdr >> ros_message->command;
  }

  // Field name: group_mask
  {
    cdr >> ros_message->group_mask;
  }

  // Field name: height
  {
    cdr >> ros_message->height;
  }

  // Field name: yaw
  {
    cdr >> ros_message->yaw;
  }

  // Field name: use_current_yaw
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->use_current_yaw = tmp ? true : false;
  }

  // Field name: duration
  {
    cdr >> ros_message->duration;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cf_messages
size_t get_serialized_size_cf_messages__msg__HLCMessage(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _HLCMessage__ros_msg_type * ros_message = static_cast<const _HLCMessage__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name command
  {
    size_t item_size = sizeof(ros_message->command);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name group_mask
  {
    size_t item_size = sizeof(ros_message->group_mask);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name height
  {
    size_t item_size = sizeof(ros_message->height);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name yaw
  {
    size_t item_size = sizeof(ros_message->yaw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name use_current_yaw
  {
    size_t item_size = sizeof(ros_message->use_current_yaw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name duration
  {
    size_t item_size = sizeof(ros_message->duration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _HLCMessage__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_cf_messages__msg__HLCMessage(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cf_messages
size_t max_serialized_size_cf_messages__msg__HLCMessage(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: command
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: group_mask
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: height
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: yaw
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: use_current_yaw
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: duration
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _HLCMessage__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_cf_messages__msg__HLCMessage(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_HLCMessage = {
  "cf_messages::msg",
  "HLCMessage",
  _HLCMessage__cdr_serialize,
  _HLCMessage__cdr_deserialize,
  _HLCMessage__get_serialized_size,
  _HLCMessage__max_serialized_size
};

static rosidl_message_type_support_t _HLCMessage__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_HLCMessage,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cf_messages, msg, HLCMessage)() {
  return &_HLCMessage__type_support;
}

#if defined(__cplusplus)
}
#endif
