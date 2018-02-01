//
//  Customer.hpp
//  BankAccounts
//
//  Created by Soheil on 31/01/2018.
//  Copyright © 2018 Soheil Novinfard. All rights reserved.
//

#ifndef Customer_hpp
#define Customer_hpp

#include <stdio.h>
#include <string>
#include "Account.hpp"

class Customer {
public:
	Customer(const std::string &,const Account *);
	
	void setFullname(const std::string &);
	std::string getFullname() const;
	
private:
	std::string fullname;
	Account *account;
};


#endif /* Customer_hpp */
