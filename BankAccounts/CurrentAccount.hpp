//
//  CurrentAccount.hpp
//  BankAccounts
//
//  Created by Soheil on 31/01/2018.
//  Copyright © 2018 Soheil Novinfard. All rights reserved.
//

#ifndef CurrentAccount_hpp
#define CurrentAccount_hpp

#include <stdio.h>
#include <string>
#include "Account.hpp"

class CurrentAccount: public Account {
public:
	CurrentAccount(const std::string &, double);
	
	void withdraw(double) override;
	double getInterest() const override;
	void setInterest() override;
	double getInterestRate() const override;
	
};

#endif /* CurrentAccount_hpp */
