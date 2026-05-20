#include "gtest/gtest.h"
#include "BaseDisplay.hxx"


TEST(BaseDisplay, getType) {
  ::testing::Test::RecordProperty("req", "ATM_514");
  ::testing::Test::RecordProperty("cpptest_filename", __FILE__);
  BaseDisplay disp;
  ASSERT_EQ(disp.getType(), BaseDisplay::SECURE);
}

