#include "gtest/gtest.h"
#include "dz4.h"

TEST (DZ7Tests, DZ7TrueCheck)
{
    EXPECT_TRUE ( is_dz4 ( 2 ) );
    EXPECT_TRUE ( is_dz4 ( 3 ) );
    EXPECT_TRUE ( is_dz4 ( 9 ) );
    EXPECT_TRUE ( is_dz4 ( 6 ) );
    EXPECT_TRUE ( is_dz4 ( 5 ) );
}

TEST (DZ7Tests, DZ7FalseCheck)
{
    EXPECT_FALSE ( is_dz4 ( 0 ) );
    EXPECT_FALSE ( is_dz4 ( -1 ) );
    EXPECT_FALSE ( is_dz4 ( -10 ) );
    EXPECT_FALSE ( is_dz4 ( 246 ) );
    EXPECT_FALSE ( is_dz4 ( 1940628 ) );
}
