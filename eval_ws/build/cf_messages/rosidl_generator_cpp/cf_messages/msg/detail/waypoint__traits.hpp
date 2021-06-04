// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cf_messages:msg/Waypoint.idl
// generated code does not contain a copyright notice

#ifndef CF_MESSAGES__MSG__DETAIL__WAYPOINT__TRAITS_HPP_
#define CF_MESSAGES__MSG__DETAIL__WAYPOINT__TRAITS_HPP_

#include "cf_messages/msg/detail/waypoint__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cf_messages::msg::Waypoint>()
{
  return "cf_messages::msg::Waypoint";
}

template<>
inline const char * name<cf_messages::msg::Waypoint>()
{
  return "cf_messages/msg/Waypoint";
}

template<>
struct has_fixed_size<cf_messages::msg::Waypoint>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<cf_messages::msg::Waypoint>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<cf_messages::msg::Waypoint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CF_MESSAGES__MSG__DETAIL__WAYPOINT__TRAITS_HPP_
