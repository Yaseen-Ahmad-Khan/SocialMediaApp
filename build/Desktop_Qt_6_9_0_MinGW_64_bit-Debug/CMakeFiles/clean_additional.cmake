# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Goon_Gram_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Goon_Gram_autogen.dir\\ParseCache.txt"
  "Goon_Gram_autogen"
  )
endif()
