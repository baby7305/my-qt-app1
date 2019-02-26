cmake_minimum_required(VERSION 3.13)
project(my_qt_app1)

set(CMAKE_CXX_STANDARD 11)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_PREFIX_PATH F:/Qt/Qt5.12.1/5.12.1/mingw73_64) #这里需要填入自己安装的路径

find_package(Qt5Widgets)

set(UI_FILES)
set(RC_FILES)
set(QRC_FILES)

set(SOURCE_FILES main.cpp MyWidget.cpp)

add_executable(my_qt_app1 WIN32 ${RC_FILES}${SOURCE_FILES}${UI_FILES}${QRC_FILES})

target_link_libraries(my_qt_app1 Qt5::Widgets)

qt5_use_modules(my_qt_app1 Widgets)