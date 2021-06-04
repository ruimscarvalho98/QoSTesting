// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cf_messages:msg/Ping.idl
// generated code does not contain a copyright notice
#include "cf_messages/msg/detail/ping__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
cf_messages__msg__Ping__init(cf_messages__msg__Ping * msg)
{
  if (!msg) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->data, 0)) {
    cf_messages__msg__Ping__fini(msg);
    return false;
  }
  return true;
}

void
cf_messages__msg__Ping__fini(cf_messages__msg__Ping * msg)
{
  if (!msg) {
    return;
  }
  // data
  rosidl_runtime_c__uint8__Sequence__fini(&msg->data);
}

cf_messages__msg__Ping *
cf_messages__msg__Ping__create()
{
  cf_messages__msg__Ping * msg = (cf_messages__msg__Ping *)malloc(sizeof(cf_messages__msg__Ping));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cf_messages__msg__Ping));
  bool success = cf_messages__msg__Ping__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
cf_messages__msg__Ping__destroy(cf_messages__msg__Ping * msg)
{
  if (msg) {
    cf_messages__msg__Ping__fini(msg);
  }
  free(msg);
}


bool
cf_messages__msg__Ping__Sequence__init(cf_messages__msg__Ping__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  cf_messages__msg__Ping * data = NULL;
  if (size) {
    data = (cf_messages__msg__Ping *)calloc(size, sizeof(cf_messages__msg__Ping));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cf_messages__msg__Ping__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cf_messages__msg__Ping__fini(&data[i - 1]);
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
cf_messages__msg__Ping__Sequence__fini(cf_messages__msg__Ping__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      cf_messages__msg__Ping__fini(&array->data[i]);
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

cf_messages__msg__Ping__Sequence *
cf_messages__msg__Ping__Sequence__create(size_t size)
{
  cf_messages__msg__Ping__Sequence * array = (cf_messages__msg__Ping__Sequence *)malloc(sizeof(cf_messages__msg__Ping__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = cf_messages__msg__Ping__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
cf_messages__msg__Ping__Sequence__destroy(cf_messages__msg__Ping__Sequence * array)
{
  if (array) {
    cf_messages__msg__Ping__Sequence__fini(array);
  }
  free(array);
}
