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

class SavingsAccount: virtual public Account {
public:
	SavingsAccount(double, double);
	
//	void withdraw(double) const override;
//	void interestRate() const override;
	
};

#endif /* SavingsAccount_hpp */
