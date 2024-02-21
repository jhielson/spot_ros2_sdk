// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from create_message_types:srv/Camera.idl
// generated code does not contain a copyright notice

#ifndef CREATE_MESSAGE_TYPES__SRV__DETAIL__CAMERA__STRUCT_H_
#define CREATE_MESSAGE_TYPES__SRV__DETAIL__CAMERA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'camera_name'
// Member 'command'
// Member 'hostname'
// Member 'media_log_command'
// Member 'verbose'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Camera in the package create_message_types.
typedef struct create_message_types__srv__Camera_Request
{
  rosidl_runtime_c__String camera_name;
  rosidl_runtime_c__String command;
  rosidl_runtime_c__String hostname;
  rosidl_runtime_c__String media_log_command;
  rosidl_runtime_c__String verbose;
} create_message_types__srv__Camera_Request;

// Struct for a sequence of create_message_types__srv__Camera_Request.
typedef struct create_message_types__srv__Camera_Request__Sequence
{
  create_message_types__srv__Camera_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} create_message_types__srv__Camera_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/Camera in the package create_message_types.
typedef struct create_message_types__srv__Camera_Response
{
  bool result;
} create_message_types__srv__Camera_Response;

// Struct for a sequence of create_message_types__srv__Camera_Response.
typedef struct create_message_types__srv__Camera_Response__Sequence
{
  create_message_types__srv__Camera_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} create_message_types__srv__Camera_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CREATE_MESSAGE_TYPES__SRV__DETAIL__CAMERA__STRUCT_H_
