# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "C:/Users/IURII/esp/esp-idf/components/bootloader/subproject"
  "D:/SpotMicro_ESP32/code/esp-idf/ik_test/build/bootloader"
  "D:/SpotMicro_ESP32/code/esp-idf/ik_test/build/bootloader-prefix"
  "D:/SpotMicro_ESP32/code/esp-idf/ik_test/build/bootloader-prefix/tmp"
  "D:/SpotMicro_ESP32/code/esp-idf/ik_test/build/bootloader-prefix/src/bootloader-stamp"
  "D:/SpotMicro_ESP32/code/esp-idf/ik_test/build/bootloader-prefix/src"
  "D:/SpotMicro_ESP32/code/esp-idf/ik_test/build/bootloader-prefix/src/bootloader-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "D:/SpotMicro_ESP32/code/esp-idf/ik_test/build/bootloader-prefix/src/bootloader-stamp/${subDir}")
endforeach()
