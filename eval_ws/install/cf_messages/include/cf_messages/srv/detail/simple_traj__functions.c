// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cf_messages:srv/SimpleTraj.idl
// generated code does not contain a copyright notice
#include "cf_messages/srv/detail/simple_traj__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `traj`
#include "cf_messages/msg/detail/waypoint__functions.h"
// Member `duration`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
cf_messages__srv__SimpleTraj_Request__init(cf_messages__srv__SimpleTraj_Request * msg)
{
  if (!msg) {
    return false;
  }
  // traj
  if (!cf_messages__msg__Waypoint__Sequence__init(&msg->traj, 0)) {
    cf_messages__srv__SimpleTraj_Request__fini(msg);
    return false;
  }
  // duration
  if (!rosidl_runtime_c__float__Sequence__init(&msg->duration, 0)) {
    cf_messages__srv__SimpleTraj_Request__fini(msg);
    return false;
  }
  // len
  return true;
}

void
cf_messages__srv__SimpleTraj_Request__fini(cf_messages__srv__SimpleTraj_Request * msg)
{
  if (!msg) {
    return;
  }
  // traj
  cf_messages__msg__Waypoint__Sequence__fini(&msg->traj);
  // duration
  rosidl_runtime_c__float__Sequence__fini(&msg->duration);
  // len
}

cf_messages__srv__SimpleTraj_Request *
cf_messages__srv__SimpleTraj_Request__create()
{
  cf_messages__srv__SimpleTraj_Request * msg = (cf_messages__srv__SimpleTraj_Request *)malloc(sizeof(cf_messages__srv__SimpleTraj_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cf_messages__srv__SimpleTraj_Request));
  bool success = cf_messages__srv__SimpleTraj_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
cf_messages__srv__SimpleTraj_Request__destroy(cf_messages__srv__SimpleTraj_Request * msg)
{
  if (msg) {
    cf_messages__srv__SimpleTraj_Request__fini(msg);
  }
  free(msg);
}


bool
cf_messages__srv__SimpleTraj_Request__Sequence__init(cf_messages__srv__SimpleTraj_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  cf_messages__srv__SimpleTraj_Request * data = NULL;
  if (size) {
    data = (cf_messages__srv__SimpleTraj_Request *)calloc(size, sizeof(cf_messages__srv__SimpleTraj_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cf_messages__srv__SimpleTraj_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cf_messages__srv__SimpleTraj_Request__fini(&data[i - 1]);
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
cf_messages__srv__SimpleTraj_Request__Sequence__fini(cf_messages__srv__SimpleTraj_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      cf_messages__srv__SimpleTraj_Request__fini(&array->data[i]);
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

cf_messages__srv__SimpleTraj_Request__Sequence *
cf_messages__srv__SimpleTraj_Request__Sequence__create(size_t size)
{
  cf_messages__srv__SimpleTraj_Request__Sequence * array = (cf_messages__srv__SimpleTraj_Request__Sequence *)malloc(sizeof(cf_messages__srv__SimpleTraj_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = cf_messages__srv__SimpleTraj_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
cf_messages__srv__SimpleTraj_Request__Sequence__destroy(cf_messages__srv__SimpleTraj_Request__Sequence * array)
{
  if (array) {
    cf_messages__srv__SimpleTraj_Request__Sequence__fini(array);
  }
  free(array);
}


bool
cf_messages__srv__SimpleTraj_Response__init(cf_messages__srv__SimpleTraj_Response * msg)
{
  if (!msg) {
    return false;
  }
  // ret
  return true;
}

void
cf_messages__srv__SimpleTraj_Response__fini(cf_messages__srv__SimpleTraj_Response * msg)
{
  if (!msg) {
    return;
  }
  // ret
}

cf_messages__srv__SimpleTraj_Response *
cf_messages__srv__SimpleTraj_Response__create()
{
  cf_messages__srv__SimpleTraj_Response * msg = (cf_messages__srv__SimpleTraj_Response *)malloc(sizeof(cf_messages__srv__SimpleTraj_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cf_messages__srv__SimpleTraj_Response));
  bool success = cf_messages__srv__SimpleTraj_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
cf_messages__srv__SimpleTraj_Response__destroy(cf_messages__srv__SimpleTraj_Response * msg)
{
  if (msg) {
    cf_messages__srv__SimpleTraj_Response__fini(msg);
  }
  free(msg);
}


bool
cf_messages__srv__SimpleTraj_Response__Sequence__init(cf_messages__srv__SimpleTraj_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  cf_messages__srv__SimpleTraj_Response * data = NULL;
  if (size) {
    data = (cf_messages__srv__SimpleTraj_Response *)calloc(size, sizeof(cf_messages__srv__SimpleTraj_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cf_messages__srv__SimpleTraj_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cf_messages__srv__SimpleTraj_Response__fini(&data[i - 1]);
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
cf_messages__srv__SimpleTraj_Response__Sequence__fini(cf_messages__srv__SimpleTraj_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      cf_messages__srv__SimpleTraj_Response__fini(&array->data[i]);
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

cf_messages__srv__SimpleTraj_Response__Sequence *
cf_messages__srv__SimpleTraj_Response__Sequence__create(size_t size)
{
  cf_messages__srv__SimpleTraj_Response__Sequence * array = (cf_messages__srv__SimpleTraj_Response__Sequence *)malloc(sizeof(cf_messages__srv__SimpleTraj_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = cf_messages__srv__SimpleTraj_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
cf_messages__srv__SimpleTraj_Response__Sequence__destroy(cf_messages__srv__SimpleTraj_Response__Sequence * array)
{
  if (array) {
    cf_messages__srv__SimpleTraj_Response__Sequence__fini(array);
  }
  free(array);
}
