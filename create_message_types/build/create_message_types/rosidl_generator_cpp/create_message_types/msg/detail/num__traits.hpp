// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from create_message_types:msg/Num.idl
// generated code does not contain a copyright notice

#ifndef CREATE_MESSAGE_TYPES__MSG__DETAIL__NUM__TRAITS_HPP_
#define CREATE_MESSAGE_TYPES__MSG__DETAIL__NUM__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "create_message_types/msg/detail/num__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace create_message_types
{

namespace msg
{

inline void to_flow_style_yaml(
  const Num & msg,
  std::ostream & out)
{
  out << "{";
  // member: num
  {
    out << "num: ";
    rosidl_generator_traits::value_to_yaml(msg.num, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Num & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num: ";
    rosidl_generator_traits::value_to_yaml(msg.num, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Num & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace create_message_types

namespace rosidl_generator_traits
{

[[deprecated("use create_message_types::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const create_message_types::msg::Num & msg,
  std::ostream & out, size_t indentation = 0)
{
  create_message_types::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use create_message_types::msg::to_yaml() instead")]]
inline std::string to_yaml(const create_message_types::msg::Num & msg)
{
  return create_message_types::msg::to_yaml(msg);
}

template<>
inline const char * data_type<create_message_types::msg::Num>()
{
  return "create_message_types::msg::Num";
}

template<>
inline const char * name<create_message_types::msg::Num>()
{
  return "create_message_types/msg/Num";
}

template<>
struct has_fixed_size<create_message_types::msg::Num>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<create_message_types::msg::Num>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<create_message_types::msg::Num>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CREATE_MESSAGE_TYPES__MSG__DETAIL__NUM__TRAITS_HPP_
