cmake_minimum_required(VERSION 3.14)
project(game_ui)

set(game_VERSION_MAJOR 0)
set(game_VERSION_MINOR 1)

set(CMAKE_CXX_STANDARD 17)

include_directories(/home/sarcoma/Aur/allegro-git/src/build/include)
link_directories(/home/sarcoma/Aur/allegro-git/src/build/lib)

set(
        game_SRCS
        main.cpp
        settings/Resolution.cpp
        settings/Resolution.h
        main.h
        user-interface/Panel.cpp
        user-interface/Panel.h
        utilities/colour/Colour.cpp
        utilities/colour/Colour.h
        structs/Colours.h
        user-interface/Rect.cpp
        user-interface/Rect.h
        utilities/font/Font.cpp utilities/font/Font.h utilities/font/FontFamily.cpp utilities/font/FontFamily.h)

add_executable(game_ui ${game_SRCS})

set(
        game_LIBS
        liballegro.so
        liballegro_dialog.so
        liballegro_font.so
        liballegro_ttf.so
        liballegro_main.so
        liballegro_image.so
        liballegro_primitives.so
)

target_link_libraries(game_ui ${game_LIBS})

if (NOT ${PROJECT_SOURCE_DIR} STREQUAL ${CMAKE_CURRENT_BINARY_DIR})
    file(COPY "${PROJECT_SOURCE_DIR}/resources" DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
endif()

