// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cf_messages:srv/GoTo.idl
// generated code does not contain a copyright notice

#ifndef CF_MESSAGES__SRV__DETAIL__GO_TO__TRAITS_HPP_
#define CF_MESSAGES__SRV__DETAIL__GO_TO__TRAITS_HPP_

#include "cf_messages/srv/detail/go_to__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cf_messages::srv::GoTo_Request>()
{
  return "cf_messages::srv::GoTo_Request";
}

template<>
inline const char * name<cf_messages::srv::GoTo_Request>()
{
  return "cf_messages/srv/GoTo_Request";
}

template<>
struct has_fixed_size<cf_messages::srv::GoTo_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<cf_messages::srv::GoTo_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<cf_messages::srv::GoTo_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cf_messages::srv::GoTo_Response>()
{
  return "cf_messages::srv::GoTo_Response";
}

template<>
inline const char * name<cf_messages::srv::GoTo_Response>()
{
  return "cf_messages/srv/GoTo_Response";
}

template<>
struct has_fixed_size<cf_messages::srv::GoTo_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<cf_messages::srv::GoTo_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<cf_messages::srv::GoTo_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cf_messages::srv::GoTo>()
{
  return "cf_messages::srv::GoTo";
}

template<>
inline const char * name<cf_messages::srv::GoTo>()
{
  return "cf_messages/srv/GoTo";
}

template<>
struct has_fixed_size<cf_messages::srv::GoTo>
  : std::integral_constant<
    bool,
    has_fixed_size<cf_messages::srv::GoTo_Request>::value &&
    has_fixed_size<cf_messages::srv::GoTo_Response>::value
  >
{
};

template<>
struct has_bounded_size<cf_messages::srv::GoTo>
  : std::integral_constant<
    bool,
    has_bounded_size<cf_messages::srv::GoTo_Request>::value &&
    has_bounded_size<cf_messages::srv::GoTo_Response>::value
  >
{
};

template<>
struct is_service<cf_messages::srv::GoTo>
  : std::true_type
{
};

template<>
struct is_service_request<cf_messages::srv::GoTo_Request>
  : std::true_type
{
};

template<>
struct is_service_response<cf_messages::srv::GoTo_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CF_MESSAGES__SRV__DETAIL__GO_TO__TRAITS_HPP_
