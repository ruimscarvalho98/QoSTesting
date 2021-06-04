// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cf_messages:msg/WeatherData.idl
// generated code does not contain a copyright notice
#include "cf_messages/msg/detail/weather_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
cf_messages__msg__WeatherData__init(cf_messages__msg__WeatherData * msg)
{
  if (!msg) {
    return false;
  }
  // temperature
  // rh
  return true;
}

void
cf_messages__msg__WeatherData__fini(cf_messages__msg__WeatherData * msg)
{
  if (!msg) {
    return;
  }
  // temperature
  // rh
}

cf_messages__msg__WeatherData *
cf_messages__msg__WeatherData__create()
{
  cf_messages__msg__WeatherData * msg = (cf_messages__msg__WeatherData *)malloc(sizeof(cf_messages__msg__WeatherData));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cf_messages__msg__WeatherData));
  bool success = cf_messages__msg__WeatherData__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
cf_messages__msg__WeatherData__destroy(cf_messages__msg__WeatherData * msg)
{
  if (msg) {
    cf_messages__msg__WeatherData__fini(msg);
  }
  free(msg);
}


bool
cf_messages__msg__WeatherData__Sequence__init(cf_messages__msg__WeatherData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  cf_messages__msg__WeatherData * data = NULL;
  if (size) {
    data = (cf_messages__msg__WeatherData *)calloc(size, sizeof(cf_messages__msg__WeatherData));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cf_messages__msg__WeatherData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cf_messages__msg__WeatherData__fini(&data[i - 1]);
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
cf_messages__msg__WeatherData__Sequence__fini(cf_messages__msg__WeatherData__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      cf_messages__msg__WeatherData__fini(&array->data[i]);
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

cf_messages__msg__WeatherData__Sequence *
cf_messages__msg__WeatherData__Sequence__create(size_t size)
{
  cf_messages__msg__WeatherData__Sequence * array = (cf_messages__msg__WeatherData__Sequence *)malloc(sizeof(cf_messages__msg__WeatherData__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = cf_messages__msg__WeatherData__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
cf_messages__msg__WeatherData__Sequence__destroy(cf_messages__msg__WeatherData__Sequence * array)
{
  if (array) {
    cf_messages__msg__WeatherData__Sequence__fini(array);
  }
  free(array);
}
