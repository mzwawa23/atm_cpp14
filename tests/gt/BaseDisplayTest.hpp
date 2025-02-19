#include "gtest/gtest.h"
#include "BaseDisplay.hxx"


TEST(BaseDisplay, getType) {
  ::testing::Test::RecordProperty("req", "ATM_514");
  BaseDisplay disp;
  ASSERT_EQ(disp.getType(), BaseDisplay::SECURE);
}

