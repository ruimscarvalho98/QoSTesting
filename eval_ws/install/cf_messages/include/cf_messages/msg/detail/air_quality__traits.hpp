// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cf_messages:msg/AirQuality.idl
// generated code does not contain a copyright notice

#ifndef CF_MESSAGES__MSG__DETAIL__AIR_QUALITY__TRAITS_HPP_
#define CF_MESSAGES__MSG__DETAIL__AIR_QUALITY__TRAITS_HPP_

#include "cf_messages/msg/detail/air_quality__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'p'
#include "geometry_msgs/msg/detail/point32__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cf_messages::msg::AirQuality>()
{
  return "cf_messages::msg::AirQuality";
}

template<>
inline const char * name<cf_messages::msg::AirQuality>()
{
  return "cf_messages/msg/AirQuality";
}

template<>
struct has_fixed_size<cf_messages::msg::AirQuality>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point32>::value> {};

template<>
struct has_bounded_size<cf_messages::msg::AirQuality>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point32>::value> {};

template<>
struct is_message<cf_messages::msg::AirQuality>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CF_MESSAGES__MSG__DETAIL__AIR_QUALITY__TRAITS_HPP_
