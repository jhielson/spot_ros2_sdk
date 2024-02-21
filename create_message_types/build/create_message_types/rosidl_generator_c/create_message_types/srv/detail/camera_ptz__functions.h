// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from create_message_types:srv/CameraPTZ.idl
// generated code does not contain a copyright notice

#ifndef CREATE_MESSAGE_TYPES__SRV__DETAIL__CAMERA_PTZ__FUNCTIONS_H_
#define CREATE_MESSAGE_TYPES__SRV__DETAIL__CAMERA_PTZ__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "create_message_types/msg/rosidl_generator_c__visibility_control.h"

#include "create_message_types/srv/detail/camera_ptz__struct.h"

/// Initialize srv/CameraPTZ message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * create_message_types__srv__CameraPTZ_Request
 * )) before or use
 * create_message_types__srv__CameraPTZ_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_create_message_types
bool
create_message_types__srv__CameraPTZ_Request__init(create_message_types__srv__CameraPTZ_Request * msg);

/// Finalize srv/CameraPTZ message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_create_message_types
void
create_message_types__srv__CameraPTZ_Request__fini(create_message_types__srv__CameraPTZ_Request * msg);

/// Create srv/CameraPTZ message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * create_message_types__srv__CameraPTZ_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_create_message_types
create_message_types__srv__CameraPTZ_Request *
create_message_types__srv__CameraPTZ_Request__create();

/// Destroy srv/CameraPTZ message.
/**
 * It calls
 * create_message_types__srv__CameraPTZ_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_create_message_types
void
create_message_types__srv__CameraPTZ_Request__destroy(create_message_types__srv__CameraPTZ_Request * msg);

/// Check for srv/CameraPTZ message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_create_message_types
bool
create_message_types__srv__CameraPTZ_Request__are_equal(const create_message_types__srv__CameraPTZ_Request * lhs, const create_message_types__srv__CameraPTZ_Request * rhs);

/// Copy a srv/CameraPTZ message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_create_message_types
bool
create_message_types__srv__CameraPTZ_Request__copy(
  const create_message_types__srv__CameraPTZ_Request * input,
  create_message_types__srv__CameraPTZ_Request * output);

/// Initialize array of srv/CameraPTZ messages.
/**
 * It allocates the memory for the number of elements and calls
 * create_message_types__srv__CameraPTZ_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_create_message_types
bool
create_message_types__srv__CameraPTZ_Request__Sequence__init(create_message_types__srv__CameraPTZ_Request__Sequence * array, size_t size);

/// Finalize array of srv/CameraPTZ messages.
/**
 * It calls
 * create_message_types__srv__CameraPTZ_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_create_message_types
void
create_message_types__srv__CameraPTZ_Request__Sequence__fini(create_message_types__srv__CameraPTZ_Request__Sequence * array);

/// Create array of srv/CameraPTZ messages.
/**
 * It allocates the memory for the array and calls
 * create_message_types__srv__CameraPTZ_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_create_message_types
create_message_types__srv__CameraPTZ_Request__Sequence *
create_message_types__srv__CameraPTZ_Request__Sequence__create(size_t size);

/// Destroy array of srv/CameraPTZ messages.
/**
 * It calls
 * create_message_types__srv__CameraPTZ_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_create_message_types
void
create_message_types__srv__CameraPTZ_Request__Sequence__destroy(create_message_types__srv__CameraPTZ_Request__Sequence * array);

/// Check for srv/CameraPTZ message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_create_message_types
bool
create_message_types__srv__CameraPTZ_Request__Sequence__are_equal(const create_message_types__srv__CameraPTZ_Request__Sequence * lhs, const create_message_types__srv__CameraPTZ_Request__Sequence * rhs);

/// Copy an array of srv/CameraPTZ messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_create_message_types
bool
create_message_types__srv__CameraPTZ_Request__Sequence__copy(
  const create_message_types__srv__CameraPTZ_Request__Sequence * input,
  create_message_types__srv__CameraPTZ_Request__Sequence * output);

/// Initialize srv/CameraPTZ message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * create_message_types__srv__CameraPTZ_Response
 * )) before or use
 * create_message_types__srv__CameraPTZ_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_create_message_types
bool
create_message_types__srv__CameraPTZ_Response__init(create_message_types__srv__CameraPTZ_Response * msg);

/// Finalize srv/CameraPTZ message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_create_message_types
void
create_message_types__srv__CameraPTZ_Response__fini(create_message_types__srv__CameraPTZ_Response * msg);

/// Create srv/CameraPTZ message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * create_message_types__srv__CameraPTZ_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_create_message_types
create_message_types__srv__CameraPTZ_Response *
create_message_types__srv__CameraPTZ_Response__create();

/// Destroy srv/CameraPTZ message.
/**
 * It calls
 * create_message_types__srv__CameraPTZ_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_create_message_types
void
create_message_types__srv__CameraPTZ_Response__destroy(create_message_types__srv__CameraPTZ_Response * msg);

/// Check for srv/CameraPTZ message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_create_message_types
bool
create_message_types__srv__CameraPTZ_Response__are_equal(const create_message_types__srv__CameraPTZ_Response * lhs, const create_message_types__srv__CameraPTZ_Response * rhs);

/// Copy a srv/CameraPTZ message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_create_message_types
bool
create_message_types__srv__CameraPTZ_Response__copy(
  const create_message_types__srv__CameraPTZ_Response * input,
  create_message_types__srv__CameraPTZ_Response * output);

/// Initialize array of srv/CameraPTZ messages.
/**
 * It allocates the memory for the number of elements and calls
 * create_message_types__srv__CameraPTZ_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_create_message_types
bool
create_message_types__srv__CameraPTZ_Response__Sequence__init(create_message_types__srv__CameraPTZ_Response__Sequence * array, size_t size);

/// Finalize array of srv/CameraPTZ messages.
/**
 * It calls
 * create_message_types__srv__CameraPTZ_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_create_message_types
void
create_message_types__srv__CameraPTZ_Response__Sequence__fini(create_message_types__srv__CameraPTZ_Response__Sequence * array);

/// Create array of srv/CameraPTZ messages.
/**
 * It allocates the memory for the array and calls
 * create_message_types__srv__CameraPTZ_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_create_message_types
create_message_types__srv__CameraPTZ_Response__Sequence *
create_message_types__srv__CameraPTZ_Response__Sequence__create(size_t size);

/// Destroy array of srv/CameraPTZ messages.
/**
 * It calls
 * create_message_types__srv__CameraPTZ_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_create_message_types
void
create_message_types__srv__CameraPTZ_Response__Sequence__destroy(create_message_types__srv__CameraPTZ_Response__Sequence * array);

/// Check for srv/CameraPTZ message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_create_message_types
bool
create_message_types__srv__CameraPTZ_Response__Sequence__are_equal(const create_message_types__srv__CameraPTZ_Response__Sequence * lhs, const create_message_types__srv__CameraPTZ_Response__Sequence * rhs);

/// Copy an array of srv/CameraPTZ messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_create_message_types
bool
create_message_types__srv__CameraPTZ_Response__Sequence__copy(
  const create_message_types__srv__CameraPTZ_Response__Sequence * input,
  create_message_types__srv__CameraPTZ_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CREATE_MESSAGE_TYPES__SRV__DETAIL__CAMERA_PTZ__FUNCTIONS_H_
