// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from create_message_types:srv/Camera.idl
// generated code does not contain a copyright notice

#ifndef CREATE_MESSAGE_TYPES__SRV__DETAIL__CAMERA__TRAITS_HPP_
#define CREATE_MESSAGE_TYPES__SRV__DETAIL__CAMERA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "create_message_types/srv/detail/camera__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace create_message_types
{

namespace srv
{

inline void to_flow_style_yaml(
  const Camera_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: camera_name
  {
    out << "camera_name: ";
    rosidl_generator_traits::value_to_yaml(msg.camera_name, out);
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

  // member: media_log_command
  {
    out << "media_log_command: ";
    rosidl_generator_traits::value_to_yaml(msg.media_log_command, out);
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
  const Camera_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: camera_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "camera_name: ";
    rosidl_generator_traits::value_to_yaml(msg.camera_name, out);
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

  // member: media_log_command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "media_log_command: ";
    rosidl_generator_traits::value_to_yaml(msg.media_log_command, out);
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

inline std::string to_yaml(const Camera_Request & msg, bool use_flow_style = false)
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
  const create_message_types::srv::Camera_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  create_message_types::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use create_message_types::srv::to_yaml() instead")]]
inline std::string to_yaml(const create_message_types::srv::Camera_Request & msg)
{
  return create_message_types::srv::to_yaml(msg);
}

template<>
inline const char * data_type<create_message_types::srv::Camera_Request>()
{
  return "create_message_types::srv::Camera_Request";
}

template<>
inline const char * name<create_message_types::srv::Camera_Request>()
{
  return "create_message_types/srv/Camera_Request";
}

template<>
struct has_fixed_size<create_message_types::srv::Camera_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<create_message_types::srv::Camera_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<create_message_types::srv::Camera_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace create_message_types
{

namespace srv
{

inline void to_flow_style_yaml(
  const Camera_Response & msg,
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
  const Camera_Response & msg,
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

inline std::string to_yaml(const Camera_Response & msg, bool use_flow_style = false)
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
  const create_message_types::srv::Camera_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  create_message_types::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use create_message_types::srv::to_yaml() instead")]]
inline std::string to_yaml(const create_message_types::srv::Camera_Response & msg)
{
  return create_message_types::srv::to_yaml(msg);
}

template<>
inline const char * data_type<create_message_types::srv::Camera_Response>()
{
  return "create_message_types::srv::Camera_Response";
}

template<>
inline const char * name<create_message_types::srv::Camera_Response>()
{
  return "create_message_types/srv/Camera_Response";
}

template<>
struct has_fixed_size<create_message_types::srv::Camera_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<create_message_types::srv::Camera_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<create_message_types::srv::Camera_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<create_message_types::srv::Camera>()
{
  return "create_message_types::srv::Camera";
}

template<>
inline const char * name<create_message_types::srv::Camera>()
{
  return "create_message_types/srv/Camera";
}

template<>
struct has_fixed_size<create_message_types::srv::Camera>
  : std::integral_constant<
    bool,
    has_fixed_size<create_message_types::srv::Camera_Request>::value &&
    has_fixed_size<create_message_types::srv::Camera_Response>::value
  >
{
};

template<>
struct has_bounded_size<create_message_types::srv::Camera>
  : std::integral_constant<
    bool,
    has_bounded_size<create_message_types::srv::Camera_Request>::value &&
    has_bounded_size<create_message_types::srv::Camera_Response>::value
  >
{
};

template<>
struct is_service<create_message_types::srv::Camera>
  : std::true_type
{
};

template<>
struct is_service_request<create_message_types::srv::Camera_Request>
  : std::true_type
{
};

template<>
struct is_service_response<create_message_types::srv::Camera_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CREATE_MESSAGE_TYPES__SRV__DETAIL__CAMERA__TRAITS_HPP_
