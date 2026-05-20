#include "gtest/gtest.h"
#include "Account.hxx"

#include <string>

TEST(Account, getBalanceDefault) {
  RecordProperty("cpptest_filename", __FILE__);
  ::testing::Test::RecordProperty("req", "ATM-512");
  Account acct;
  ASSERT_EQ(acct.getBalance(), 0.0);
}

TEST(Account, getBalanceInit) {
  RecordProperty("cpptest_filename", __FILE__);
  ::testing::Test::RecordProperty("req", "ATM-512");
  const double initial = 123.0;
  Account acct(initial);
  ASSERT_EQ(acct.getBalance(), initial);
}

TEST(Account, getAndSetPassword) {
  RecordProperty("cpptest_filename", __FILE__);
  ::testing::Test::RecordProperty("req", "ATM-512");
  std::string thePwd("The Password");
  Account acct;
  acct.setPassword(thePwd.c_str());
  std::string result(acct.getPassword());
  ASSERT_EQ(result, thePwd);
}

TEST(Account, getAndSetPasswordEmpty) {
  RecordProperty("cpptest_filename", __FILE__);
  ::testing::Test::RecordProperty("req", "ATM-512");
  std::string thePwd("");
  Account acct;
  acct.setPassword(thePwd.c_str());
  std::string result(acct.getPassword());
  ASSERT_EQ(result, thePwd);
}

TEST(Account, getAndSetAccountNumber) {
  RecordProperty("cpptest_filename", __FILE__);
  ::testing::Test::RecordProperty("req", "ATM-515");
  int num = 123;
  Account acct;
  acct.setAccountNumber(num);
  ASSERT_EQ(acct.getAccountNumber(), num);
}

TEST(Account, depositSimple) {
  RecordProperty("cpptest_filename", __FILE__);
  ::testing::Test::RecordProperty("req", "ATM-510");
  const double initial = 123.0;
  const double amount = 456.0;
  Account acct(initial);
  acct.deposit(amount);
  ASSERT_EQ(acct.getBalance(), initial + amount);
}

TEST(Account, debitSimple) {
  RecordProperty("cpptest_filename", __FILE__);
  ::testing::Test::RecordProperty("req", "ATM-510");
  const double initial = 123.0;
  const double amount = 45.0;
  Account acct(initial);
  acct.debit(amount);
  ASSERT_EQ(acct.getBalance(), initial - amount);
}

// TEST(Account, getBalanceInitBad) {
//   RecordProperty("cpptest_filename", __FILE__);
//  ::testing::Test::RecordProperty("req", "ATM_test-510");
//   const double initial = 223.0;
//   Account acct(initial);
//   ASSERT_EQ(acct.getBalance(), initial - 1.0);
// }
