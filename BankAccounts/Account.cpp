//
//  Account.cpp
//  BankAccounts
//
//  Created by Soheil on 31/01/2018.
//  Copyright © 2018 Soheil Novinfard. All rights reserved.
//

#include "Account.hpp"

Account::Account(double balanceValue, double interestRateValue):
balance(balanceValue), interestRate(interestRateValue) {
	
}

double Account::getInterest() const {
	double interest = balance * interestRate;
	return interest;
}

double Account::getBalance() const {
	return balance;
}

void Account::deposit(double) const {
	// TODO
}

