
#include "gtest/gtest.h"
#include "cpptest/gtest.h"

#include "AccountTest.hpp"
#include "BankTest.hpp"
#include "BaseDisplayTest.hpp"


int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  CppTest_GoogleTestListener::Append();
  return RUN_ALL_TESTS();
}

