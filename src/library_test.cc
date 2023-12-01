#include "library.h"

#include <gtest/gtest.h>

namespace cpp {

TEST(LibraryTest, TestSubtract) {
  EXPECT_EQ(subtract(2, 1), 1);
  EXPECT_EQ(subtract(1, 2), -1);
}

}  // namespace cpp