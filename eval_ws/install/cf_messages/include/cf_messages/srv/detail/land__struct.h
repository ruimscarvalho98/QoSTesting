// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cf_messages:srv/Land.idl
// generated code does not contain a copyright notice

#ifndef CF_MESSAGES__SRV__DETAIL__LAND__STRUCT_H_
#define CF_MESSAGES__SRV__DETAIL__LAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/Land in the package cf_messages.
typedef struct cf_messages__srv__Land_Request
{
  float height;
  float duration;
} cf_messages__srv__Land_Request;

// Struct for a sequence of cf_messages__srv__Land_Request.
typedef struct cf_messages__srv__Land_Request__Sequence
{
  cf_messages__srv__Land_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cf_messages__srv__Land_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/Land in the package cf_messages.
typedef struct cf_messages__srv__Land_Response
{
  int8_t ret;
} cf_messages__srv__Land_Response;

// Struct for a sequence of cf_messages__srv__Land_Response.
typedef struct cf_messages__srv__Land_Response__Sequence
{
  cf_messages__srv__Land_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cf_messages__srv__Land_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CF_MESSAGES__SRV__DETAIL__LAND__STRUCT_H_
