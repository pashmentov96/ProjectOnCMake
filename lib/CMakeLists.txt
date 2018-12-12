include_directories( ${CMAKE_CURRENT_BINARY_DIR} )

# add_executable(GenHeader gen.py)

#add_custom_command (
#        OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/main.h
#        COMMAND GenHeader ${CMAKE_CURRENT_BINARY_DIR}/main.h
#        DEPENDS GenHeader
#)

find_package( PythonInterp 3.6 REQUIRED )

add_custom_command(
        OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/main.h
        COMMAND ${PYTHON_EXECUTABLE} ${CMAKE_CURRENT_SOURCE_DIR}/gen.py ${CMAKE_CURRENT_BINARY_DIR}/main.h
        COMMENT "Generating header"
)

add_library(lib Sum.cpp ${CMAKE_CURRENT_BINARY_DIR}/main.h)

