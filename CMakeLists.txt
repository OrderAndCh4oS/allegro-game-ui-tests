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
        utilities/user-interface/Panel.cpp
        utilities/user-interface/Panel.h
        utilities/colour/Colour.cpp
        utilities/colour/Colour.h
        utilities/colour/ColourGroup.h
        utilities/user-interface/Box.cpp
        utilities/user-interface/Box.h
        utilities/font/Font.cpp
        utilities/font/Font.h
        constants/colour.h
        constants/colour.cpp initialisers/InitConstants.cpp initialisers/InitConstants.h utilities/font/FontStyle.cpp utilities/font/FontStyle.h utilities/geometry/Point.cpp utilities/geometry/Point.h utilities/user-interface/Button.cpp utilities/user-interface/Button.h utilities/user-interface/TextBox.cpp utilities/user-interface/TextBox.h initialisers/InitAllegro.cpp initialisers/InitAllegro.h exceptions/InitError.cpp exceptions/InitError.h utilities/image/ImageCollection.cpp utilities/image/ImageCollection.h utilities/image/Image.cpp utilities/image/Image.h utilities/primitives/Rect.cpp utilities/primitives/Rect.h)

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

