//
//  main.cpp
//  BankAccounts
//
//  Created by Soheil on 31/01/2018.
//  Copyright © 2018 Soheil Novinfard. All rights reserved.
//

#include <iostream>
#include <stdexcept>
#include "SavingsAccount.hpp"
#include "CurrentAccount.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
	// Saving Account Sample
	SavingsAccount saving("Alex Novinfard", 10.1);
	cout << "The initial balance for saving account named 'saving' owned by " << saving.getFullname() <<  " is £" << saving.getBalance() << endl << endl;
	
	saving.deposit(100);
	cout << "Current balance after deposit money £" << saving.getBalance() << endl << endl;
	
	cout << "The interest for £" << saving.getBalance() << " is equal to £" <<  saving.getInterest() << endl << " and will apply." << endl;
	
	saving.setInterest();
	cout << "The balance after setting ineterest is £" << saving.getBalance() << endl << endl;
	
	double wihtdrwaMoney = 200;
	cout << "When trying to withdraw £" << wihtdrwaMoney << endl;
	try {
		saving.withdraw(wihtdrwaMoney);
	} catch( invalid_argument ) {
		cout << "Raised an error as overdraft is not allowed in saving accounts" << endl;
	}
	cout << "------------------------------" << endl << endl;
	
	// Current Account Sample
	CurrentAccount current("Rose Jaguara", 140.20);
	cout << "The initial balance for current account named 'current' owned by " << current.getFullname() <<  " is £" << current.getBalance() << endl << endl;
	
	current.deposit(100);
	cout << "Current balance after deposit money £" << current.getBalance() << endl << endl;
	
	cout << "The interest for £" << current.getBalance() << " is equal to £" <<  current.getInterest() << endl << endl;
	
	double wihtdrwaMoney2 = 300;
	cout << "When trying to withdraw with £" << wihtdrwaMoney2 << endl;
	try {
		current.withdraw(wihtdrwaMoney2);
		cout << " it is successful and and the account balance after withdrawing is £" << current.getBalance() << endl ;
	} catch( invalid_argument ) {
		cout << "Invalid amount of overdraft" << endl;
	}
	
	cout << endl;
	return 0;
}
