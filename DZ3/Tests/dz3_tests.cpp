#include "gtest/gtest.h"
#include "dz3.h"

TEST (DZ3Tests, DZ3TrueCheck)
{
    EXPECT_TRUE ( is_dz3 ( " Square circle more " ) );
    EXPECT_TRUE ( is_dz3 ( 3.3 ) );
    EXPECT_TRUE ( is_dz3 ( 9 ) );

}

TEST (DZ3Tests, DZ3FalseCheck)
{
    EXPECT_FALSE ( is_dz3 ( 0 ) );
    EXPECT_FALSE ( is_dz3 ( -1 ) );
    EXPECT_FALSE ( is_dz3 ( -10 ) );

}
