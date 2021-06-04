// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cf_messages:msg/Ping.idl
// generated code does not contain a copyright notice

#ifndef CF_MESSAGES__MSG__DETAIL__PING__STRUCT_H_
#define CF_MESSAGES__MSG__DETAIL__PING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/Ping in the package cf_messages.
typedef struct cf_messages__msg__Ping
{
  rosidl_runtime_c__uint8__Sequence data;
} cf_messages__msg__Ping;

// Struct for a sequence of cf_messages__msg__Ping.
typedef struct cf_messages__msg__Ping__Sequence
{
  cf_messages__msg__Ping * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cf_messages__msg__Ping__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CF_MESSAGES__MSG__DETAIL__PING__STRUCT_H_
