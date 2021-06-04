// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from cf_messages:srv/TakeOff.idl
// generated code does not contain a copyright notice
#include "cf_messages/srv/detail/take_off__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "cf_messages/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "cf_messages/srv/detail/take_off__struct.h"
#include "cf_messages/srv/detail/take_off__functions.h"
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


using _TakeOff_Request__ros_msg_type = cf_messages__srv__TakeOff_Request;

static bool _TakeOff_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TakeOff_Request__ros_msg_type * ros_message = static_cast<const _TakeOff_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: height
  {
    cdr << ros_message->height;
  }

  // Field name: duration
  {
    cdr << ros_message->duration;
  }

  return true;
}

static bool _TakeOff_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TakeOff_Request__ros_msg_type * ros_message = static_cast<_TakeOff_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: height
  {
    cdr >> ros_message->height;
  }

  // Field name: duration
  {
    cdr >> ros_message->duration;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cf_messages
size_t get_serialized_size_cf_messages__srv__TakeOff_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TakeOff_Request__ros_msg_type * ros_message = static_cast<const _TakeOff_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name height
  {
    size_t item_size = sizeof(ros_message->height);
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

static uint32_t _TakeOff_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_cf_messages__srv__TakeOff_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cf_messages
size_t max_serialized_size_cf_messages__srv__TakeOff_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: height
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: duration
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _TakeOff_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_cf_messages__srv__TakeOff_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_TakeOff_Request = {
  "cf_messages::srv",
  "TakeOff_Request",
  _TakeOff_Request__cdr_serialize,
  _TakeOff_Request__cdr_deserialize,
  _TakeOff_Request__get_serialized_size,
  _TakeOff_Request__max_serialized_size
};

static rosidl_message_type_support_t _TakeOff_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TakeOff_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cf_messages, srv, TakeOff_Request)() {
  return &_TakeOff_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "cf_messages/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "cf_messages/srv/detail/take_off__struct.h"
// already included above
// #include "cf_messages/srv/detail/take_off__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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


using _TakeOff_Response__ros_msg_type = cf_messages__srv__TakeOff_Response;

static bool _TakeOff_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TakeOff_Response__ros_msg_type * ros_message = static_cast<const _TakeOff_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: ret
  {
    cdr << ros_message->ret;
  }

  return true;
}

static bool _TakeOff_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TakeOff_Response__ros_msg_type * ros_message = static_cast<_TakeOff_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: ret
  {
    cdr >> ros_message->ret;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cf_messages
size_t get_serialized_size_cf_messages__srv__TakeOff_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TakeOff_Response__ros_msg_type * ros_message = static_cast<const _TakeOff_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name ret
  {
    size_t item_size = sizeof(ros_message->ret);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _TakeOff_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_cf_messages__srv__TakeOff_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cf_messages
size_t max_serialized_size_cf_messages__srv__TakeOff_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: ret
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _TakeOff_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_cf_messages__srv__TakeOff_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_TakeOff_Response = {
  "cf_messages::srv",
  "TakeOff_Response",
  _TakeOff_Response__cdr_serialize,
  _TakeOff_Response__cdr_deserialize,
  _TakeOff_Response__get_serialized_size,
  _TakeOff_Response__max_serialized_size
};

static rosidl_message_type_support_t _TakeOff_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TakeOff_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cf_messages, srv, TakeOff_Response)() {
  return &_TakeOff_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "cf_messages/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "cf_messages/srv/take_off.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t TakeOff__callbacks = {
  "cf_messages::srv",
  "TakeOff",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cf_messages, srv, TakeOff_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cf_messages, srv, TakeOff_Response)(),
};

static rosidl_service_type_support_t TakeOff__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &TakeOff__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cf_messages, srv, TakeOff)() {
  return &TakeOff__handle;
}

#if defined(__cplusplus)
}
#endif
