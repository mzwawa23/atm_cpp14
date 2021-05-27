#include "gtest/gtest.h"
#include "BaseDisplay.hxx"


TEST(BaseDisplay, getType) {
  BaseDisplay disp;
  ASSERT_EQ(disp.getType(), BaseDisplay::SECURE);
}

