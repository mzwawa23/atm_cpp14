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

// processData() unit tests for 100% MC/DC coverage
// Decision: if (value < 0)
//   TRUE  path → returns -1
//   FALSE path → allocates buffer, returns value * 2

TEST(ProcessData, negativeValueReturnsMinusOne) {
  // MC/DC condition TRUE: value < 0
  ::testing::Test::RecordProperty("req", "ATM-520");
  ASSERT_EQ(processData(-1), -1);
}

TEST(ProcessData, largeNegativeReturnsMinusOne) {
  // MC/DC condition TRUE: value < 0 (large magnitude)
  ::testing::Test::RecordProperty("req", "ATM-520");
  ASSERT_EQ(processData(-1000), -1);
}

TEST(ProcessData, zeroReturnsDoubled) {
  // MC/DC condition FALSE: value == 0 (lower boundary of false path)
  ::testing::Test::RecordProperty("req", "ATM-520");
  ASSERT_EQ(processData(0), 0 * 2);
}

TEST(ProcessData, positiveOneReturnsDoubled) {
  // MC/DC condition FALSE: value == 1 (first positive value)
  ::testing::Test::RecordProperty("req", "ATM-520");
  ASSERT_EQ(processData(1), 1 * 2);
}

TEST(ProcessData, positiveValueReturnsDoubled) {
  // MC/DC condition FALSE: value > 0
  ::testing::Test::RecordProperty("req", "ATM-520");
  ASSERT_EQ(processData(5), 5 * 2);
}

TEST(ProcessData, mcdcIndependentConditionEffect) {
  // MC/DC: shows condition value < 0 independently determines outcome
  // Changing only condition from FALSE to TRUE changes the result
  ::testing::Test::RecordProperty("req", "ATM-520");
  ASSERT_EQ(processData(-1), -1);  // condition TRUE  → -1
  ASSERT_EQ(processData(1),   2);  // condition FALSE → 2
}

// TEST(Account, getBalanceInitBad) {
//  ::testing::Test::RecordProperty("req", "ATM_test-510");
//   const double initial = 223.0;
//   Account acct(initial);
//   ASSERT_EQ(acct.getBalance(), initial - 1.0);
// }
