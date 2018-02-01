//
//  Customer.cpp
//  BankAccounts
//
//  Created by Soheil on 31/01/2018.
//  Copyright © 2018 Soheil Novinfard. All rights reserved.
//

#include "Customer.hpp"
using namespace std;

Customer::Customer(const string &fullnameValue, const Account *accountValue):
fullname(fullnameValue)
{
	
}

void Customer::setFullname(const string &fullnameValue) {
	fullname = fullnameValue;
}
string Customer::getFullname() const {
	return fullname;
}
