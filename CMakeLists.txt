cmake_minimum_required(VERSION 2.8.4)
set(CMAKE_TOOLCHAIN_FILE ${CMAKE_SOURCE_DIR}/cmake/ArduinoToolchain.cmake)
set(CMAKE_CXX_STANDARD 98)
set(PROJECT_NAME SerialTemplate)
set(${PROJECT_NAME}_BOARD uno)

# set(ARDUINO_CPU)
project(${PROJECT_NAME})

# set(${PROJECT_NAME}_SRCS)
# set(${PROJECT_NAME}_HDRS)
# set(${PROJECT_NAME}_LIBS)
# link_directories(${CMAKE_CURRENT_SOURCE_DIR}/)
# add_subdirectory()
# set(${PROJECT_NAME}_SKETCH Guess.ino)
# set(${PROJECT_NAME}_PROGRAMMER avrispmkii)
set(${PROJECT_NAME}_PORT COM6)
# set(${PROJECT_NAME}_AFLAGS -v)
set(uno.upload.speed 115200)

set(${PROJECT_NAME}_SKETCH SerialTemplate.ino)

#### Uncomment below additional settings as needed.
# set(${CMAKE_PROJECT_NAME}_BOARD mega)
# set(${CMAKE_PROJECT_NAME}_PORT /dev/ttyACM0)
# set(mega.build.mcu atmega2560)
# set(mega.upload.protocol wiring)
# set(mega.upload.speed 115200)

generate_arduino_firmware(${PROJECT_NAME})
