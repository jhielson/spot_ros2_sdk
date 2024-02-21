// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from create_message_types:srv/Light.idl
// generated code does not contain a copyright notice

#ifndef CREATE_MESSAGE_TYPES__SRV__DETAIL__LIGHT__BUILDER_HPP_
#define CREATE_MESSAGE_TYPES__SRV__DETAIL__LIGHT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "create_message_types/srv/detail/light__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace create_message_types
{

namespace srv
{

namespace builder
{

class Init_Light_Request_verbose
{
public:
  explicit Init_Light_Request_verbose(::create_message_types::srv::Light_Request & msg)
  : msg_(msg)
  {}
  ::create_message_types::srv::Light_Request verbose(::create_message_types::srv::Light_Request::_verbose_type arg)
  {
    msg_.verbose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::create_message_types::srv::Light_Request msg_;
};

class Init_Light_Request_lighting_command
{
public:
  explicit Init_Light_Request_lighting_command(::create_message_types::srv::Light_Request & msg)
  : msg_(msg)
  {}
  Init_Light_Request_verbose lighting_command(::create_message_types::srv::Light_Request::_lighting_command_type arg)
  {
    msg_.lighting_command = std::move(arg);
    return Init_Light_Request_verbose(msg_);
  }

private:
  ::create_message_types::srv::Light_Request msg_;
};

class Init_Light_Request_hostname
{
public:
  explicit Init_Light_Request_hostname(::create_message_types::srv::Light_Request & msg)
  : msg_(msg)
  {}
  Init_Light_Request_lighting_command hostname(::create_message_types::srv::Light_Request::_hostname_type arg)
  {
    msg_.hostname = std::move(arg);
    return Init_Light_Request_lighting_command(msg_);
  }

private:
  ::create_message_types::srv::Light_Request msg_;
};

class Init_Light_Request_command
{
public:
  explicit Init_Light_Request_command(::create_message_types::srv::Light_Request & msg)
  : msg_(msg)
  {}
  Init_Light_Request_hostname command(::create_message_types::srv::Light_Request::_command_type arg)
  {
    msg_.command = std::move(arg);
    return Init_Light_Request_hostname(msg_);
  }

private:
  ::create_message_types::srv::Light_Request msg_;
};

class Init_Light_Request_brightnesses_04
{
public:
  explicit Init_Light_Request_brightnesses_04(::create_message_types::srv::Light_Request & msg)
  : msg_(msg)
  {}
  Init_Light_Request_command brightnesses_04(::create_message_types::srv::Light_Request::_brightnesses_04_type arg)
  {
    msg_.brightnesses_04 = std::move(arg);
    return Init_Light_Request_command(msg_);
  }

private:
  ::create_message_types::srv::Light_Request msg_;
};

class Init_Light_Request_brightnesses_03
{
public:
  explicit Init_Light_Request_brightnesses_03(::create_message_types::srv::Light_Request & msg)
  : msg_(msg)
  {}
  Init_Light_Request_brightnesses_04 brightnesses_03(::create_message_types::srv::Light_Request::_brightnesses_03_type arg)
  {
    msg_.brightnesses_03 = std::move(arg);
    return Init_Light_Request_brightnesses_04(msg_);
  }

private:
  ::create_message_types::srv::Light_Request msg_;
};

class Init_Light_Request_brightnesses_02
{
public:
  explicit Init_Light_Request_brightnesses_02(::create_message_types::srv::Light_Request & msg)
  : msg_(msg)
  {}
  Init_Light_Request_brightnesses_03 brightnesses_02(::create_message_types::srv::Light_Request::_brightnesses_02_type arg)
  {
    msg_.brightnesses_02 = std::move(arg);
    return Init_Light_Request_brightnesses_03(msg_);
  }

private:
  ::create_message_types::srv::Light_Request msg_;
};

class Init_Light_Request_brightnesses_01
{
public:
  Init_Light_Request_brightnesses_01()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Light_Request_brightnesses_02 brightnesses_01(::create_message_types::srv::Light_Request::_brightnesses_01_type arg)
  {
    msg_.brightnesses_01 = std::move(arg);
    return Init_Light_Request_brightnesses_02(msg_);
  }

private:
  ::create_message_types::srv::Light_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::create_message_types::srv::Light_Request>()
{
  return create_message_types::srv::builder::Init_Light_Request_brightnesses_01();
}

}  // namespace create_message_types


namespace create_message_types
{

namespace srv
{

namespace builder
{

class Init_Light_Response_result
{
public:
  Init_Light_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::create_message_types::srv::Light_Response result(::create_message_types::srv::Light_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::create_message_types::srv::Light_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::create_message_types::srv::Light_Response>()
{
  return create_message_types::srv::builder::Init_Light_Response_result();
}

}  // namespace create_message_types

#endif  // CREATE_MESSAGE_TYPES__SRV__DETAIL__LIGHT__BUILDER_HPP_
