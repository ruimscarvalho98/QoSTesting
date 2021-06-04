// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from cf_messages:srv/SimpleTraj.idl
// generated code does not contain a copyright notice
#include "cf_messages/srv/detail/simple_traj__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "cf_messages/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "cf_messages/srv/detail/simple_traj__struct.h"
#include "cf_messages/srv/detail/simple_traj__functions.h"
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

#include "cf_messages/msg/detail/waypoint__functions.h"  // traj
#include "rosidl_runtime_c/primitives_sequence.h"  // duration
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // duration

// forward declare type support functions
size_t get_serialized_size_cf_messages__msg__Waypoint(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_cf_messages__msg__Waypoint(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cf_messages, msg, Waypoint)();


using _SimpleTraj_Request__ros_msg_type = cf_messages__srv__SimpleTraj_Request;

static bool _SimpleTraj_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SimpleTraj_Request__ros_msg_type * ros_message = static_cast<const _SimpleTraj_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: traj
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, cf_messages, msg, Waypoint
      )()->data);
    size_t size = ros_message->traj.size;
    auto array_ptr = ros_message->traj.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: duration
  {
    size_t size = ros_message->duration.size;
    auto array_ptr = ros_message->duration.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: len
  {
    cdr << ros_message->len;
  }

  return true;
}

static bool _SimpleTraj_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SimpleTraj_Request__ros_msg_type * ros_message = static_cast<_SimpleTraj_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: traj
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, cf_messages, msg, Waypoint
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->traj.data) {
      cf_messages__msg__Waypoint__Sequence__fini(&ros_message->traj);
    }
    if (!cf_messages__msg__Waypoint__Sequence__init(&ros_message->traj, size)) {
      return "failed to create array for field 'traj'";
    }
    auto array_ptr = ros_message->traj.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: duration
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->duration.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->duration);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->duration, size)) {
      return "failed to create array for field 'duration'";
    }
    auto array_ptr = ros_message->duration.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: len
  {
    cdr >> ros_message->len;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cf_messages
size_t get_serialized_size_cf_messages__srv__SimpleTraj_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SimpleTraj_Request__ros_msg_type * ros_message = static_cast<const _SimpleTraj_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name traj
  {
    size_t array_size = ros_message->traj.size;
    auto array_ptr = ros_message->traj.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_cf_messages__msg__Waypoint(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name duration
  {
    size_t array_size = ros_message->duration.size;
    auto array_ptr = ros_message->duration.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name len
  {
    size_t item_size = sizeof(ros_message->len);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SimpleTraj_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_cf_messages__srv__SimpleTraj_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cf_messages
size_t max_serialized_size_cf_messages__srv__SimpleTraj_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: traj
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_cf_messages__msg__Waypoint(
        full_bounded, current_alignment);
    }
  }
  // member: duration
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: len
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _SimpleTraj_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_cf_messages__srv__SimpleTraj_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SimpleTraj_Request = {
  "cf_messages::srv",
  "SimpleTraj_Request",
  _SimpleTraj_Request__cdr_serialize,
  _SimpleTraj_Request__cdr_deserialize,
  _SimpleTraj_Request__get_serialized_size,
  _SimpleTraj_Request__max_serialized_size
};

static rosidl_message_type_support_t _SimpleTraj_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SimpleTraj_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cf_messages, srv, SimpleTraj_Request)() {
  return &_SimpleTraj_Request__type_support;
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
// #include "cf_messages/srv/detail/simple_traj__struct.h"
// already included above
// #include "cf_messages/srv/detail/simple_traj__functions.h"
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


using _SimpleTraj_Response__ros_msg_type = cf_messages__srv__SimpleTraj_Response;

static bool _SimpleTraj_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SimpleTraj_Response__ros_msg_type * ros_message = static_cast<const _SimpleTraj_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: ret
  {
    cdr << ros_message->ret;
  }

  return true;
}

static bool _SimpleTraj_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SimpleTraj_Response__ros_msg_type * ros_message = static_cast<_SimpleTraj_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: ret
  {
    cdr >> ros_message->ret;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cf_messages
size_t get_serialized_size_cf_messages__srv__SimpleTraj_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SimpleTraj_Response__ros_msg_type * ros_message = static_cast<const _SimpleTraj_Response__ros_msg_type *>(untyped_ros_message);
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

static uint32_t _SimpleTraj_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_cf_messages__srv__SimpleTraj_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cf_messages
size_t max_serialized_size_cf_messages__srv__SimpleTraj_Response(
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

static size_t _SimpleTraj_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_cf_messages__srv__SimpleTraj_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SimpleTraj_Response = {
  "cf_messages::srv",
  "SimpleTraj_Response",
  _SimpleTraj_Response__cdr_serialize,
  _SimpleTraj_Response__cdr_deserialize,
  _SimpleTraj_Response__get_serialized_size,
  _SimpleTraj_Response__max_serialized_size
};

static rosidl_message_type_support_t _SimpleTraj_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SimpleTraj_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cf_messages, srv, SimpleTraj_Response)() {
  return &_SimpleTraj_Response__type_support;
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
#include "cf_messages/srv/simple_traj.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t SimpleTraj__callbacks = {
  "cf_messages::srv",
  "SimpleTraj",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cf_messages, srv, SimpleTraj_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cf_messages, srv, SimpleTraj_Response)(),
};

static rosidl_service_type_support_t SimpleTraj__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &SimpleTraj__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cf_messages, srv, SimpleTraj)() {
  return &SimpleTraj__handle;
}

#if defined(__cplusplus)
}
#endif
