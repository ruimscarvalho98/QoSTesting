// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from cf_messages:srv/SimpleTraj.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "cf_messages/srv/detail/simple_traj__rosidl_typesupport_introspection_c.h"
#include "cf_messages/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "cf_messages/srv/detail/simple_traj__functions.h"
#include "cf_messages/srv/detail/simple_traj__struct.h"


// Include directives for member types
// Member `traj`
#include "cf_messages/msg/waypoint.h"
// Member `traj`
#include "cf_messages/msg/detail/waypoint__rosidl_typesupport_introspection_c.h"
// Member `duration`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void SimpleTraj_Request__rosidl_typesupport_introspection_c__SimpleTraj_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cf_messages__srv__SimpleTraj_Request__init(message_memory);
}

void SimpleTraj_Request__rosidl_typesupport_introspection_c__SimpleTraj_Request_fini_function(void * message_memory)
{
  cf_messages__srv__SimpleTraj_Request__fini(message_memory);
}

size_t SimpleTraj_Request__rosidl_typesupport_introspection_c__size_function__Waypoint__traj(
  const void * untyped_member)
{
  const cf_messages__msg__Waypoint__Sequence * member =
    (const cf_messages__msg__Waypoint__Sequence *)(untyped_member);
  return member->size;
}

const void * SimpleTraj_Request__rosidl_typesupport_introspection_c__get_const_function__Waypoint__traj(
  const void * untyped_member, size_t index)
{
  const cf_messages__msg__Waypoint__Sequence * member =
    (const cf_messages__msg__Waypoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * SimpleTraj_Request__rosidl_typesupport_introspection_c__get_function__Waypoint__traj(
  void * untyped_member, size_t index)
{
  cf_messages__msg__Waypoint__Sequence * member =
    (cf_messages__msg__Waypoint__Sequence *)(untyped_member);
  return &member->data[index];
}

bool SimpleTraj_Request__rosidl_typesupport_introspection_c__resize_function__Waypoint__traj(
  void * untyped_member, size_t size)
{
  cf_messages__msg__Waypoint__Sequence * member =
    (cf_messages__msg__Waypoint__Sequence *)(untyped_member);
  cf_messages__msg__Waypoint__Sequence__fini(member);
  return cf_messages__msg__Waypoint__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember SimpleTraj_Request__rosidl_typesupport_introspection_c__SimpleTraj_Request_message_member_array[3] = {
  {
    "traj",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cf_messages__srv__SimpleTraj_Request, traj),  // bytes offset in struct
    NULL,  // default value
    SimpleTraj_Request__rosidl_typesupport_introspection_c__size_function__Waypoint__traj,  // size() function pointer
    SimpleTraj_Request__rosidl_typesupport_introspection_c__get_const_function__Waypoint__traj,  // get_const(index) function pointer
    SimpleTraj_Request__rosidl_typesupport_introspection_c__get_function__Waypoint__traj,  // get(index) function pointer
    SimpleTraj_Request__rosidl_typesupport_introspection_c__resize_function__Waypoint__traj  // resize(index) function pointer
  },
  {
    "duration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cf_messages__srv__SimpleTraj_Request, duration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "len",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cf_messages__srv__SimpleTraj_Request, len),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SimpleTraj_Request__rosidl_typesupport_introspection_c__SimpleTraj_Request_message_members = {
  "cf_messages__srv",  // message namespace
  "SimpleTraj_Request",  // message name
  3,  // number of fields
  sizeof(cf_messages__srv__SimpleTraj_Request),
  SimpleTraj_Request__rosidl_typesupport_introspection_c__SimpleTraj_Request_message_member_array,  // message members
  SimpleTraj_Request__rosidl_typesupport_introspection_c__SimpleTraj_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  SimpleTraj_Request__rosidl_typesupport_introspection_c__SimpleTraj_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SimpleTraj_Request__rosidl_typesupport_introspection_c__SimpleTraj_Request_message_type_support_handle = {
  0,
  &SimpleTraj_Request__rosidl_typesupport_introspection_c__SimpleTraj_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cf_messages
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cf_messages, srv, SimpleTraj_Request)() {
  SimpleTraj_Request__rosidl_typesupport_introspection_c__SimpleTraj_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cf_messages, msg, Waypoint)();
  if (!SimpleTraj_Request__rosidl_typesupport_introspection_c__SimpleTraj_Request_message_type_support_handle.typesupport_identifier) {
    SimpleTraj_Request__rosidl_typesupport_introspection_c__SimpleTraj_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SimpleTraj_Request__rosidl_typesupport_introspection_c__SimpleTraj_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "cf_messages/srv/detail/simple_traj__rosidl_typesupport_introspection_c.h"
// already included above
// #include "cf_messages/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "cf_messages/srv/detail/simple_traj__functions.h"
// already included above
// #include "cf_messages/srv/detail/simple_traj__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void SimpleTraj_Response__rosidl_typesupport_introspection_c__SimpleTraj_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cf_messages__srv__SimpleTraj_Response__init(message_memory);
}

void SimpleTraj_Response__rosidl_typesupport_introspection_c__SimpleTraj_Response_fini_function(void * message_memory)
{
  cf_messages__srv__SimpleTraj_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SimpleTraj_Response__rosidl_typesupport_introspection_c__SimpleTraj_Response_message_member_array[1] = {
  {
    "ret",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cf_messages__srv__SimpleTraj_Response, ret),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SimpleTraj_Response__rosidl_typesupport_introspection_c__SimpleTraj_Response_message_members = {
  "cf_messages__srv",  // message namespace
  "SimpleTraj_Response",  // message name
  1,  // number of fields
  sizeof(cf_messages__srv__SimpleTraj_Response),
  SimpleTraj_Response__rosidl_typesupport_introspection_c__SimpleTraj_Response_message_member_array,  // message members
  SimpleTraj_Response__rosidl_typesupport_introspection_c__SimpleTraj_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  SimpleTraj_Response__rosidl_typesupport_introspection_c__SimpleTraj_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SimpleTraj_Response__rosidl_typesupport_introspection_c__SimpleTraj_Response_message_type_support_handle = {
  0,
  &SimpleTraj_Response__rosidl_typesupport_introspection_c__SimpleTraj_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cf_messages
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cf_messages, srv, SimpleTraj_Response)() {
  if (!SimpleTraj_Response__rosidl_typesupport_introspection_c__SimpleTraj_Response_message_type_support_handle.typesupport_identifier) {
    SimpleTraj_Response__rosidl_typesupport_introspection_c__SimpleTraj_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SimpleTraj_Response__rosidl_typesupport_introspection_c__SimpleTraj_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "cf_messages/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "cf_messages/srv/detail/simple_traj__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers cf_messages__srv__detail__simple_traj__rosidl_typesupport_introspection_c__SimpleTraj_service_members = {
  "cf_messages__srv",  // service namespace
  "SimpleTraj",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // cf_messages__srv__detail__simple_traj__rosidl_typesupport_introspection_c__SimpleTraj_Request_message_type_support_handle,
  NULL  // response message
  // cf_messages__srv__detail__simple_traj__rosidl_typesupport_introspection_c__SimpleTraj_Response_message_type_support_handle
};

static rosidl_service_type_support_t cf_messages__srv__detail__simple_traj__rosidl_typesupport_introspection_c__SimpleTraj_service_type_support_handle = {
  0,
  &cf_messages__srv__detail__simple_traj__rosidl_typesupport_introspection_c__SimpleTraj_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cf_messages, srv, SimpleTraj_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cf_messages, srv, SimpleTraj_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cf_messages
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cf_messages, srv, SimpleTraj)() {
  if (!cf_messages__srv__detail__simple_traj__rosidl_typesupport_introspection_c__SimpleTraj_service_type_support_handle.typesupport_identifier) {
    cf_messages__srv__detail__simple_traj__rosidl_typesupport_introspection_c__SimpleTraj_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)cf_messages__srv__detail__simple_traj__rosidl_typesupport_introspection_c__SimpleTraj_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cf_messages, srv, SimpleTraj_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cf_messages, srv, SimpleTraj_Response)()->data;
  }

  return &cf_messages__srv__detail__simple_traj__rosidl_typesupport_introspection_c__SimpleTraj_service_type_support_handle;
}
