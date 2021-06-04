# generated from
# rosidl_cmake/cmake/template/rosidl_cmake_export_typesupport_targets.cmake.in

set(_exported_typesupport_targets
  "__rosidl_typesupport_introspection_c:cf_messages__rosidl_typesupport_introspection_c;__rosidl_typesupport_introspection_cpp:cf_messages__rosidl_typesupport_introspection_cpp")

# populate cf_messages_TARGETS_<suffix>
if(NOT _exported_typesupport_targets STREQUAL "")
  # loop over typesupport targets
  foreach(_tuple ${_exported_typesupport_targets})
    string(REPLACE ":" ";" _tuple "${_tuple}")
    list(GET _tuple 0 _suffix)
    list(GET _tuple 1 _target)

    set(_target "cf_messages::${_target}")
    if(NOT TARGET "${_target}")
      # the exported target must exist
      message(WARNING "Package 'cf_messages' exports the typesupport target '${_target}' which doesn't exist")
    else()
      list(APPEND cf_messages_TARGETS${_suffix} "${_target}")
    endif()
  endforeach()
endif()
