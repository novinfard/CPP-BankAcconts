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
	Account(const std::string &, double);
	
	double getBalance() const;
	void deposit(double);
	void setFullname(const std::string &);
	std::string getFullname() const;
	
	virtual void withdraw(double);
	virtual double getInterest() const = 0; // pure virtual
	virtual void setInterest();
	virtual double getInterestRate() const = 0; // pure virtual

	
private:
	std::string fullname;
	double balance;
	
protected:
	void setBalance(double);
	double interestRate;
};

#endif /* Account_hpp */
