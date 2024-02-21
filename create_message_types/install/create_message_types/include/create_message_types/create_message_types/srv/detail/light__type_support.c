// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from create_message_types:srv/Light.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "create_message_types/srv/detail/light__rosidl_typesupport_introspection_c.h"
#include "create_message_types/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "create_message_types/srv/detail/light__functions.h"
#include "create_message_types/srv/detail/light__struct.h"


// Include directives for member types
// Member `command`
// Member `hostname`
// Member `lighting_command`
// Member `verbose`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void create_message_types__srv__Light_Request__rosidl_typesupport_introspection_c__Light_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  create_message_types__srv__Light_Request__init(message_memory);
}

void create_message_types__srv__Light_Request__rosidl_typesupport_introspection_c__Light_Request_fini_function(void * message_memory)
{
  create_message_types__srv__Light_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember create_message_types__srv__Light_Request__rosidl_typesupport_introspection_c__Light_Request_message_member_array[8] = {
  {
    "brightnesses_01",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(create_message_types__srv__Light_Request, brightnesses_01),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "brightnesses_02",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(create_message_types__srv__Light_Request, brightnesses_02),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "brightnesses_03",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(create_message_types__srv__Light_Request, brightnesses_03),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "brightnesses_04",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(create_message_types__srv__Light_Request, brightnesses_04),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "command",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(create_message_types__srv__Light_Request, command),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "hostname",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(create_message_types__srv__Light_Request, hostname),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lighting_command",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(create_message_types__srv__Light_Request, lighting_command),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "verbose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(create_message_types__srv__Light_Request, verbose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers create_message_types__srv__Light_Request__rosidl_typesupport_introspection_c__Light_Request_message_members = {
  "create_message_types__srv",  // message namespace
  "Light_Request",  // message name
  8,  // number of fields
  sizeof(create_message_types__srv__Light_Request),
  create_message_types__srv__Light_Request__rosidl_typesupport_introspection_c__Light_Request_message_member_array,  // message members
  create_message_types__srv__Light_Request__rosidl_typesupport_introspection_c__Light_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  create_message_types__srv__Light_Request__rosidl_typesupport_introspection_c__Light_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t create_message_types__srv__Light_Request__rosidl_typesupport_introspection_c__Light_Request_message_type_support_handle = {
  0,
  &create_message_types__srv__Light_Request__rosidl_typesupport_introspection_c__Light_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_create_message_types
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, create_message_types, srv, Light_Request)() {
  if (!create_message_types__srv__Light_Request__rosidl_typesupport_introspection_c__Light_Request_message_type_support_handle.typesupport_identifier) {
    create_message_types__srv__Light_Request__rosidl_typesupport_introspection_c__Light_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &create_message_types__srv__Light_Request__rosidl_typesupport_introspection_c__Light_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "create_message_types/srv/detail/light__rosidl_typesupport_introspection_c.h"
// already included above
// #include "create_message_types/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "create_message_types/srv/detail/light__functions.h"
// already included above
// #include "create_message_types/srv/detail/light__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void create_message_types__srv__Light_Response__rosidl_typesupport_introspection_c__Light_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  create_message_types__srv__Light_Response__init(message_memory);
}

void create_message_types__srv__Light_Response__rosidl_typesupport_introspection_c__Light_Response_fini_function(void * message_memory)
{
  create_message_types__srv__Light_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember create_message_types__srv__Light_Response__rosidl_typesupport_introspection_c__Light_Response_message_member_array[1] = {
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(create_message_types__srv__Light_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers create_message_types__srv__Light_Response__rosidl_typesupport_introspection_c__Light_Response_message_members = {
  "create_message_types__srv",  // message namespace
  "Light_Response",  // message name
  1,  // number of fields
  sizeof(create_message_types__srv__Light_Response),
  create_message_types__srv__Light_Response__rosidl_typesupport_introspection_c__Light_Response_message_member_array,  // message members
  create_message_types__srv__Light_Response__rosidl_typesupport_introspection_c__Light_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  create_message_types__srv__Light_Response__rosidl_typesupport_introspection_c__Light_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t create_message_types__srv__Light_Response__rosidl_typesupport_introspection_c__Light_Response_message_type_support_handle = {
  0,
  &create_message_types__srv__Light_Response__rosidl_typesupport_introspection_c__Light_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_create_message_types
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, create_message_types, srv, Light_Response)() {
  if (!create_message_types__srv__Light_Response__rosidl_typesupport_introspection_c__Light_Response_message_type_support_handle.typesupport_identifier) {
    create_message_types__srv__Light_Response__rosidl_typesupport_introspection_c__Light_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &create_message_types__srv__Light_Response__rosidl_typesupport_introspection_c__Light_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "create_message_types/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "create_message_types/srv/detail/light__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers create_message_types__srv__detail__light__rosidl_typesupport_introspection_c__Light_service_members = {
  "create_message_types__srv",  // service namespace
  "Light",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // create_message_types__srv__detail__light__rosidl_typesupport_introspection_c__Light_Request_message_type_support_handle,
  NULL  // response message
  // create_message_types__srv__detail__light__rosidl_typesupport_introspection_c__Light_Response_message_type_support_handle
};

static rosidl_service_type_support_t create_message_types__srv__detail__light__rosidl_typesupport_introspection_c__Light_service_type_support_handle = {
  0,
  &create_message_types__srv__detail__light__rosidl_typesupport_introspection_c__Light_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, create_message_types, srv, Light_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, create_message_types, srv, Light_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_create_message_types
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, create_message_types, srv, Light)() {
  if (!create_message_types__srv__detail__light__rosidl_typesupport_introspection_c__Light_service_type_support_handle.typesupport_identifier) {
    create_message_types__srv__detail__light__rosidl_typesupport_introspection_c__Light_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)create_message_types__srv__detail__light__rosidl_typesupport_introspection_c__Light_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, create_message_types, srv, Light_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, create_message_types, srv, Light_Response)()->data;
  }

  return &create_message_types__srv__detail__light__rosidl_typesupport_introspection_c__Light_service_type_support_handle;
}
