#include "gtest/gtest.h"
#include "Account.hxx"

#include <string>

TEST(Account, getBalanceDefault) {
  ::testing::Test::RecordProperty("req", "ATM-512");
  Account acct;
  ASSERT_EQ(acct.getBalance(), 0.0);
}

TEST(Account, getBalanceInit) {
  ::testing::Test::RecordProperty("req", "ATM-512");
  const double initial = 123.0;
  Account acct(initial);
  ASSERT_EQ(acct.getBalance(), initial);
}

TEST(Account, getAndSetPassword) {
  ::testing::Test::RecordProperty("req", "ATM-512");
  std::string thePwd("The Password");
  Account acct;
  acct.setPassword(thePwd.c_str());
  std::string result(acct.getPassword());
  ASSERT_EQ(result, thePwd);
}

TEST(Account, getAndSetPasswordEmpty) {
  ::testing::Test::RecordProperty("req", "ATM-512");
  std::string thePwd("");
  Account acct;
  acct.setPassword(thePwd.c_str());
  std::string result(acct.getPassword());
  ASSERT_EQ(result, thePwd);
}

TEST(Account, getAndSetAccountNumber) {
  ::testing::Test::RecordProperty("req", "ATM-515");
  int num = 123;
  Account acct;
  acct.setAccountNumber(num);
  ASSERT_EQ(acct.getAccountNumber(), num);
}

TEST(Account, depositSimple) {
  ::testing::Test::RecordProperty("req", "ATM-510");
  const double initial = 123.0;
  const double amount = 456.0;
  Account acct(initial);
  acct.deposit(amount);
  ASSERT_EQ(acct.getBalance(), initial + amount);
}

TEST(Account, debitSimple) {
  ::testing::Test::RecordProperty("req", "ATM-510");
  const double initial = 123.0;
  const double amount = 45.0;
  Account acct(initial);
  acct.debit(amount);
  ASSERT_EQ(acct.getBalance(), initial - amount);
}

// TEST(Account, getBalanceInitBad) {
//  ::testing::Test::RecordProperty("req", "ATM_test-510");
//   const double initial = 223.0;
//   Account acct(initial);
//   ASSERT_EQ(acct.getBalance(), initial - 1.0);
// }


