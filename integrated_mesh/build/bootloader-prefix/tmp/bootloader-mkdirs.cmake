# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/Users/kaedekawata/esp/esp-idf/components/bootloader/subproject"
  "/Users/kaedekawata/Documents/EC544/ec544_project/integrated_mesh/build/bootloader"
  "/Users/kaedekawata/Documents/EC544/ec544_project/integrated_mesh/build/bootloader-prefix"
  "/Users/kaedekawata/Documents/EC544/ec544_project/integrated_mesh/build/bootloader-prefix/tmp"
  "/Users/kaedekawata/Documents/EC544/ec544_project/integrated_mesh/build/bootloader-prefix/src/bootloader-stamp"
  "/Users/kaedekawata/Documents/EC544/ec544_project/integrated_mesh/build/bootloader-prefix/src"
  "/Users/kaedekawata/Documents/EC544/ec544_project/integrated_mesh/build/bootloader-prefix/src/bootloader-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/Users/kaedekawata/Documents/EC544/ec544_project/integrated_mesh/build/bootloader-prefix/src/bootloader-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/Users/kaedekawata/Documents/EC544/ec544_project/integrated_mesh/build/bootloader-prefix/src/bootloader-stamp${cfgdir}") # cfgdir has leading slash
endif()
