#include "gtest/gtest.h"
#include "BaseDisplay.hxx"


TEST(BaseDisplay, getType) {
  ::testing::Test::RecordProperty("req", "ATM_test-522");
  BaseDisplay disp;
  ASSERT_EQ(disp.getType(), BaseDisplay::SECURE);
}

