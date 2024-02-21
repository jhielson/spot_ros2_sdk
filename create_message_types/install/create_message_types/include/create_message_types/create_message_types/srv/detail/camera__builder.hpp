// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from create_message_types:srv/Camera.idl
// generated code does not contain a copyright notice

#ifndef CREATE_MESSAGE_TYPES__SRV__DETAIL__CAMERA__BUILDER_HPP_
#define CREATE_MESSAGE_TYPES__SRV__DETAIL__CAMERA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "create_message_types/srv/detail/camera__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace create_message_types
{

namespace srv
{

namespace builder
{

class Init_Camera_Request_verbose
{
public:
  explicit Init_Camera_Request_verbose(::create_message_types::srv::Camera_Request & msg)
  : msg_(msg)
  {}
  ::create_message_types::srv::Camera_Request verbose(::create_message_types::srv::Camera_Request::_verbose_type arg)
  {
    msg_.verbose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::create_message_types::srv::Camera_Request msg_;
};

class Init_Camera_Request_media_log_command
{
public:
  explicit Init_Camera_Request_media_log_command(::create_message_types::srv::Camera_Request & msg)
  : msg_(msg)
  {}
  Init_Camera_Request_verbose media_log_command(::create_message_types::srv::Camera_Request::_media_log_command_type arg)
  {
    msg_.media_log_command = std::move(arg);
    return Init_Camera_Request_verbose(msg_);
  }

private:
  ::create_message_types::srv::Camera_Request msg_;
};

class Init_Camera_Request_hostname
{
public:
  explicit Init_Camera_Request_hostname(::create_message_types::srv::Camera_Request & msg)
  : msg_(msg)
  {}
  Init_Camera_Request_media_log_command hostname(::create_message_types::srv::Camera_Request::_hostname_type arg)
  {
    msg_.hostname = std::move(arg);
    return Init_Camera_Request_media_log_command(msg_);
  }

private:
  ::create_message_types::srv::Camera_Request msg_;
};

class Init_Camera_Request_command
{
public:
  explicit Init_Camera_Request_command(::create_message_types::srv::Camera_Request & msg)
  : msg_(msg)
  {}
  Init_Camera_Request_hostname command(::create_message_types::srv::Camera_Request::_command_type arg)
  {
    msg_.command = std::move(arg);
    return Init_Camera_Request_hostname(msg_);
  }

private:
  ::create_message_types::srv::Camera_Request msg_;
};

class Init_Camera_Request_camera_name
{
public:
  Init_Camera_Request_camera_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Camera_Request_command camera_name(::create_message_types::srv::Camera_Request::_camera_name_type arg)
  {
    msg_.camera_name = std::move(arg);
    return Init_Camera_Request_command(msg_);
  }

private:
  ::create_message_types::srv::Camera_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::create_message_types::srv::Camera_Request>()
{
  return create_message_types::srv::builder::Init_Camera_Request_camera_name();
}

}  // namespace create_message_types


namespace create_message_types
{

namespace srv
{

namespace builder
{

class Init_Camera_Response_result
{
public:
  Init_Camera_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::create_message_types::srv::Camera_Response result(::create_message_types::srv::Camera_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::create_message_types::srv::Camera_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::create_message_types::srv::Camera_Response>()
{
  return create_message_types::srv::builder::Init_Camera_Response_result();
}

}  // namespace create_message_types

#endif  // CREATE_MESSAGE_TYPES__SRV__DETAIL__CAMERA__BUILDER_HPP_
