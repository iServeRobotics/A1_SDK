#----------------------------------------------------------------
# Generated CMake target import file for configuration "RelWithDebInfo".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "ocs2_core::ocs2_core" for configuration "RelWithDebInfo"
set_property(TARGET ocs2_core::ocs2_core APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(ocs2_core::ocs2_core PROPERTIES
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/libocs2_core.so"
  IMPORTED_SONAME_RELWITHDEBINFO "libocs2_core.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS ocs2_core::ocs2_core )
list(APPEND _IMPORT_CHECK_FILES_FOR_ocs2_core::ocs2_core "${_IMPORT_PREFIX}/lib/libocs2_core.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)