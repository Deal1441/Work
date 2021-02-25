#include "gtest/gtest.h"
#include "dz5.h"

TEST (DZ5Tests, DZ5TrueCheck)
{
    EXPECT_TRUE ( is_dz5 ( 2 ) );
    EXPECT_TRUE ( is_dz5 ( 3 ) );
    EXPECT_TRUE ( is_dz5 ( 9 ) );
    EXPECT_TRUE ( is_dz5 ( 6 ) );
    EXPECT_TRUE ( is_dz5 ( 5 ) );
}

TEST (DZ5Tests, DZ5FalseCheck)
{
    EXPECT_FALSE ( is_dz5 ( 0 ) );
    EXPECT_FALSE ( is_dz5 ( -1 ) );
    EXPECT_FALSE ( is_dz5 ( -10 ) );
  }
