#include "gtest/gtest.h"
#include "Calculator.h"

TEST(MyTests, TestAdd) {
    int a = 5;
    int b = 2;
    
    int result = Library::Add( a, b );
    EXPECT_EQ( result, 7 );
}

TEST(MyTests, TestSubtract) {
    int a = 5;
    int b = 2;
    
    int result = Library::Subtract( a, b );
    EXPECT_EQ( result, 3 );
}

TEST(MyTests, TestMultiply) {
    int a = 5;
    int b = 2;
    
    int result = Library::Multiply( a, b );
    EXPECT_EQ( result, 10 );
}