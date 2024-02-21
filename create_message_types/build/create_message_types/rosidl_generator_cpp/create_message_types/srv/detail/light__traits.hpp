// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from create_message_types:srv/Light.idl
// generated code does not contain a copyright notice

#ifndef CREATE_MESSAGE_TYPES__SRV__DETAIL__LIGHT__TRAITS_HPP_
#define CREATE_MESSAGE_TYPES__SRV__DETAIL__LIGHT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "create_message_types/srv/detail/light__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace create_message_types
{

namespace srv
{

inline void to_flow_style_yaml(
  const Light_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: brightnesses_01
  {
    out << "brightnesses_01: ";
    rosidl_generator_traits::value_to_yaml(msg.brightnesses_01, out);
    out << ", ";
  }

  // member: brightnesses_02
  {
    out << "brightnesses_02: ";
    rosidl_generator_traits::value_to_yaml(msg.brightnesses_02, out);
    out << ", ";
  }

  // member: brightnesses_03
  {
    out << "brightnesses_03: ";
    rosidl_generator_traits::value_to_yaml(msg.brightnesses_03, out);
    out << ", ";
  }

  // member: brightnesses_04
  {
    out << "brightnesses_04: ";
    rosidl_generator_traits::value_to_yaml(msg.brightnesses_04, out);
    out << ", ";
  }

  // member: command
  {
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
    out << ", ";
  }

  // member: hostname
  {
    out << "hostname: ";
    rosidl_generator_traits::value_to_yaml(msg.hostname, out);
    out << ", ";
  }

  // member: lighting_command
  {
    out << "lighting_command: ";
    rosidl_generator_traits::value_to_yaml(msg.lighting_command, out);
    out << ", ";
  }

  // member: verbose
  {
    out << "verbose: ";
    rosidl_generator_traits::value_to_yaml(msg.verbose, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Light_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: brightnesses_01
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brightnesses_01: ";
    rosidl_generator_traits::value_to_yaml(msg.brightnesses_01, out);
    out << "\n";
  }

  // member: brightnesses_02
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brightnesses_02: ";
    rosidl_generator_traits::value_to_yaml(msg.brightnesses_02, out);
    out << "\n";
  }

  // member: brightnesses_03
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brightnesses_03: ";
    rosidl_generator_traits::value_to_yaml(msg.brightnesses_03, out);
    out << "\n";
  }

  // member: brightnesses_04
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brightnesses_04: ";
    rosidl_generator_traits::value_to_yaml(msg.brightnesses_04, out);
    out << "\n";
  }

  // member: command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
    out << "\n";
  }

  // member: hostname
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hostname: ";
    rosidl_generator_traits::value_to_yaml(msg.hostname, out);
    out << "\n";
  }

  // member: lighting_command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lighting_command: ";
    rosidl_generator_traits::value_to_yaml(msg.lighting_command, out);
    out << "\n";
  }

  // member: verbose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "verbose: ";
    rosidl_generator_traits::value_to_yaml(msg.verbose, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Light_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace create_message_types

namespace rosidl_generator_traits
{

[[deprecated("use create_message_types::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const create_message_types::srv::Light_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  create_message_types::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use create_message_types::srv::to_yaml() instead")]]
inline std::string to_yaml(const create_message_types::srv::Light_Request & msg)
{
  return create_message_types::srv::to_yaml(msg);
}

template<>
inline const char * data_type<create_message_types::srv::Light_Request>()
{
  return "create_message_types::srv::Light_Request";
}

template<>
inline const char * name<create_message_types::srv::Light_Request>()
{
  return "create_message_types/srv/Light_Request";
}

template<>
struct has_fixed_size<create_message_types::srv::Light_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<create_message_types::srv::Light_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<create_message_types::srv::Light_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace create_message_types
{

namespace srv
{

inline void to_flow_style_yaml(
  const Light_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: result
  {
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Light_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Light_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace create_message_types

namespace rosidl_generator_traits
{

[[deprecated("use create_message_types::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const create_message_types::srv::Light_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  create_message_types::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use create_message_types::srv::to_yaml() instead")]]
inline std::string to_yaml(const create_message_types::srv::Light_Response & msg)
{
  return create_message_types::srv::to_yaml(msg);
}

template<>
inline const char * data_type<create_message_types::srv::Light_Response>()
{
  return "create_message_types::srv::Light_Response";
}

template<>
inline const char * name<create_message_types::srv::Light_Response>()
{
  return "create_message_types/srv/Light_Response";
}

template<>
struct has_fixed_size<create_message_types::srv::Light_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<create_message_types::srv::Light_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<create_message_types::srv::Light_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<create_message_types::srv::Light>()
{
  return "create_message_types::srv::Light";
}

template<>
inline const char * name<create_message_types::srv::Light>()
{
  return "create_message_types/srv/Light";
}

template<>
struct has_fixed_size<create_message_types::srv::Light>
  : std::integral_constant<
    bool,
    has_fixed_size<create_message_types::srv::Light_Request>::value &&
    has_fixed_size<create_message_types::srv::Light_Response>::value
  >
{
};

template<>
struct has_bounded_size<create_message_types::srv::Light>
  : std::integral_constant<
    bool,
    has_bounded_size<create_message_types::srv::Light_Request>::value &&
    has_bounded_size<create_message_types::srv::Light_Response>::value
  >
{
};

template<>
struct is_service<create_message_types::srv::Light>
  : std::true_type
{
};

template<>
struct is_service_request<create_message_types::srv::Light_Request>
  : std::true_type
{
};

template<>
struct is_service_response<create_message_types::srv::Light_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CREATE_MESSAGE_TYPES__SRV__DETAIL__LIGHT__TRAITS_HPP_
