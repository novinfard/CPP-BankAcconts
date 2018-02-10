//
//  Account.cpp
//  BankAccounts
//
//  Created by Soheil on 31/01/2018.
//  Copyright © 2018 Soheil Novinfard. All rights reserved.
//

#include "Account.hpp"
using namespace std;

Account::Account(const string &firstnameValue, double balanceValue):
fullname(firstnameValue), balance(balanceValue) {
	
}

void Account::setBalance(double balanceValue) {
	balance = balanceValue;
}

double Account::getBalance() const {
	return balance;
}

void Account::deposit(double depositValue) {
	setBalance(balance + depositValue);
}

void Account::setFullname(const string &fullnameValue) {
	fullname = fullnameValue;
}

string Account::getFullname() const {
	return fullname;
}

void Account::withdraw(double withdrawValue) {
	if(getBalance() - withdrawValue >= 0) {
		setBalance(getBalance() - withdrawValue);
	} else {
		throw invalid_argument("saving account's balance should be >= 0.0");
	}
}

void Account::setInterest() {
	throw invalid_argument("This member function is only could be applied for children which implements this class");
}


