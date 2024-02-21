// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from create_message_types:msg/Num.idl
// generated code does not contain a copyright notice

#ifndef CREATE_MESSAGE_TYPES__MSG__DETAIL__NUM__BUILDER_HPP_
#define CREATE_MESSAGE_TYPES__MSG__DETAIL__NUM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "create_message_types/msg/detail/num__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace create_message_types
{

namespace msg
{

namespace builder
{

class Init_Num_num
{
public:
  Init_Num_num()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::create_message_types::msg::Num num(::create_message_types::msg::Num::_num_type arg)
  {
    msg_.num = std::move(arg);
    return std::move(msg_);
  }

private:
  ::create_message_types::msg::Num msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::create_message_types::msg::Num>()
{
  return create_message_types::msg::builder::Init_Num_num();
}

}  // namespace create_message_types

#endif  // CREATE_MESSAGE_TYPES__MSG__DETAIL__NUM__BUILDER_HPP_
