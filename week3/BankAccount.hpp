/*****************************************************************************
 ** Author: Brett Stephenson
 ** Date: 1/19/2016
 ** Description
 * ****************************************************************************/
#ifndef BANK_ACCOUNT
#define BANK_ACCOUNT

#include <string>

class BankAccount 
{
   private:
	std::string customerName;
	std::string customerID;
	double customerBalance;
 
   public:
	BankAccount();
	BankAccount(std::string, std::string, double);
	std::string getCustomerName();
	std::string getCustomerID();
	double getCustomerBalance(); 
	double withdraw(double amount);
	double deposit(double amount);
	/*std::string customerName;
	std::string customerID;
	double customerBalance;*/
	double amount;
};
#endif
