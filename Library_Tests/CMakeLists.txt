include_directories( ../googletest/googletest/include )
include_directories( ../Library/include )

set(SourceFiles
    src/test_Calculator.cpp 
)

set( AppName LibraryTests )

add_executable(${AppName} ${SourceFiles} )

target_link_libraries( ${AppName} gtest_main )
target_link_libraries( ${AppName} Calculator )