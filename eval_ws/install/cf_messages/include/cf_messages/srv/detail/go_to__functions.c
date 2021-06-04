// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cf_messages:srv/GoTo.idl
// generated code does not contain a copyright notice
#include "cf_messages/srv/detail/go_to__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
cf_messages__srv__GoTo_Request__init(cf_messages__srv__GoTo_Request * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // z
  // yaw
  // duration
  return true;
}

void
cf_messages__srv__GoTo_Request__fini(cf_messages__srv__GoTo_Request * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // z
  // yaw
  // duration
}

cf_messages__srv__GoTo_Request *
cf_messages__srv__GoTo_Request__create()
{
  cf_messages__srv__GoTo_Request * msg = (cf_messages__srv__GoTo_Request *)malloc(sizeof(cf_messages__srv__GoTo_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cf_messages__srv__GoTo_Request));
  bool success = cf_messages__srv__GoTo_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
cf_messages__srv__GoTo_Request__destroy(cf_messages__srv__GoTo_Request * msg)
{
  if (msg) {
    cf_messages__srv__GoTo_Request__fini(msg);
  }
  free(msg);
}


bool
cf_messages__srv__GoTo_Request__Sequence__init(cf_messages__srv__GoTo_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  cf_messages__srv__GoTo_Request * data = NULL;
  if (size) {
    data = (cf_messages__srv__GoTo_Request *)calloc(size, sizeof(cf_messages__srv__GoTo_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cf_messages__srv__GoTo_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cf_messages__srv__GoTo_Request__fini(&data[i - 1]);
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
cf_messages__srv__GoTo_Request__Sequence__fini(cf_messages__srv__GoTo_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      cf_messages__srv__GoTo_Request__fini(&array->data[i]);
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

cf_messages__srv__GoTo_Request__Sequence *
cf_messages__srv__GoTo_Request__Sequence__create(size_t size)
{
  cf_messages__srv__GoTo_Request__Sequence * array = (cf_messages__srv__GoTo_Request__Sequence *)malloc(sizeof(cf_messages__srv__GoTo_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = cf_messages__srv__GoTo_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
cf_messages__srv__GoTo_Request__Sequence__destroy(cf_messages__srv__GoTo_Request__Sequence * array)
{
  if (array) {
    cf_messages__srv__GoTo_Request__Sequence__fini(array);
  }
  free(array);
}


bool
cf_messages__srv__GoTo_Response__init(cf_messages__srv__GoTo_Response * msg)
{
  if (!msg) {
    return false;
  }
  // ret
  return true;
}

void
cf_messages__srv__GoTo_Response__fini(cf_messages__srv__GoTo_Response * msg)
{
  if (!msg) {
    return;
  }
  // ret
}

cf_messages__srv__GoTo_Response *
cf_messages__srv__GoTo_Response__create()
{
  cf_messages__srv__GoTo_Response * msg = (cf_messages__srv__GoTo_Response *)malloc(sizeof(cf_messages__srv__GoTo_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cf_messages__srv__GoTo_Response));
  bool success = cf_messages__srv__GoTo_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
cf_messages__srv__GoTo_Response__destroy(cf_messages__srv__GoTo_Response * msg)
{
  if (msg) {
    cf_messages__srv__GoTo_Response__fini(msg);
  }
  free(msg);
}


bool
cf_messages__srv__GoTo_Response__Sequence__init(cf_messages__srv__GoTo_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  cf_messages__srv__GoTo_Response * data = NULL;
  if (size) {
    data = (cf_messages__srv__GoTo_Response *)calloc(size, sizeof(cf_messages__srv__GoTo_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cf_messages__srv__GoTo_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cf_messages__srv__GoTo_Response__fini(&data[i - 1]);
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
cf_messages__srv__GoTo_Response__Sequence__fini(cf_messages__srv__GoTo_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      cf_messages__srv__GoTo_Response__fini(&array->data[i]);
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

cf_messages__srv__GoTo_Response__Sequence *
cf_messages__srv__GoTo_Response__Sequence__create(size_t size)
{
  cf_messages__srv__GoTo_Response__Sequence * array = (cf_messages__srv__GoTo_Response__Sequence *)malloc(sizeof(cf_messages__srv__GoTo_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = cf_messages__srv__GoTo_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
cf_messages__srv__GoTo_Response__Sequence__destroy(cf_messages__srv__GoTo_Response__Sequence * array)
{
  if (array) {
    cf_messages__srv__GoTo_Response__Sequence__fini(array);
  }
  free(array);
}
