// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from cf_messages:msg/Waypoint.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "cf_messages/msg/detail/waypoint__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace cf_messages
{

namespace msg
{

namespace rosidl_typesupport_cpp
{

typedef struct _Waypoint_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Waypoint_type_support_ids_t;

static const _Waypoint_type_support_ids_t _Waypoint_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Waypoint_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Waypoint_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Waypoint_type_support_symbol_names_t _Waypoint_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cf_messages, msg, Waypoint)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, cf_messages, msg, Waypoint)),
  }
};

typedef struct _Waypoint_type_support_data_t
{
  void * data[2];
} _Waypoint_type_support_data_t;

static _Waypoint_type_support_data_t _Waypoint_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Waypoint_message_typesupport_map = {
  2,
  "cf_messages",
  &_Waypoint_message_typesupport_ids.typesupport_identifier[0],
  &_Waypoint_message_typesupport_symbol_names.symbol_name[0],
  &_Waypoint_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Waypoint_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Waypoint_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace msg

}  // namespace cf_messages

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<cf_messages::msg::Waypoint>()
{
  return &::cf_messages::msg::rosidl_typesupport_cpp::Waypoint_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, cf_messages, msg, Waypoint)() {
  return get_message_type_support_handle<cf_messages::msg::Waypoint>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp
