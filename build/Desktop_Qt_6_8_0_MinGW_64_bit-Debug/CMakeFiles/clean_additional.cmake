# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Conversor_de_Unidades_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Conversor_de_Unidades_autogen.dir\\ParseCache.txt"
  "Conversor_de_Unidades_autogen"
  )
endif()
