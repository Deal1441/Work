#include "gtest/gtest.h"
#include "dz7.h"

TEST (DZ7Tests, DZ7TrueCheck)
{
    EXPECT_TRUE ( is_dz7 ( 1010 ) ); // число 10 в дес
    EXPECT_TRUE ( is_dz7 ( 10111 ) ); // число 23 в дес
    EXPECT_TRUE ( is_dz7 ( 100010 ) ); // число 34 в дес
    EXPECT_TRUE ( is_dz7 ( 1100100 ) ); // число 100 в дес
    EXPECT_TRUE ( is_dz7 ( 100010 ) ); // число 34 в дес
}

TEST (DZ7Tests, DZ7FalseCheck)
{
    EXPECT_FALSE ( is_dz7 ( 0 ) );
    EXPECT_FALSE ( is_dz7 ( 1 ) );
    EXPECT_FALSE ( is_dz7 ( -1 ) );
    EXPECT_FALSE ( is_dz7 ( 2356 ) );
    EXPECT_FALSE ( is_dz7 ( 1940628 ) );
}
