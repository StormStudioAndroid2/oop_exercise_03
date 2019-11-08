add_executable(
    unit_tests
    rectangle_test.cpp 
    trapeze_test.cpp 
    ../Figure.cpp 
    ../Trapeze.cpp 
    ../Rhombus.cpp ../Rectangle.cpp
    ../Point.cpp
    )

target_link_libraries(
    unit_tests
    gtest_main
    
    )

add_test(
  NAME
    unit
  COMMAND
    ${CMAKE_BINARY_DIR}/${CMAKE_INSTALL_BINDIR}/unit_tests
  )
