//
//  SavingsAccount.hpp
//  BankAccounts
//
//  Created by Soheil on 31/01/2018.
//  Copyright © 2018 Soheil Novinfard. All rights reserved.
//

#ifndef SavingsAccount_hpp
#define SavingsAccount_hpp

#include <stdio.h>
#include <string>
#include "Account.hpp"

class SavingsAccount: public Account {
public:
	SavingsAccount(const std::string &, double);
	
	void withdraw(double) override;
	double getInterest() const override;
	void setInterest() override;
	double getInterestRate() const override;
	
};

#endif /* SavingsAccount_hpp */
