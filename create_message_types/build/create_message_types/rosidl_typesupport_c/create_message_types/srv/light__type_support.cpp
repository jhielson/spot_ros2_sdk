// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from create_message_types:srv/Light.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "create_message_types/srv/detail/light__struct.h"
#include "create_message_types/srv/detail/light__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace create_message_types
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _Light_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Light_Request_type_support_ids_t;

static const _Light_Request_type_support_ids_t _Light_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Light_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Light_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Light_Request_type_support_symbol_names_t _Light_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, create_message_types, srv, Light_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, create_message_types, srv, Light_Request)),
  }
};

typedef struct _Light_Request_type_support_data_t
{
  void * data[2];
} _Light_Request_type_support_data_t;

static _Light_Request_type_support_data_t _Light_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Light_Request_message_typesupport_map = {
  2,
  "create_message_types",
  &_Light_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Light_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Light_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Light_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Light_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace create_message_types

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, create_message_types, srv, Light_Request)() {
  return &::create_message_types::srv::rosidl_typesupport_c::Light_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "create_message_types/srv/detail/light__struct.h"
// already included above
// #include "create_message_types/srv/detail/light__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace create_message_types
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _Light_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Light_Response_type_support_ids_t;

static const _Light_Response_type_support_ids_t _Light_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Light_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Light_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Light_Response_type_support_symbol_names_t _Light_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, create_message_types, srv, Light_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, create_message_types, srv, Light_Response)),
  }
};

typedef struct _Light_Response_type_support_data_t
{
  void * data[2];
} _Light_Response_type_support_data_t;

static _Light_Response_type_support_data_t _Light_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Light_Response_message_typesupport_map = {
  2,
  "create_message_types",
  &_Light_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Light_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Light_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Light_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Light_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace create_message_types

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, create_message_types, srv, Light_Response)() {
  return &::create_message_types::srv::rosidl_typesupport_c::Light_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "create_message_types/srv/detail/light__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace create_message_types
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _Light_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Light_type_support_ids_t;

static const _Light_type_support_ids_t _Light_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Light_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Light_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Light_type_support_symbol_names_t _Light_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, create_message_types, srv, Light)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, create_message_types, srv, Light)),
  }
};

typedef struct _Light_type_support_data_t
{
  void * data[2];
} _Light_type_support_data_t;

static _Light_type_support_data_t _Light_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Light_service_typesupport_map = {
  2,
  "create_message_types",
  &_Light_service_typesupport_ids.typesupport_identifier[0],
  &_Light_service_typesupport_symbol_names.symbol_name[0],
  &_Light_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Light_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Light_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace create_message_types

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, create_message_types, srv, Light)() {
  return &::create_message_types::srv::rosidl_typesupport_c::Light_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
