// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cf_messages:srv/SimpleTraj.idl
// generated code does not contain a copyright notice

#ifndef CF_MESSAGES__SRV__DETAIL__SIMPLE_TRAJ__STRUCT_H_
#define CF_MESSAGES__SRV__DETAIL__SIMPLE_TRAJ__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'traj'
#include "cf_messages/msg/detail/waypoint__struct.h"
// Member 'duration'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in srv/SimpleTraj in the package cf_messages.
typedef struct cf_messages__srv__SimpleTraj_Request
{
  cf_messages__msg__Waypoint__Sequence traj;
  rosidl_runtime_c__float__Sequence duration;
  int8_t len;
} cf_messages__srv__SimpleTraj_Request;

// Struct for a sequence of cf_messages__srv__SimpleTraj_Request.
typedef struct cf_messages__srv__SimpleTraj_Request__Sequence
{
  cf_messages__srv__SimpleTraj_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cf_messages__srv__SimpleTraj_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/SimpleTraj in the package cf_messages.
typedef struct cf_messages__srv__SimpleTraj_Response
{
  int8_t ret;
} cf_messages__srv__SimpleTraj_Response;

// Struct for a sequence of cf_messages__srv__SimpleTraj_Response.
typedef struct cf_messages__srv__SimpleTraj_Response__Sequence
{
  cf_messages__srv__SimpleTraj_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cf_messages__srv__SimpleTraj_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CF_MESSAGES__SRV__DETAIL__SIMPLE_TRAJ__STRUCT_H_
