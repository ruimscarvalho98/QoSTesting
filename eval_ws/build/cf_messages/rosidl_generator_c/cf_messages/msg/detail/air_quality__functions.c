// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cf_messages:msg/AirQuality.idl
// generated code does not contain a copyright notice
#include "cf_messages/msg/detail/air_quality__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `p`
#include "geometry_msgs/msg/detail/point32__functions.h"

bool
cf_messages__msg__AirQuality__init(cf_messages__msg__AirQuality * msg)
{
  if (!msg) {
    return false;
  }
  // p
  if (!geometry_msgs__msg__Point32__init(&msg->p)) {
    cf_messages__msg__AirQuality__fini(msg);
    return false;
  }
  // eco2
  // tvoc
  return true;
}

void
cf_messages__msg__AirQuality__fini(cf_messages__msg__AirQuality * msg)
{
  if (!msg) {
    return;
  }
  // p
  geometry_msgs__msg__Point32__fini(&msg->p);
  // eco2
  // tvoc
}

cf_messages__msg__AirQuality *
cf_messages__msg__AirQuality__create()
{
  cf_messages__msg__AirQuality * msg = (cf_messages__msg__AirQuality *)malloc(sizeof(cf_messages__msg__AirQuality));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cf_messages__msg__AirQuality));
  bool success = cf_messages__msg__AirQuality__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
cf_messages__msg__AirQuality__destroy(cf_messages__msg__AirQuality * msg)
{
  if (msg) {
    cf_messages__msg__AirQuality__fini(msg);
  }
  free(msg);
}


bool
cf_messages__msg__AirQuality__Sequence__init(cf_messages__msg__AirQuality__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  cf_messages__msg__AirQuality * data = NULL;
  if (size) {
    data = (cf_messages__msg__AirQuality *)calloc(size, sizeof(cf_messages__msg__AirQuality));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cf_messages__msg__AirQuality__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cf_messages__msg__AirQuality__fini(&data[i - 1]);
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
cf_messages__msg__AirQuality__Sequence__fini(cf_messages__msg__AirQuality__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      cf_messages__msg__AirQuality__fini(&array->data[i]);
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

cf_messages__msg__AirQuality__Sequence *
cf_messages__msg__AirQuality__Sequence__create(size_t size)
{
  cf_messages__msg__AirQuality__Sequence * array = (cf_messages__msg__AirQuality__Sequence *)malloc(sizeof(cf_messages__msg__AirQuality__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = cf_messages__msg__AirQuality__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
cf_messages__msg__AirQuality__Sequence__destroy(cf_messages__msg__AirQuality__Sequence * array)
{
  if (array) {
    cf_messages__msg__AirQuality__Sequence__fini(array);
  }
  free(array);
}
