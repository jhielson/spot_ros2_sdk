// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from create_message_types:srv/AddThreeInts.idl
// generated code does not contain a copyright notice

#ifndef CREATE_MESSAGE_TYPES__SRV__DETAIL__ADD_THREE_INTS__BUILDER_HPP_
#define CREATE_MESSAGE_TYPES__SRV__DETAIL__ADD_THREE_INTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "create_message_types/srv/detail/add_three_ints__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace create_message_types
{

namespace srv
{

namespace builder
{

class Init_AddThreeInts_Request_c
{
public:
  explicit Init_AddThreeInts_Request_c(::create_message_types::srv::AddThreeInts_Request & msg)
  : msg_(msg)
  {}
  ::create_message_types::srv::AddThreeInts_Request c(::create_message_types::srv::AddThreeInts_Request::_c_type arg)
  {
    msg_.c = std::move(arg);
    return std::move(msg_);
  }

private:
  ::create_message_types::srv::AddThreeInts_Request msg_;
};

class Init_AddThreeInts_Request_b
{
public:
  explicit Init_AddThreeInts_Request_b(::create_message_types::srv::AddThreeInts_Request & msg)
  : msg_(msg)
  {}
  Init_AddThreeInts_Request_c b(::create_message_types::srv::AddThreeInts_Request::_b_type arg)
  {
    msg_.b = std::move(arg);
    return Init_AddThreeInts_Request_c(msg_);
  }

private:
  ::create_message_types::srv::AddThreeInts_Request msg_;
};

class Init_AddThreeInts_Request_a
{
public:
  Init_AddThreeInts_Request_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AddThreeInts_Request_b a(::create_message_types::srv::AddThreeInts_Request::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_AddThreeInts_Request_b(msg_);
  }

private:
  ::create_message_types::srv::AddThreeInts_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::create_message_types::srv::AddThreeInts_Request>()
{
  return create_message_types::srv::builder::Init_AddThreeInts_Request_a();
}

}  // namespace create_message_types


namespace create_message_types
{

namespace srv
{

namespace builder
{

class Init_AddThreeInts_Response_sum
{
public:
  Init_AddThreeInts_Response_sum()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::create_message_types::srv::AddThreeInts_Response sum(::create_message_types::srv::AddThreeInts_Response::_sum_type arg)
  {
    msg_.sum = std::move(arg);
    return std::move(msg_);
  }

private:
  ::create_message_types::srv::AddThreeInts_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::create_message_types::srv::AddThreeInts_Response>()
{
  return create_message_types::srv::builder::Init_AddThreeInts_Response_sum();
}

}  // namespace create_message_types

#endif  // CREATE_MESSAGE_TYPES__SRV__DETAIL__ADD_THREE_INTS__BUILDER_HPP_
