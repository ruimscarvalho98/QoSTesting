// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cf_messages:msg/Waypoint.idl
// generated code does not contain a copyright notice

#ifndef CF_MESSAGES__MSG__DETAIL__WAYPOINT__STRUCT_H_
#define CF_MESSAGES__MSG__DETAIL__WAYPOINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Waypoint in the package cf_messages.
typedef struct cf_messages__msg__Waypoint
{
  float x;
  float y;
  float z;
  float yaw;
} cf_messages__msg__Waypoint;

// Struct for a sequence of cf_messages__msg__Waypoint.
typedef struct cf_messages__msg__Waypoint__Sequence
{
  cf_messages__msg__Waypoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cf_messages__msg__Waypoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CF_MESSAGES__MSG__DETAIL__WAYPOINT__STRUCT_H_
