// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from cf_messages:msg/AirQuality.idl
// generated code does not contain a copyright notice

#ifndef CF_MESSAGES__MSG__DETAIL__AIR_QUALITY__FUNCTIONS_H_
#define CF_MESSAGES__MSG__DETAIL__AIR_QUALITY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "cf_messages/msg/rosidl_generator_c__visibility_control.h"

#include "cf_messages/msg/detail/air_quality__struct.h"

/// Initialize msg/AirQuality message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * cf_messages__msg__AirQuality
 * )) before or use
 * cf_messages__msg__AirQuality__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_cf_messages
bool
cf_messages__msg__AirQuality__init(cf_messages__msg__AirQuality * msg);

/// Finalize msg/AirQuality message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cf_messages
void
cf_messages__msg__AirQuality__fini(cf_messages__msg__AirQuality * msg);

/// Create msg/AirQuality message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * cf_messages__msg__AirQuality__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cf_messages
cf_messages__msg__AirQuality *
cf_messages__msg__AirQuality__create();

/// Destroy msg/AirQuality message.
/**
 * It calls
 * cf_messages__msg__AirQuality__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cf_messages
void
cf_messages__msg__AirQuality__destroy(cf_messages__msg__AirQuality * msg);


/// Initialize array of msg/AirQuality messages.
/**
 * It allocates the memory for the number of elements and calls
 * cf_messages__msg__AirQuality__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_cf_messages
bool
cf_messages__msg__AirQuality__Sequence__init(cf_messages__msg__AirQuality__Sequence * array, size_t size);

/// Finalize array of msg/AirQuality messages.
/**
 * It calls
 * cf_messages__msg__AirQuality__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cf_messages
void
cf_messages__msg__AirQuality__Sequence__fini(cf_messages__msg__AirQuality__Sequence * array);

/// Create array of msg/AirQuality messages.
/**
 * It allocates the memory for the array and calls
 * cf_messages__msg__AirQuality__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cf_messages
cf_messages__msg__AirQuality__Sequence *
cf_messages__msg__AirQuality__Sequence__create(size_t size);

/// Destroy array of msg/AirQuality messages.
/**
 * It calls
 * cf_messages__msg__AirQuality__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cf_messages
void
cf_messages__msg__AirQuality__Sequence__destroy(cf_messages__msg__AirQuality__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // CF_MESSAGES__MSG__DETAIL__AIR_QUALITY__FUNCTIONS_H_
