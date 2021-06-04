// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from cf_messages:srv/TakeOff.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "cf_messages/srv/detail/take_off__rosidl_typesupport_introspection_c.h"
#include "cf_messages/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "cf_messages/srv/detail/take_off__functions.h"
#include "cf_messages/srv/detail/take_off__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void TakeOff_Request__rosidl_typesupport_introspection_c__TakeOff_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cf_messages__srv__TakeOff_Request__init(message_memory);
}

void TakeOff_Request__rosidl_typesupport_introspection_c__TakeOff_Request_fini_function(void * message_memory)
{
  cf_messages__srv__TakeOff_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember TakeOff_Request__rosidl_typesupport_introspection_c__TakeOff_Request_message_member_array[2] = {
  {
    "height",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cf_messages__srv__TakeOff_Request, height),  // bytes offset in struct
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
    offsetof(cf_messages__srv__TakeOff_Request, duration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TakeOff_Request__rosidl_typesupport_introspection_c__TakeOff_Request_message_members = {
  "cf_messages__srv",  // message namespace
  "TakeOff_Request",  // message name
  2,  // number of fields
  sizeof(cf_messages__srv__TakeOff_Request),
  TakeOff_Request__rosidl_typesupport_introspection_c__TakeOff_Request_message_member_array,  // message members
  TakeOff_Request__rosidl_typesupport_introspection_c__TakeOff_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  TakeOff_Request__rosidl_typesupport_introspection_c__TakeOff_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TakeOff_Request__rosidl_typesupport_introspection_c__TakeOff_Request_message_type_support_handle = {
  0,
  &TakeOff_Request__rosidl_typesupport_introspection_c__TakeOff_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cf_messages
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cf_messages, srv, TakeOff_Request)() {
  if (!TakeOff_Request__rosidl_typesupport_introspection_c__TakeOff_Request_message_type_support_handle.typesupport_identifier) {
    TakeOff_Request__rosidl_typesupport_introspection_c__TakeOff_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TakeOff_Request__rosidl_typesupport_introspection_c__TakeOff_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "cf_messages/srv/detail/take_off__rosidl_typesupport_introspection_c.h"
// already included above
// #include "cf_messages/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "cf_messages/srv/detail/take_off__functions.h"
// already included above
// #include "cf_messages/srv/detail/take_off__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void TakeOff_Response__rosidl_typesupport_introspection_c__TakeOff_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cf_messages__srv__TakeOff_Response__init(message_memory);
}

void TakeOff_Response__rosidl_typesupport_introspection_c__TakeOff_Response_fini_function(void * message_memory)
{
  cf_messages__srv__TakeOff_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember TakeOff_Response__rosidl_typesupport_introspection_c__TakeOff_Response_message_member_array[1] = {
  {
    "ret",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cf_messages__srv__TakeOff_Response, ret),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TakeOff_Response__rosidl_typesupport_introspection_c__TakeOff_Response_message_members = {
  "cf_messages__srv",  // message namespace
  "TakeOff_Response",  // message name
  1,  // number of fields
  sizeof(cf_messages__srv__TakeOff_Response),
  TakeOff_Response__rosidl_typesupport_introspection_c__TakeOff_Response_message_member_array,  // message members
  TakeOff_Response__rosidl_typesupport_introspection_c__TakeOff_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  TakeOff_Response__rosidl_typesupport_introspection_c__TakeOff_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TakeOff_Response__rosidl_typesupport_introspection_c__TakeOff_Response_message_type_support_handle = {
  0,
  &TakeOff_Response__rosidl_typesupport_introspection_c__TakeOff_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cf_messages
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cf_messages, srv, TakeOff_Response)() {
  if (!TakeOff_Response__rosidl_typesupport_introspection_c__TakeOff_Response_message_type_support_handle.typesupport_identifier) {
    TakeOff_Response__rosidl_typesupport_introspection_c__TakeOff_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TakeOff_Response__rosidl_typesupport_introspection_c__TakeOff_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "cf_messages/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "cf_messages/srv/detail/take_off__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers cf_messages__srv__detail__take_off__rosidl_typesupport_introspection_c__TakeOff_service_members = {
  "cf_messages__srv",  // service namespace
  "TakeOff",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // cf_messages__srv__detail__take_off__rosidl_typesupport_introspection_c__TakeOff_Request_message_type_support_handle,
  NULL  // response message
  // cf_messages__srv__detail__take_off__rosidl_typesupport_introspection_c__TakeOff_Response_message_type_support_handle
};

static rosidl_service_type_support_t cf_messages__srv__detail__take_off__rosidl_typesupport_introspection_c__TakeOff_service_type_support_handle = {
  0,
  &cf_messages__srv__detail__take_off__rosidl_typesupport_introspection_c__TakeOff_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cf_messages, srv, TakeOff_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cf_messages, srv, TakeOff_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cf_messages
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cf_messages, srv, TakeOff)() {
  if (!cf_messages__srv__detail__take_off__rosidl_typesupport_introspection_c__TakeOff_service_type_support_handle.typesupport_identifier) {
    cf_messages__srv__detail__take_off__rosidl_typesupport_introspection_c__TakeOff_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)cf_messages__srv__detail__take_off__rosidl_typesupport_introspection_c__TakeOff_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cf_messages, srv, TakeOff_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cf_messages, srv, TakeOff_Response)()->data;
  }

  return &cf_messages__srv__detail__take_off__rosidl_typesupport_introspection_c__TakeOff_service_type_support_handle;
}
