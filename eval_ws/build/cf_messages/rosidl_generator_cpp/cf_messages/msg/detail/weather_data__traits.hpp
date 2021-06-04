// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cf_messages:msg/WeatherData.idl
// generated code does not contain a copyright notice

#ifndef CF_MESSAGES__MSG__DETAIL__WEATHER_DATA__TRAITS_HPP_
#define CF_MESSAGES__MSG__DETAIL__WEATHER_DATA__TRAITS_HPP_

#include "cf_messages/msg/detail/weather_data__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cf_messages::msg::WeatherData>()
{
  return "cf_messages::msg::WeatherData";
}

template<>
inline const char * name<cf_messages::msg::WeatherData>()
{
  return "cf_messages/msg/WeatherData";
}

template<>
struct has_fixed_size<cf_messages::msg::WeatherData>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<cf_messages::msg::WeatherData>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<cf_messages::msg::WeatherData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CF_MESSAGES__MSG__DETAIL__WEATHER_DATA__TRAITS_HPP_
