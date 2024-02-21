// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from create_message_types:msg/Num.idl
// generated code does not contain a copyright notice

#ifndef CREATE_MESSAGE_TYPES__MSG__DETAIL__NUM__STRUCT_H_
#define CREATE_MESSAGE_TYPES__MSG__DETAIL__NUM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Num in the package create_message_types.
typedef struct create_message_types__msg__Num
{
  int64_t num;
} create_message_types__msg__Num;

// Struct for a sequence of create_message_types__msg__Num.
typedef struct create_message_types__msg__Num__Sequence
{
  create_message_types__msg__Num * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} create_message_types__msg__Num__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CREATE_MESSAGE_TYPES__MSG__DETAIL__NUM__STRUCT_H_
