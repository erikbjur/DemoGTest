include_directories(include)
include_directories(../Library/include)

set(SourceFiles
    src/main.cpp 
)

set( AppName MyApp )

add_executable(${AppName} ${SourceFiles} )

target_link_libraries( ${AppName} Calculator )