#ifdef PARASOFT_CPPTEST
#include "cpptest/gtest.h"
#else
#include "gtest/gtest.h"
#endif

#include "AccountTest.hpp"
#include "BankTest.hpp"
#include "BaseDisplayTest.hpp"


int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
#ifdef PARASOFT_CPPTEST
  CppTest_GoogleTestListener::Append();
#endif
  return RUN_ALL_TESTS();
}

