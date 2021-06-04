// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cf_messages:msg/HLCMessage.idl
// generated code does not contain a copyright notice

#ifndef CF_MESSAGES__MSG__DETAIL__HLC_MESSAGE__TRAITS_HPP_
#define CF_MESSAGES__MSG__DETAIL__HLC_MESSAGE__TRAITS_HPP_

#include "cf_messages/msg/detail/hlc_message__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cf_messages::msg::HLCMessage>()
{
  return "cf_messages::msg::HLCMessage";
}

template<>
inline const char * name<cf_messages::msg::HLCMessage>()
{
  return "cf_messages/msg/HLCMessage";
}

template<>
struct has_fixed_size<cf_messages::msg::HLCMessage>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<cf_messages::msg::HLCMessage>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<cf_messages::msg::HLCMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CF_MESSAGES__MSG__DETAIL__HLC_MESSAGE__TRAITS_HPP_
