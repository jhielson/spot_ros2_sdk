#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "create_message_types::create_message_types__rosidl_generator_py" for configuration ""
set_property(TARGET create_message_types::create_message_types__rosidl_generator_py APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(create_message_types::create_message_types__rosidl_generator_py PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libcreate_message_types__rosidl_generator_py.so"
  IMPORTED_SONAME_NOCONFIG "libcreate_message_types__rosidl_generator_py.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS create_message_types::create_message_types__rosidl_generator_py )
list(APPEND _IMPORT_CHECK_FILES_FOR_create_message_types::create_message_types__rosidl_generator_py "${_IMPORT_PREFIX}/lib/libcreate_message_types__rosidl_generator_py.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
