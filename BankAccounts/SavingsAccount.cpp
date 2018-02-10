//
//  SavingsAccount.cpp
//  BankAccounts
//
//  Created by Soheil on 31/01/2018.
//  Copyright © 2018 Soheil Novinfard. All rights reserved.
//

#include <stdexcept>
#include "SavingsAccount.hpp"
using namespace std;

SavingsAccount::SavingsAccount(const string &firstnameValue, double balanceValue):
Account(firstnameValue, balanceValue){
	interestRate = 0.005;
};

void SavingsAccount::withdraw(double withdrawValue) {
	if(getBalance() - withdrawValue >= 0) {
		setBalance(getBalance() - withdrawValue);
	} else {
		throw invalid_argument("saving account's balance should be >= 0.0");
	}
}

double SavingsAccount::getInterest() const {
	double interest = getBalance() * interestRate;
	return interest;
}

void SavingsAccount::setInterest() {
	double interest = SavingsAccount::getInterest();
	setBalance(interest + getBalance());
}


double SavingsAccount::getInterestRate() const {
	return interestRate;
}
