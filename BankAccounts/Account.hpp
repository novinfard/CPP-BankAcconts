//
//  Account.hpp
//  BankAccounts
//
//  Created by Soheil on 31/01/2018.
//  Copyright © 2018 Soheil Novinfard. All rights reserved.
//

#ifndef Account_hpp
#define Account_hpp

#include <stdio.h>
#include <string>

class Account {
public:
	Account(double, double);
	
	double getBalance() const;
	double getInterest() const;
	void deposit(double) const;
	
	virtual void withdraw(double) const = 0; // pure virtual
//	virtual void changeInterestRate() const = 0; // pure virtual
	
private:
	double balance;
	const double interestRate;
};

#endif /* Account_hpp */
