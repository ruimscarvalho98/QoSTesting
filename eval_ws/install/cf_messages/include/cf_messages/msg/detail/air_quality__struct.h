// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cf_messages:msg/AirQuality.idl
// generated code does not contain a copyright notice

#ifndef CF_MESSAGES__MSG__DETAIL__AIR_QUALITY__STRUCT_H_
#define CF_MESSAGES__MSG__DETAIL__AIR_QUALITY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'p'
#include "geometry_msgs/msg/detail/point32__struct.h"

// Struct defined in msg/AirQuality in the package cf_messages.
typedef struct cf_messages__msg__AirQuality
{
  geometry_msgs__msg__Point32 p;
  float eco2;
  float tvoc;
} cf_messages__msg__AirQuality;

// Struct for a sequence of cf_messages__msg__AirQuality.
typedef struct cf_messages__msg__AirQuality__Sequence
{
  cf_messages__msg__AirQuality * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cf_messages__msg__AirQuality__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CF_MESSAGES__MSG__DETAIL__AIR_QUALITY__STRUCT_H_
