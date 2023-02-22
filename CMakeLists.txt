cmake_minimum_required(VERSION 3.10)
project(app)

find_package(Geant4 REQUIRED ui_all vis_all)

include(${Geant4_USE_FILE})

add_executable(${PROJECT_NAME}
  src/main.cpp
)

target_include_directories(${PROJECT_NAME}
  PRIVATE
    ${Geant4_INCLUDE_DIR}
)

target_link_libraries(${PROJECT_NAME}
  ${Geant4_LIBRARIES}
)

target_compile_features(${PROJECT_NAME} PUBLIC cxx_std_17)

install(TARGETS app)
