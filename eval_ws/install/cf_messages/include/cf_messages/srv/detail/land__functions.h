// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from cf_messages:srv/Land.idl
// generated code does not contain a copyright notice

#ifndef CF_MESSAGES__SRV__DETAIL__LAND__FUNCTIONS_H_
#define CF_MESSAGES__SRV__DETAIL__LAND__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "cf_messages/msg/rosidl_generator_c__visibility_control.h"

#include "cf_messages/srv/detail/land__struct.h"

/// Initialize srv/Land message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * cf_messages__srv__Land_Request
 * )) before or use
 * cf_messages__srv__Land_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_cf_messages
bool
cf_messages__srv__Land_Request__init(cf_messages__srv__Land_Request * msg);

/// Finalize srv/Land message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cf_messages
void
cf_messages__srv__Land_Request__fini(cf_messages__srv__Land_Request * msg);

/// Create srv/Land message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * cf_messages__srv__Land_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cf_messages
cf_messages__srv__Land_Request *
cf_messages__srv__Land_Request__create();

/// Destroy srv/Land message.
/**
 * It calls
 * cf_messages__srv__Land_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cf_messages
void
cf_messages__srv__Land_Request__destroy(cf_messages__srv__Land_Request * msg);


/// Initialize array of srv/Land messages.
/**
 * It allocates the memory for the number of elements and calls
 * cf_messages__srv__Land_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_cf_messages
bool
cf_messages__srv__Land_Request__Sequence__init(cf_messages__srv__Land_Request__Sequence * array, size_t size);

/// Finalize array of srv/Land messages.
/**
 * It calls
 * cf_messages__srv__Land_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cf_messages
void
cf_messages__srv__Land_Request__Sequence__fini(cf_messages__srv__Land_Request__Sequence * array);

/// Create array of srv/Land messages.
/**
 * It allocates the memory for the array and calls
 * cf_messages__srv__Land_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cf_messages
cf_messages__srv__Land_Request__Sequence *
cf_messages__srv__Land_Request__Sequence__create(size_t size);

/// Destroy array of srv/Land messages.
/**
 * It calls
 * cf_messages__srv__Land_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cf_messages
void
cf_messages__srv__Land_Request__Sequence__destroy(cf_messages__srv__Land_Request__Sequence * array);

/// Initialize srv/Land message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * cf_messages__srv__Land_Response
 * )) before or use
 * cf_messages__srv__Land_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_cf_messages
bool
cf_messages__srv__Land_Response__init(cf_messages__srv__Land_Response * msg);

/// Finalize srv/Land message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cf_messages
void
cf_messages__srv__Land_Response__fini(cf_messages__srv__Land_Response * msg);

/// Create srv/Land message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * cf_messages__srv__Land_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cf_messages
cf_messages__srv__Land_Response *
cf_messages__srv__Land_Response__create();

/// Destroy srv/Land message.
/**
 * It calls
 * cf_messages__srv__Land_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cf_messages
void
cf_messages__srv__Land_Response__destroy(cf_messages__srv__Land_Response * msg);


/// Initialize array of srv/Land messages.
/**
 * It allocates the memory for the number of elements and calls
 * cf_messages__srv__Land_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_cf_messages
bool
cf_messages__srv__Land_Response__Sequence__init(cf_messages__srv__Land_Response__Sequence * array, size_t size);

/// Finalize array of srv/Land messages.
/**
 * It calls
 * cf_messages__srv__Land_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cf_messages
void
cf_messages__srv__Land_Response__Sequence__fini(cf_messages__srv__Land_Response__Sequence * array);

/// Create array of srv/Land messages.
/**
 * It allocates the memory for the array and calls
 * cf_messages__srv__Land_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cf_messages
cf_messages__srv__Land_Response__Sequence *
cf_messages__srv__Land_Response__Sequence__create(size_t size);

/// Destroy array of srv/Land messages.
/**
 * It calls
 * cf_messages__srv__Land_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cf_messages
void
cf_messages__srv__Land_Response__Sequence__destroy(cf_messages__srv__Land_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // CF_MESSAGES__SRV__DETAIL__LAND__FUNCTIONS_H_
