// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from cf_messages:msg/AirQuality.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "cf_messages/msg/detail/air_quality__rosidl_typesupport_introspection_c.h"
#include "cf_messages/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "cf_messages/msg/detail/air_quality__functions.h"
#include "cf_messages/msg/detail/air_quality__struct.h"


// Include directives for member types
// Member `p`
#include "geometry_msgs/msg/point32.h"
// Member `p`
#include "geometry_msgs/msg/detail/point32__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void AirQuality__rosidl_typesupport_introspection_c__AirQuality_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cf_messages__msg__AirQuality__init(message_memory);
}

void AirQuality__rosidl_typesupport_introspection_c__AirQuality_fini_function(void * message_memory)
{
  cf_messages__msg__AirQuality__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember AirQuality__rosidl_typesupport_introspection_c__AirQuality_message_member_array[3] = {
  {
    "p",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cf_messages__msg__AirQuality, p),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "eco2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cf_messages__msg__AirQuality, eco2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tvoc",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cf_messages__msg__AirQuality, tvoc),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers AirQuality__rosidl_typesupport_introspection_c__AirQuality_message_members = {
  "cf_messages__msg",  // message namespace
  "AirQuality",  // message name
  3,  // number of fields
  sizeof(cf_messages__msg__AirQuality),
  AirQuality__rosidl_typesupport_introspection_c__AirQuality_message_member_array,  // message members
  AirQuality__rosidl_typesupport_introspection_c__AirQuality_init_function,  // function to initialize message memory (memory has to be allocated)
  AirQuality__rosidl_typesupport_introspection_c__AirQuality_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t AirQuality__rosidl_typesupport_introspection_c__AirQuality_message_type_support_handle = {
  0,
  &AirQuality__rosidl_typesupport_introspection_c__AirQuality_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cf_messages
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cf_messages, msg, AirQuality)() {
  AirQuality__rosidl_typesupport_introspection_c__AirQuality_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point32)();
  if (!AirQuality__rosidl_typesupport_introspection_c__AirQuality_message_type_support_handle.typesupport_identifier) {
    AirQuality__rosidl_typesupport_introspection_c__AirQuality_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &AirQuality__rosidl_typesupport_introspection_c__AirQuality_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
