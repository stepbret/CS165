/***********************************************************************************************************
 ** Author: Brett Stephenson
 ** Date: 1/19/2016
 ** Description: This is the function definitions for the BankAccount program
 * *******************************************************************************************************/
#include "BankAccount.hpp"
#include <iostream>

//create the object and pass values, this doesn't need set methods, becuase they are being defined directly
BankAccount::BankAccount(std::string name, std::string ID, double balance)
{	customerName = name;
	customerID = ID;
	customerBalance = balance;
	
}

//define functions for the class
std::string BankAccount::getCustomerName(){
	return customerName;
}

std::string BankAccount::getCustomerID(){
	return customerID;
}

double BankAccount::getCustomerBalance(){
	return customerBalance;
}


//withdraw function balance - withdraw amount
double BankAccount::withdraw(double amount){
	return customerBalance -= amount;
}

//Deposit function
double BankAccount::deposit(double amount){
	return customerBalance+= amount;
}
/*
int main(){
	BankAccount ba1("steve", "This ID", 4325);
	std::cout << ba1.getCustomerName() << std::endl;
	std::cout << ba1.getCustomerID() << std::endl;
	std::cout << ba1.getCustomerBalance() << std::endl;
	std::cout << ba1.withdraw(325) <<std::endl;

return 0;
}*/
