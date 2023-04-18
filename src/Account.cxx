#include "Account.hxx"
#include "ATM.hxx"
#include "BaseDisplay.hxx"

#include <utility>

static const int STANDARD = 1;
static const int SILVER = 2;
static const int GOLD = 3;
static const int PLATINUM = 4;

int globalState = 0; 
static double value = 0;

// C++11/14: move constructor
Account::Account(Account&& a):
    myAccountNumber(a.myAccountNumber),
    myBalance(a.myBalance),
    myPassword(std::move(a.myPassword)),
    myTransactions(std::move(a.myTransactions))
{

}

Account::Account(double initial): myBalance(initial)
{
	if (initial) {
	    myTransactions.emplace_back(UserRequest::REQUEST_DEPOSIT, initial);
	} else {
	    myTransactions.emplace_back(UserRequest::REQUEST_WITHDRAW, initial);
	}
}

double Account::deposit(double amount)
{
    myTransactions.emplace_back(UserRequest::REQUEST_DEPOSIT, amount);

    myBalance += amount;
    return (getBalance());
}


int Account::setStatus(double income)
{
	int accountStatus = 0;
	double balance = getBalance();
	double annual_income = income * 12;
	value = annual_income + balance;

	if (value <= 10000)
	{
		accountStatus = STANDARD;
	}
	else if (value > 10000 && value <= 20000)
	{
		accountStatus = SILVER;
	}
	else if (value > 20000 && value <= 40000)
	{
		accountStatus = SILVER;
	}
	else if (value > 40000 && value <= 60000)
	{
		accountStatus = GOLD;
	}
	else if (value > 60000)
	{
		accountStatus = PLATINUM;
	}

	return accountStatus;
}


double Account::debit(double amount)
{
    myTransactions.emplace_back(UserRequest::REQUEST_WITHDRAW, amount);
    myBalance -= amount;
    return (getBalance());
}

int Account::listTransactions(BaseDisplay& display, UserRequest type) {

	int transactionsCount = 0;

	if (display.getType() == BaseDisplay::UNKNOWN) {
		display.logError("Unknown display");
		return transactionsCount;
	}

	// C++11/14: for-each statement:
	for(auto&& tuple : myTransactions) {
		display.showBalance(std::get<1>(tuple));
	}


	// C++11/14: lambda expression
	std::for_each(
			myTransactions.begin(),
			myTransactions.end(),
			[display, &transactionsCount, type](std::tuple<UserRequest, double> tuple) mutable
			{
				display.showTransaction(std::get<0>(tuple), std::get<1>(tuple));
				if (std::get<0>(tuple) == type) {
				    transactionsCount++;
				}
			});
    return transactionsCount;
}
