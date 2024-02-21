// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from create_message_types:srv/CameraPTZ.idl
// generated code does not contain a copyright notice
#include "create_message_types/srv/detail/camera_ptz__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `camera_name`
// Member `command`
// Member `hostname`
// Member `media_log_command`
// Member `verbose`
#include "rosidl_runtime_c/string_functions.h"

bool
create_message_types__srv__CameraPTZ_Request__init(create_message_types__srv__CameraPTZ_Request * msg)
{
  if (!msg) {
    return false;
  }
  // camera_name
  if (!rosidl_runtime_c__String__init(&msg->camera_name)) {
    create_message_types__srv__CameraPTZ_Request__fini(msg);
    return false;
  }
  // command
  if (!rosidl_runtime_c__String__init(&msg->command)) {
    create_message_types__srv__CameraPTZ_Request__fini(msg);
    return false;
  }
  // hostname
  if (!rosidl_runtime_c__String__init(&msg->hostname)) {
    create_message_types__srv__CameraPTZ_Request__fini(msg);
    return false;
  }
  // media_log_command
  if (!rosidl_runtime_c__String__init(&msg->media_log_command)) {
    create_message_types__srv__CameraPTZ_Request__fini(msg);
    return false;
  }
  // verbose
  if (!rosidl_runtime_c__String__init(&msg->verbose)) {
    create_message_types__srv__CameraPTZ_Request__fini(msg);
    return false;
  }
  return true;
}

void
create_message_types__srv__CameraPTZ_Request__fini(create_message_types__srv__CameraPTZ_Request * msg)
{
  if (!msg) {
    return;
  }
  // camera_name
  rosidl_runtime_c__String__fini(&msg->camera_name);
  // command
  rosidl_runtime_c__String__fini(&msg->command);
  // hostname
  rosidl_runtime_c__String__fini(&msg->hostname);
  // media_log_command
  rosidl_runtime_c__String__fini(&msg->media_log_command);
  // verbose
  rosidl_runtime_c__String__fini(&msg->verbose);
}

bool
create_message_types__srv__CameraPTZ_Request__are_equal(const create_message_types__srv__CameraPTZ_Request * lhs, const create_message_types__srv__CameraPTZ_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // camera_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->camera_name), &(rhs->camera_name)))
  {
    return false;
  }
  // command
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->command), &(rhs->command)))
  {
    return false;
  }
  // hostname
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->hostname), &(rhs->hostname)))
  {
    return false;
  }
  // media_log_command
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->media_log_command), &(rhs->media_log_command)))
  {
    return false;
  }
  // verbose
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->verbose), &(rhs->verbose)))
  {
    return false;
  }
  return true;
}

bool
create_message_types__srv__CameraPTZ_Request__copy(
  const create_message_types__srv__CameraPTZ_Request * input,
  create_message_types__srv__CameraPTZ_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // camera_name
  if (!rosidl_runtime_c__String__copy(
      &(input->camera_name), &(output->camera_name)))
  {
    return false;
  }
  // command
  if (!rosidl_runtime_c__String__copy(
      &(input->command), &(output->command)))
  {
    return false;
  }
  // hostname
  if (!rosidl_runtime_c__String__copy(
      &(input->hostname), &(output->hostname)))
  {
    return false;
  }
  // media_log_command
  if (!rosidl_runtime_c__String__copy(
      &(input->media_log_command), &(output->media_log_command)))
  {
    return false;
  }
  // verbose
  if (!rosidl_runtime_c__String__copy(
      &(input->verbose), &(output->verbose)))
  {
    return false;
  }
  return true;
}

create_message_types__srv__CameraPTZ_Request *
create_message_types__srv__CameraPTZ_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  create_message_types__srv__CameraPTZ_Request * msg = (create_message_types__srv__CameraPTZ_Request *)allocator.allocate(sizeof(create_message_types__srv__CameraPTZ_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(create_message_types__srv__CameraPTZ_Request));
  bool success = create_message_types__srv__CameraPTZ_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
create_message_types__srv__CameraPTZ_Request__destroy(create_message_types__srv__CameraPTZ_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    create_message_types__srv__CameraPTZ_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
create_message_types__srv__CameraPTZ_Request__Sequence__init(create_message_types__srv__CameraPTZ_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  create_message_types__srv__CameraPTZ_Request * data = NULL;

  if (size) {
    data = (create_message_types__srv__CameraPTZ_Request *)allocator.zero_allocate(size, sizeof(create_message_types__srv__CameraPTZ_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = create_message_types__srv__CameraPTZ_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        create_message_types__srv__CameraPTZ_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
create_message_types__srv__CameraPTZ_Request__Sequence__fini(create_message_types__srv__CameraPTZ_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      create_message_types__srv__CameraPTZ_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

create_message_types__srv__CameraPTZ_Request__Sequence *
create_message_types__srv__CameraPTZ_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  create_message_types__srv__CameraPTZ_Request__Sequence * array = (create_message_types__srv__CameraPTZ_Request__Sequence *)allocator.allocate(sizeof(create_message_types__srv__CameraPTZ_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = create_message_types__srv__CameraPTZ_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
create_message_types__srv__CameraPTZ_Request__Sequence__destroy(create_message_types__srv__CameraPTZ_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    create_message_types__srv__CameraPTZ_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
create_message_types__srv__CameraPTZ_Request__Sequence__are_equal(const create_message_types__srv__CameraPTZ_Request__Sequence * lhs, const create_message_types__srv__CameraPTZ_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!create_message_types__srv__CameraPTZ_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
create_message_types__srv__CameraPTZ_Request__Sequence__copy(
  const create_message_types__srv__CameraPTZ_Request__Sequence * input,
  create_message_types__srv__CameraPTZ_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(create_message_types__srv__CameraPTZ_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    create_message_types__srv__CameraPTZ_Request * data =
      (create_message_types__srv__CameraPTZ_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!create_message_types__srv__CameraPTZ_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          create_message_types__srv__CameraPTZ_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!create_message_types__srv__CameraPTZ_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
create_message_types__srv__CameraPTZ_Response__init(create_message_types__srv__CameraPTZ_Response * msg)
{
  if (!msg) {
    return false;
  }
  // result
  return true;
}

void
create_message_types__srv__CameraPTZ_Response__fini(create_message_types__srv__CameraPTZ_Response * msg)
{
  if (!msg) {
    return;
  }
  // result
}

bool
create_message_types__srv__CameraPTZ_Response__are_equal(const create_message_types__srv__CameraPTZ_Response * lhs, const create_message_types__srv__CameraPTZ_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // result
  if (lhs->result != rhs->result) {
    return false;
  }
  return true;
}

bool
create_message_types__srv__CameraPTZ_Response__copy(
  const create_message_types__srv__CameraPTZ_Response * input,
  create_message_types__srv__CameraPTZ_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // result
  output->result = input->result;
  return true;
}

create_message_types__srv__CameraPTZ_Response *
create_message_types__srv__CameraPTZ_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  create_message_types__srv__CameraPTZ_Response * msg = (create_message_types__srv__CameraPTZ_Response *)allocator.allocate(sizeof(create_message_types__srv__CameraPTZ_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(create_message_types__srv__CameraPTZ_Response));
  bool success = create_message_types__srv__CameraPTZ_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
create_message_types__srv__CameraPTZ_Response__destroy(create_message_types__srv__CameraPTZ_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    create_message_types__srv__CameraPTZ_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
create_message_types__srv__CameraPTZ_Response__Sequence__init(create_message_types__srv__CameraPTZ_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  create_message_types__srv__CameraPTZ_Response * data = NULL;

  if (size) {
    data = (create_message_types__srv__CameraPTZ_Response *)allocator.zero_allocate(size, sizeof(create_message_types__srv__CameraPTZ_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = create_message_types__srv__CameraPTZ_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        create_message_types__srv__CameraPTZ_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
create_message_types__srv__CameraPTZ_Response__Sequence__fini(create_message_types__srv__CameraPTZ_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      create_message_types__srv__CameraPTZ_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

create_message_types__srv__CameraPTZ_Response__Sequence *
create_message_types__srv__CameraPTZ_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  create_message_types__srv__CameraPTZ_Response__Sequence * array = (create_message_types__srv__CameraPTZ_Response__Sequence *)allocator.allocate(sizeof(create_message_types__srv__CameraPTZ_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = create_message_types__srv__CameraPTZ_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
create_message_types__srv__CameraPTZ_Response__Sequence__destroy(create_message_types__srv__CameraPTZ_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    create_message_types__srv__CameraPTZ_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
create_message_types__srv__CameraPTZ_Response__Sequence__are_equal(const create_message_types__srv__CameraPTZ_Response__Sequence * lhs, const create_message_types__srv__CameraPTZ_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!create_message_types__srv__CameraPTZ_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
create_message_types__srv__CameraPTZ_Response__Sequence__copy(
  const create_message_types__srv__CameraPTZ_Response__Sequence * input,
  create_message_types__srv__CameraPTZ_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(create_message_types__srv__CameraPTZ_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    create_message_types__srv__CameraPTZ_Response * data =
      (create_message_types__srv__CameraPTZ_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!create_message_types__srv__CameraPTZ_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          create_message_types__srv__CameraPTZ_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!create_message_types__srv__CameraPTZ_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
