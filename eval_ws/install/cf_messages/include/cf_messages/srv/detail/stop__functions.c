// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cf_messages:srv/Stop.idl
// generated code does not contain a copyright notice
#include "cf_messages/srv/detail/stop__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
cf_messages__srv__Stop_Request__init(cf_messages__srv__Stop_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
cf_messages__srv__Stop_Request__fini(cf_messages__srv__Stop_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

cf_messages__srv__Stop_Request *
cf_messages__srv__Stop_Request__create()
{
  cf_messages__srv__Stop_Request * msg = (cf_messages__srv__Stop_Request *)malloc(sizeof(cf_messages__srv__Stop_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cf_messages__srv__Stop_Request));
  bool success = cf_messages__srv__Stop_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
cf_messages__srv__Stop_Request__destroy(cf_messages__srv__Stop_Request * msg)
{
  if (msg) {
    cf_messages__srv__Stop_Request__fini(msg);
  }
  free(msg);
}


bool
cf_messages__srv__Stop_Request__Sequence__init(cf_messages__srv__Stop_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  cf_messages__srv__Stop_Request * data = NULL;
  if (size) {
    data = (cf_messages__srv__Stop_Request *)calloc(size, sizeof(cf_messages__srv__Stop_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cf_messages__srv__Stop_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cf_messages__srv__Stop_Request__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
cf_messages__srv__Stop_Request__Sequence__fini(cf_messages__srv__Stop_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      cf_messages__srv__Stop_Request__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

cf_messages__srv__Stop_Request__Sequence *
cf_messages__srv__Stop_Request__Sequence__create(size_t size)
{
  cf_messages__srv__Stop_Request__Sequence * array = (cf_messages__srv__Stop_Request__Sequence *)malloc(sizeof(cf_messages__srv__Stop_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = cf_messages__srv__Stop_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
cf_messages__srv__Stop_Request__Sequence__destroy(cf_messages__srv__Stop_Request__Sequence * array)
{
  if (array) {
    cf_messages__srv__Stop_Request__Sequence__fini(array);
  }
  free(array);
}


bool
cf_messages__srv__Stop_Response__init(cf_messages__srv__Stop_Response * msg)
{
  if (!msg) {
    return false;
  }
  // ret
  return true;
}

void
cf_messages__srv__Stop_Response__fini(cf_messages__srv__Stop_Response * msg)
{
  if (!msg) {
    return;
  }
  // ret
}

cf_messages__srv__Stop_Response *
cf_messages__srv__Stop_Response__create()
{
  cf_messages__srv__Stop_Response * msg = (cf_messages__srv__Stop_Response *)malloc(sizeof(cf_messages__srv__Stop_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cf_messages__srv__Stop_Response));
  bool success = cf_messages__srv__Stop_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
cf_messages__srv__Stop_Response__destroy(cf_messages__srv__Stop_Response * msg)
{
  if (msg) {
    cf_messages__srv__Stop_Response__fini(msg);
  }
  free(msg);
}


bool
cf_messages__srv__Stop_Response__Sequence__init(cf_messages__srv__Stop_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  cf_messages__srv__Stop_Response * data = NULL;
  if (size) {
    data = (cf_messages__srv__Stop_Response *)calloc(size, sizeof(cf_messages__srv__Stop_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cf_messages__srv__Stop_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cf_messages__srv__Stop_Response__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
cf_messages__srv__Stop_Response__Sequence__fini(cf_messages__srv__Stop_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      cf_messages__srv__Stop_Response__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

cf_messages__srv__Stop_Response__Sequence *
cf_messages__srv__Stop_Response__Sequence__create(size_t size)
{
  cf_messages__srv__Stop_Response__Sequence * array = (cf_messages__srv__Stop_Response__Sequence *)malloc(sizeof(cf_messages__srv__Stop_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = cf_messages__srv__Stop_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
cf_messages__srv__Stop_Response__Sequence__destroy(cf_messages__srv__Stop_Response__Sequence * array)
{
  if (array) {
    cf_messages__srv__Stop_Response__Sequence__fini(array);
  }
  free(array);
}
