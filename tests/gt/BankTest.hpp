#include "gtest/gtest.h"
#include "Account.hxx"
#include "Bank.hxx"


TEST(Bank, addAccount) {
  Bank theBank;
  Account * acct = theBank.addAccount();
  ASSERT_TRUE(nullptr != acct);
}

TEST(Bank, addAccountMultiple) {
  int count = 10;
  Bank theBank;
  for (int i = 0; i < count; i ++) {
    Account * acct = theBank.addAccount();
    ASSERT_TRUE(nullptr != acct);
    ASSERT_EQ(acct->getAccountNumber(), i);
  }
}




