#include<iostream>
#include"Account.h"

using namespace std;

AccountClass::AccountClass(float balance)
{
	Initialize(balance);
}

void AccountClass::credit() 
{
	cout << "How much do you want to credit into the balance?" << endl;
	cin >> Input;
	Balance += Input;
	
}

void AccountClass::debit()
{
	cout << "How much do you want to debit from the balance?" << endl;
	cin >> Input;
	if (Input > Balance) {
		cerr << "Debit amount exceeded account balance." << endl;
	}
	if (Input <= Balance) {
		Balance -= Input;
	}
	
}

void AccountClass::Initialize(float balance) {
	if (balance >= 0) {
		Balance = balance;
	}

	if (balance < 0) {
		Balance = 0;
		cerr << "Your initial balance was invalid..." << endl;
	}

}

float AccountClass::getBalance() const
{
	return Balance;
}