// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from create_message_types:srv/Light.idl
// generated code does not contain a copyright notice
#include "create_message_types/srv/detail/light__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `command`
// Member `hostname`
// Member `lighting_command`
// Member `verbose`
#include "rosidl_runtime_c/string_functions.h"

bool
create_message_types__srv__Light_Request__init(create_message_types__srv__Light_Request * msg)
{
  if (!msg) {
    return false;
  }
  // brightnesses_01
  // brightnesses_02
  // brightnesses_03
  // brightnesses_04
  // command
  if (!rosidl_runtime_c__String__init(&msg->command)) {
    create_message_types__srv__Light_Request__fini(msg);
    return false;
  }
  // hostname
  if (!rosidl_runtime_c__String__init(&msg->hostname)) {
    create_message_types__srv__Light_Request__fini(msg);
    return false;
  }
  // lighting_command
  if (!rosidl_runtime_c__String__init(&msg->lighting_command)) {
    create_message_types__srv__Light_Request__fini(msg);
    return false;
  }
  // verbose
  if (!rosidl_runtime_c__String__init(&msg->verbose)) {
    create_message_types__srv__Light_Request__fini(msg);
    return false;
  }
  return true;
}

void
create_message_types__srv__Light_Request__fini(create_message_types__srv__Light_Request * msg)
{
  if (!msg) {
    return;
  }
  // brightnesses_01
  // brightnesses_02
  // brightnesses_03
  // brightnesses_04
  // command
  rosidl_runtime_c__String__fini(&msg->command);
  // hostname
  rosidl_runtime_c__String__fini(&msg->hostname);
  // lighting_command
  rosidl_runtime_c__String__fini(&msg->lighting_command);
  // verbose
  rosidl_runtime_c__String__fini(&msg->verbose);
}

bool
create_message_types__srv__Light_Request__are_equal(const create_message_types__srv__Light_Request * lhs, const create_message_types__srv__Light_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // brightnesses_01
  if (lhs->brightnesses_01 != rhs->brightnesses_01) {
    return false;
  }
  // brightnesses_02
  if (lhs->brightnesses_02 != rhs->brightnesses_02) {
    return false;
  }
  // brightnesses_03
  if (lhs->brightnesses_03 != rhs->brightnesses_03) {
    return false;
  }
  // brightnesses_04
  if (lhs->brightnesses_04 != rhs->brightnesses_04) {
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
  // lighting_command
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->lighting_command), &(rhs->lighting_command)))
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
create_message_types__srv__Light_Request__copy(
  const create_message_types__srv__Light_Request * input,
  create_message_types__srv__Light_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // brightnesses_01
  output->brightnesses_01 = input->brightnesses_01;
  // brightnesses_02
  output->brightnesses_02 = input->brightnesses_02;
  // brightnesses_03
  output->brightnesses_03 = input->brightnesses_03;
  // brightnesses_04
  output->brightnesses_04 = input->brightnesses_04;
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
  // lighting_command
  if (!rosidl_runtime_c__String__copy(
      &(input->lighting_command), &(output->lighting_command)))
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

create_message_types__srv__Light_Request *
create_message_types__srv__Light_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  create_message_types__srv__Light_Request * msg = (create_message_types__srv__Light_Request *)allocator.allocate(sizeof(create_message_types__srv__Light_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(create_message_types__srv__Light_Request));
  bool success = create_message_types__srv__Light_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
create_message_types__srv__Light_Request__destroy(create_message_types__srv__Light_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    create_message_types__srv__Light_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
create_message_types__srv__Light_Request__Sequence__init(create_message_types__srv__Light_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  create_message_types__srv__Light_Request * data = NULL;

  if (size) {
    data = (create_message_types__srv__Light_Request *)allocator.zero_allocate(size, sizeof(create_message_types__srv__Light_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = create_message_types__srv__Light_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        create_message_types__srv__Light_Request__fini(&data[i - 1]);
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
create_message_types__srv__Light_Request__Sequence__fini(create_message_types__srv__Light_Request__Sequence * array)
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
      create_message_types__srv__Light_Request__fini(&array->data[i]);
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

create_message_types__srv__Light_Request__Sequence *
create_message_types__srv__Light_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  create_message_types__srv__Light_Request__Sequence * array = (create_message_types__srv__Light_Request__Sequence *)allocator.allocate(sizeof(create_message_types__srv__Light_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = create_message_types__srv__Light_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
create_message_types__srv__Light_Request__Sequence__destroy(create_message_types__srv__Light_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    create_message_types__srv__Light_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
create_message_types__srv__Light_Request__Sequence__are_equal(const create_message_types__srv__Light_Request__Sequence * lhs, const create_message_types__srv__Light_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!create_message_types__srv__Light_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
create_message_types__srv__Light_Request__Sequence__copy(
  const create_message_types__srv__Light_Request__Sequence * input,
  create_message_types__srv__Light_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(create_message_types__srv__Light_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    create_message_types__srv__Light_Request * data =
      (create_message_types__srv__Light_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!create_message_types__srv__Light_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          create_message_types__srv__Light_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!create_message_types__srv__Light_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
create_message_types__srv__Light_Response__init(create_message_types__srv__Light_Response * msg)
{
  if (!msg) {
    return false;
  }
  // result
  return true;
}

void
create_message_types__srv__Light_Response__fini(create_message_types__srv__Light_Response * msg)
{
  if (!msg) {
    return;
  }
  // result
}

bool
create_message_types__srv__Light_Response__are_equal(const create_message_types__srv__Light_Response * lhs, const create_message_types__srv__Light_Response * rhs)
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
create_message_types__srv__Light_Response__copy(
  const create_message_types__srv__Light_Response * input,
  create_message_types__srv__Light_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // result
  output->result = input->result;
  return true;
}

create_message_types__srv__Light_Response *
create_message_types__srv__Light_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  create_message_types__srv__Light_Response * msg = (create_message_types__srv__Light_Response *)allocator.allocate(sizeof(create_message_types__srv__Light_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(create_message_types__srv__Light_Response));
  bool success = create_message_types__srv__Light_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
create_message_types__srv__Light_Response__destroy(create_message_types__srv__Light_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    create_message_types__srv__Light_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
create_message_types__srv__Light_Response__Sequence__init(create_message_types__srv__Light_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  create_message_types__srv__Light_Response * data = NULL;

  if (size) {
    data = (create_message_types__srv__Light_Response *)allocator.zero_allocate(size, sizeof(create_message_types__srv__Light_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = create_message_types__srv__Light_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        create_message_types__srv__Light_Response__fini(&data[i - 1]);
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
create_message_types__srv__Light_Response__Sequence__fini(create_message_types__srv__Light_Response__Sequence * array)
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
      create_message_types__srv__Light_Response__fini(&array->data[i]);
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

create_message_types__srv__Light_Response__Sequence *
create_message_types__srv__Light_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  create_message_types__srv__Light_Response__Sequence * array = (create_message_types__srv__Light_Response__Sequence *)allocator.allocate(sizeof(create_message_types__srv__Light_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = create_message_types__srv__Light_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
create_message_types__srv__Light_Response__Sequence__destroy(create_message_types__srv__Light_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    create_message_types__srv__Light_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
create_message_types__srv__Light_Response__Sequence__are_equal(const create_message_types__srv__Light_Response__Sequence * lhs, const create_message_types__srv__Light_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!create_message_types__srv__Light_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
create_message_types__srv__Light_Response__Sequence__copy(
  const create_message_types__srv__Light_Response__Sequence * input,
  create_message_types__srv__Light_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(create_message_types__srv__Light_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    create_message_types__srv__Light_Response * data =
      (create_message_types__srv__Light_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!create_message_types__srv__Light_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          create_message_types__srv__Light_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!create_message_types__srv__Light_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
