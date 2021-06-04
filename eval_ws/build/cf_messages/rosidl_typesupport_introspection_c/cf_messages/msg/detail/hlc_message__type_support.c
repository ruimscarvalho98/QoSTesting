// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from cf_messages:msg/HLCMessage.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "cf_messages/msg/detail/hlc_message__rosidl_typesupport_introspection_c.h"
#include "cf_messages/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "cf_messages/msg/detail/hlc_message__functions.h"
#include "cf_messages/msg/detail/hlc_message__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void HLCMessage__rosidl_typesupport_introspection_c__HLCMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cf_messages__msg__HLCMessage__init(message_memory);
}

void HLCMessage__rosidl_typesupport_introspection_c__HLCMessage_fini_function(void * message_memory)
{
  cf_messages__msg__HLCMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember HLCMessage__rosidl_typesupport_introspection_c__HLCMessage_message_member_array[6] = {
  {
    "command",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cf_messages__msg__HLCMessage, command),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "group_mask",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cf_messages__msg__HLCMessage, group_mask),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "height",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cf_messages__msg__HLCMessage, height),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "yaw",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cf_messages__msg__HLCMessage, yaw),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "use_current_yaw",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cf_messages__msg__HLCMessage, use_current_yaw),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "duration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cf_messages__msg__HLCMessage, duration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers HLCMessage__rosidl_typesupport_introspection_c__HLCMessage_message_members = {
  "cf_messages__msg",  // message namespace
  "HLCMessage",  // message name
  6,  // number of fields
  sizeof(cf_messages__msg__HLCMessage),
  HLCMessage__rosidl_typesupport_introspection_c__HLCMessage_message_member_array,  // message members
  HLCMessage__rosidl_typesupport_introspection_c__HLCMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  HLCMessage__rosidl_typesupport_introspection_c__HLCMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t HLCMessage__rosidl_typesupport_introspection_c__HLCMessage_message_type_support_handle = {
  0,
  &HLCMessage__rosidl_typesupport_introspection_c__HLCMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cf_messages
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cf_messages, msg, HLCMessage)() {
  if (!HLCMessage__rosidl_typesupport_introspection_c__HLCMessage_message_type_support_handle.typesupport_identifier) {
    HLCMessage__rosidl_typesupport_introspection_c__HLCMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &HLCMessage__rosidl_typesupport_introspection_c__HLCMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
