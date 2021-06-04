// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cf_messages:srv/GoTo.idl
// generated code does not contain a copyright notice

#ifndef CF_MESSAGES__SRV__DETAIL__GO_TO__STRUCT_H_
#define CF_MESSAGES__SRV__DETAIL__GO_TO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/GoTo in the package cf_messages.
typedef struct cf_messages__srv__GoTo_Request
{
  float x;
  float y;
  float z;
  float yaw;
  float duration;
} cf_messages__srv__GoTo_Request;

// Struct for a sequence of cf_messages__srv__GoTo_Request.
typedef struct cf_messages__srv__GoTo_Request__Sequence
{
  cf_messages__srv__GoTo_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cf_messages__srv__GoTo_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/GoTo in the package cf_messages.
typedef struct cf_messages__srv__GoTo_Response
{
  int8_t ret;
} cf_messages__srv__GoTo_Response;

// Struct for a sequence of cf_messages__srv__GoTo_Response.
typedef struct cf_messages__srv__GoTo_Response__Sequence
{
  cf_messages__srv__GoTo_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cf_messages__srv__GoTo_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CF_MESSAGES__SRV__DETAIL__GO_TO__STRUCT_H_
