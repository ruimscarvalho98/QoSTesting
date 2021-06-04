// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cf_messages:msg/WeatherData.idl
// generated code does not contain a copyright notice

#ifndef CF_MESSAGES__MSG__DETAIL__WEATHER_DATA__BUILDER_HPP_
#define CF_MESSAGES__MSG__DETAIL__WEATHER_DATA__BUILDER_HPP_

#include "cf_messages/msg/detail/weather_data__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace cf_messages
{

namespace msg
{

namespace builder
{

class Init_WeatherData_rh
{
public:
  explicit Init_WeatherData_rh(::cf_messages::msg::WeatherData & msg)
  : msg_(msg)
  {}
  ::cf_messages::msg::WeatherData rh(::cf_messages::msg::WeatherData::_rh_type arg)
  {
    msg_.rh = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cf_messages::msg::WeatherData msg_;
};

class Init_WeatherData_temperature
{
public:
  Init_WeatherData_temperature()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WeatherData_rh temperature(::cf_messages::msg::WeatherData::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return Init_WeatherData_rh(msg_);
  }

private:
  ::cf_messages::msg::WeatherData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cf_messages::msg::WeatherData>()
{
  return cf_messages::msg::builder::Init_WeatherData_temperature();
}

}  // namespace cf_messages

#endif  // CF_MESSAGES__MSG__DETAIL__WEATHER_DATA__BUILDER_HPP_
