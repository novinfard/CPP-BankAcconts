//
//  CurrentAccount.cpp
//  BankAccounts
//
//  Created by Soheil on 31/01/2018.
//  Copyright © 2018 Soheil Novinfard. All rights reserved.
//

#include <stdexcept>
#include "CurrentAccount.hpp"
using namespace std;

CurrentAccount::CurrentAccount(const string &firstnameValue, double balanceValue):
Account(firstnameValue, balanceValue){
	interestRate = 0;
};

void CurrentAccount::withdraw(double withdrawValue) {
	if(getBalance() - withdrawValue >= -100) {
		setBalance(getBalance() - withdrawValue);
	} else {
		throw invalid_argument("current account's balance should be >= -100.0");
	}
}

double CurrentAccount::getInterest() const {
	return 0;
}

void CurrentAccount::setInterest() {
	throw invalid_argument("current account has no interest");
}


double CurrentAccount::getInterestRate() const {
	return interestRate;
}
