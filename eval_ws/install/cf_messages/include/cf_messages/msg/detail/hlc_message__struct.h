// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cf_messages:msg/HLCMessage.idl
// generated code does not contain a copyright notice

#ifndef CF_MESSAGES__MSG__DETAIL__HLC_MESSAGE__STRUCT_H_
#define CF_MESSAGES__MSG__DETAIL__HLC_MESSAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/HLCMessage in the package cf_messages.
typedef struct cf_messages__msg__HLCMessage
{
  uint8_t command;
  uint8_t group_mask;
  float height;
  float yaw;
  bool use_current_yaw;
  float duration;
} cf_messages__msg__HLCMessage;

// Struct for a sequence of cf_messages__msg__HLCMessage.
typedef struct cf_messages__msg__HLCMessage__Sequence
{
  cf_messages__msg__HLCMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cf_messages__msg__HLCMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CF_MESSAGES__MSG__DETAIL__HLC_MESSAGE__STRUCT_H_
