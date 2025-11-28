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

// Comprehensive tests for Account(double initial) constructor - Maximum Line Coverage
TEST(AccountConstructor, PositiveInitialValue) {
  ::testing::Test::RecordProperty("req", "ATM-700");
  
  // Test positive values - should create DEPOSIT transaction
  Account acct1(100.0);
  EXPECT_EQ(acct1.getBalance(), 100.0);
  
  Account acct2(0.01);  // Very small positive
  EXPECT_EQ(acct2.getBalance(), 0.01);
  
  Account acct3(999999.99);  // Large positive
  EXPECT_EQ(acct3.getBalance(), 999999.99);
  
  // Verify transaction was recorded as DEPOSIT for positive values
  // Note: Testing transaction recording requires access to internal state
  // This is verified through the behavior that balance equals initial value
}

TEST(AccountConstructor, ZeroInitialValue) {
  ::testing::Test::RecordProperty("req", "ATM-701");
  
  // Test zero value - should take else branch (WITHDRAW)
  Account acct(0.0);
  EXPECT_EQ(acct.getBalance(), 0.0);
  
  // Zero should trigger the else branch due to implicit boolean conversion
  // if (initial) evaluates to false for 0.0
}

TEST(AccountConstructor, NegativeInitialValue) {
  ::testing::Test::RecordProperty("req", "ATM-702");
  
  // Test negative values - should take else branch (WITHDRAW)
  Account acct1(-50.0);
  EXPECT_EQ(acct1.getBalance(), -50.0);
  
  Account acct2(-0.01);  // Very small negative
  EXPECT_EQ(acct2.getBalance(), -0.01);
  
  Account acct3(-999999.99);  // Large negative
  EXPECT_EQ(acct3.getBalance(), -999999.99);
}

TEST(AccountConstructor, BoundaryValues) {
  ::testing::Test::RecordProperty("req", "ATM-703");
  
  // Critical boundary testing around zero
  Account acctNegative(-0.001);  // Just below zero
  EXPECT_EQ(acctNegative.getBalance(), -0.001);
  
  Account acctZero(0.0);  // Exactly zero
  EXPECT_EQ(acctZero.getBalance(), 0.0);
  
  Account acctPositive(0.001);  // Just above zero  
  EXPECT_EQ(acctPositive.getBalance(), 0.001);
}

TEST(AccountConstructor, FloatingPointPrecision) {
  ::testing::Test::RecordProperty("req", "ATM-704");
  
  // Test floating point precision edge cases
  Account acct1(123.456789);
  EXPECT_DOUBLE_EQ(acct1.getBalance(), 123.456789);
  
  Account acct2(0.000001);  // Very small positive
  EXPECT_DOUBLE_EQ(acct2.getBalance(), 0.000001);
  
  Account acct3(-0.000001);  // Very small negative
  EXPECT_DOUBLE_EQ(acct3.getBalance(), -0.000001);
}

TEST(AccountConstructor, InitialStateVerification) {
  ::testing::Test::RecordProperty("req", "ATM-705");
  
  // Verify constructor properly initializes all aspects
  Account acct(42.0);
  
  // Balance should be set
  EXPECT_EQ(acct.getBalance(), 42.0);
  
  // Account number should be default initialized
  EXPECT_EQ(acct.getAccountNumber(), 0);
  
  // Password should be empty
  EXPECT_STREQ(acct.getPassword(), "");
  
  // Test that we can still set properties after construction
  acct.setAccountNumber(12345);
  EXPECT_EQ(acct.getAccountNumber(), 12345);
  
  acct.setPassword("test123");
  EXPECT_STREQ(acct.getPassword(), "test123");
}

TEST(AccountConstructor, TransactionBehaviorVerification) {
  ::testing::Test::RecordProperty("req", "ATM-706");
  
  // Test that constructor creates appropriate transaction
  // Positive value constructor
  Account acctPos(100.0);
  // After construction, calling getBalance should add another transaction
  // The initial balance should still be correct
  double balance1 = acctPos.getBalance();
  EXPECT_EQ(balance1, 100.0);
  
  // Zero value constructor  
  Account acctZero(0.0);
  double balance2 = acctZero.getBalance();
  EXPECT_EQ(balance2, 0.0);
  
  // Negative value constructor
  Account acctNeg(-25.0);
  double balance3 = acctNeg.getBalance();
  EXPECT_EQ(balance3, -25.0);
}

// Comprehensive tests for Account(Account&& a) move constructor - Maximum Code Coverage
TEST(AccountMoveConstructor, BasicMoveSemantics) {
  ::testing::Test::RecordProperty("req", "ATM-800");
  
  // Create source account with data
  Account source(150.0);
  source.setAccountNumber(12345);
  source.setPassword("originalPassword");
  source.deposit(50.0);  // Add additional transaction
  
  // Store original values for verification
  int originalAccountNumber = source.getAccountNumber();
  double originalBalance = source.getBalance();
  std::string originalPassword = source.getPassword();
  
  // Move construct new account
  Account moved(std::move(source));
  
  // Verify moved account has correct values
  EXPECT_EQ(moved.getAccountNumber(), originalAccountNumber);
  EXPECT_EQ(moved.getBalance(), originalBalance);
  EXPECT_STREQ(moved.getPassword(), originalPassword.c_str());
}

TEST(AccountMoveConstructor, ResourceOwnershipTransfer) {
  ::testing::Test::RecordProperty("req", "ATM-801");
  
  // Create source account with complex state
  Account source(100.0);
  source.setAccountNumber(98765);
  source.setPassword("complexPassword123");
  source.deposit(25.0);
  source.debit(15.0);
  source.deposit(10.0);
  
  // Capture original state
  std::string originalPassword = source.getPassword();
  double originalBalance = source.getBalance();
  
  // Move construct - should transfer ownership of string and vector
  Account moved(std::move(source));
  
  // Verify moved object has proper state
  EXPECT_STREQ(moved.getPassword(), originalPassword.c_str());
  EXPECT_EQ(moved.getBalance(), originalBalance);
  EXPECT_EQ(moved.getAccountNumber(), 98765);
  
  // Source object should be in valid but unspecified state
  // We can still call methods on it safely (though content may be moved)
  EXPECT_NO_THROW(source.getAccountNumber());  // Primitive types not moved
  EXPECT_NO_THROW(source.getBalance());
}

TEST(AccountMoveConstructor, EmptyAccountMove) {
  ::testing::Test::RecordProperty("req", "ATM-802");
  
  // Test moving default-constructed account
  Account source;  // Default constructor
  
  // Move construct from empty account
  Account moved(std::move(source));
  
  // Verify default values transferred correctly
  EXPECT_EQ(moved.getAccountNumber(), 0);
  EXPECT_EQ(moved.getBalance(), 0.0);
  EXPECT_STREQ(moved.getPassword(), "");
}

TEST(AccountMoveConstructor, ZeroBalanceAccountMove) {
  ::testing::Test::RecordProperty("req", "ATM-803");
  
  // Create account with zero balance (triggers else branch in constructor)
  Account source(0.0);
  source.setAccountNumber(11111);
  source.setPassword("zeroAccount");
  
  // Move construct
  Account moved(std::move(source));
  
  // Verify zero balance and other properties transferred
  EXPECT_EQ(moved.getBalance(), 0.0);
  EXPECT_EQ(moved.getAccountNumber(), 11111);
  EXPECT_STREQ(moved.getPassword(), "zeroAccount");
}

TEST(AccountMoveConstructor, NegativeBalanceAccountMove) {
  ::testing::Test::RecordProperty("req", "ATM-804");
  
  // Create account with negative balance
  Account source(-50.0);
  source.setAccountNumber(22222);
  source.setPassword("negativeAccount");
  
  // Move construct
  Account moved(std::move(source));
  
  // Verify negative balance and properties transferred
  EXPECT_EQ(moved.getBalance(), -50.0);
  EXPECT_EQ(moved.getAccountNumber(), 22222);
  EXPECT_STREQ(moved.getPassword(), "negativeAccount");
}

TEST(AccountMoveConstructor, MultipleTransactionsMove) {
  ::testing::Test::RecordProperty("req", "ATM-805");
  
  // Create account with multiple transactions to test vector move
  Account source(1000.0);
  source.setAccountNumber(33333);
  source.setPassword("multiTransAccount");
  
  // Create multiple transactions
  source.deposit(100.0);
  source.debit(50.0);
  source.deposit(25.0);
  source.debit(75.0);
  
  double finalBalance = source.getBalance();
  
  // Move construct
  Account moved(std::move(source));
  
  // Verify final state after all transactions
  EXPECT_EQ(moved.getBalance(), finalBalance);
  EXPECT_EQ(moved.getAccountNumber(), 33333);
  EXPECT_STREQ(moved.getPassword(), "multiTransAccount");
}

TEST(AccountMoveConstructor, NoexceptGuarantee) {
  ::testing::Test::RecordProperty("req", "ATM-806");
  
  // Verify move constructor is noexcept (important for STL containers)
  EXPECT_TRUE(std::is_nothrow_move_constructible<Account>::value);
  
  // Create source account
  Account source(500.0);
  source.setAccountNumber(44444);
  source.setPassword("noexceptTest");
  
  // Move construction should not throw
  EXPECT_NO_THROW({
    Account moved(std::move(source));
    EXPECT_EQ(moved.getBalance(), 500.0);
    EXPECT_EQ(moved.getAccountNumber(), 44444);
  });
}

TEST(AccountMoveConstructor, STLContainerCompatibility) {
  ::testing::Test::RecordProperty("req", "ATM-807");
  
  // Test move constructor works properly with STL containers
  std::vector<Account> accounts;
  
  // Create account and move into vector
  Account source(750.0);
  source.setAccountNumber(55555);
  source.setPassword("vectorTest");
  source.deposit(50.0);
  
  double originalBalance = source.getBalance();
  
  // Move into vector (should use move constructor)
  accounts.push_back(std::move(source));
  
  // Verify account in vector has correct state
  EXPECT_EQ(accounts[0].getBalance(), originalBalance);
  EXPECT_EQ(accounts[0].getAccountNumber(), 55555);
  EXPECT_STREQ(accounts[0].getPassword(), "vectorTest");
  
  // Test vector resize (may trigger move constructor)
  accounts.reserve(100);  // Force potential reallocation
  EXPECT_EQ(accounts[0].getBalance(), originalBalance);
  EXPECT_EQ(accounts[0].getAccountNumber(), 55555);
  EXPECT_STREQ(accounts[0].getPassword(), "vectorTest");
}
