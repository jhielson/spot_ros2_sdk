// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from create_message_types:srv/Light.idl
// generated code does not contain a copyright notice
#include "create_message_types/srv/detail/light__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "create_message_types/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "create_message_types/srv/detail/light__struct.h"
#include "create_message_types/srv/detail/light__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // command, hostname, lighting_command, verbose
#include "rosidl_runtime_c/string_functions.h"  // command, hostname, lighting_command, verbose

// forward declare type support functions


using _Light_Request__ros_msg_type = create_message_types__srv__Light_Request;

static bool _Light_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Light_Request__ros_msg_type * ros_message = static_cast<const _Light_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: brightnesses_01
  {
    cdr << ros_message->brightnesses_01;
  }

  // Field name: brightnesses_02
  {
    cdr << ros_message->brightnesses_02;
  }

  // Field name: brightnesses_03
  {
    cdr << ros_message->brightnesses_03;
  }

  // Field name: brightnesses_04
  {
    cdr << ros_message->brightnesses_04;
  }

  // Field name: command
  {
    const rosidl_runtime_c__String * str = &ros_message->command;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: hostname
  {
    const rosidl_runtime_c__String * str = &ros_message->hostname;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: lighting_command
  {
    const rosidl_runtime_c__String * str = &ros_message->lighting_command;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: verbose
  {
    const rosidl_runtime_c__String * str = &ros_message->verbose;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _Light_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Light_Request__ros_msg_type * ros_message = static_cast<_Light_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: brightnesses_01
  {
    cdr >> ros_message->brightnesses_01;
  }

  // Field name: brightnesses_02
  {
    cdr >> ros_message->brightnesses_02;
  }

  // Field name: brightnesses_03
  {
    cdr >> ros_message->brightnesses_03;
  }

  // Field name: brightnesses_04
  {
    cdr >> ros_message->brightnesses_04;
  }

  // Field name: command
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->command.data) {
      rosidl_runtime_c__String__init(&ros_message->command);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->command,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'command'\n");
      return false;
    }
  }

  // Field name: hostname
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->hostname.data) {
      rosidl_runtime_c__String__init(&ros_message->hostname);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->hostname,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'hostname'\n");
      return false;
    }
  }

  // Field name: lighting_command
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->lighting_command.data) {
      rosidl_runtime_c__String__init(&ros_message->lighting_command);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->lighting_command,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'lighting_command'\n");
      return false;
    }
  }

  // Field name: verbose
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->verbose.data) {
      rosidl_runtime_c__String__init(&ros_message->verbose);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->verbose,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'verbose'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_create_message_types
size_t get_serialized_size_create_message_types__srv__Light_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Light_Request__ros_msg_type * ros_message = static_cast<const _Light_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name brightnesses_01
  {
    size_t item_size = sizeof(ros_message->brightnesses_01);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name brightnesses_02
  {
    size_t item_size = sizeof(ros_message->brightnesses_02);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name brightnesses_03
  {
    size_t item_size = sizeof(ros_message->brightnesses_03);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name brightnesses_04
  {
    size_t item_size = sizeof(ros_message->brightnesses_04);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name command
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->command.size + 1);
  // field.name hostname
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->hostname.size + 1);
  // field.name lighting_command
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->lighting_command.size + 1);
  // field.name verbose
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->verbose.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _Light_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_create_message_types__srv__Light_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_create_message_types
size_t max_serialized_size_create_message_types__srv__Light_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: brightnesses_01
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: brightnesses_02
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: brightnesses_03
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: brightnesses_04
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: command
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: hostname
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: lighting_command
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: verbose
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = create_message_types__srv__Light_Request;
    is_plain =
      (
      offsetof(DataType, verbose) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Light_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_create_message_types__srv__Light_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Light_Request = {
  "create_message_types::srv",
  "Light_Request",
  _Light_Request__cdr_serialize,
  _Light_Request__cdr_deserialize,
  _Light_Request__get_serialized_size,
  _Light_Request__max_serialized_size
};

static rosidl_message_type_support_t _Light_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Light_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, create_message_types, srv, Light_Request)() {
  return &_Light_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "create_message_types/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "create_message_types/srv/detail/light__struct.h"
// already included above
// #include "create_message_types/srv/detail/light__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _Light_Response__ros_msg_type = create_message_types__srv__Light_Response;

static bool _Light_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Light_Response__ros_msg_type * ros_message = static_cast<const _Light_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: result
  {
    cdr << (ros_message->result ? true : false);
  }

  return true;
}

static bool _Light_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Light_Response__ros_msg_type * ros_message = static_cast<_Light_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: result
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->result = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_create_message_types
size_t get_serialized_size_create_message_types__srv__Light_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Light_Response__ros_msg_type * ros_message = static_cast<const _Light_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name result
  {
    size_t item_size = sizeof(ros_message->result);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Light_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_create_message_types__srv__Light_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_create_message_types
size_t max_serialized_size_create_message_types__srv__Light_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: result
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = create_message_types__srv__Light_Response;
    is_plain =
      (
      offsetof(DataType, result) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Light_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_create_message_types__srv__Light_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Light_Response = {
  "create_message_types::srv",
  "Light_Response",
  _Light_Response__cdr_serialize,
  _Light_Response__cdr_deserialize,
  _Light_Response__get_serialized_size,
  _Light_Response__max_serialized_size
};

static rosidl_message_type_support_t _Light_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Light_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, create_message_types, srv, Light_Response)() {
  return &_Light_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "create_message_types/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "create_message_types/srv/light.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t Light__callbacks = {
  "create_message_types::srv",
  "Light",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, create_message_types, srv, Light_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, create_message_types, srv, Light_Response)(),
};

static rosidl_service_type_support_t Light__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &Light__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, create_message_types, srv, Light)() {
  return &Light__handle;
}

#if defined(__cplusplus)
}
#endif
