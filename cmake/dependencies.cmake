include(FetchContent)

set(RAYLIB_VERSION 5.0.0)

FetchContent_Declare(
    Raylib 
    URL https://github.com/raysan5/raylib/archive/refs/tags/${RAYLIB_VERSION}.tar.gz
    FIND_PACKAGE_ARGS ${RAYLIB_VERSION}
)
set(BUILD_EXAMPLES OFF CACHE INTERNAL "")
FetchContent_MakeAvailable(Raylib)
