# include<iostream>
# include"Account.h"

using namespace std;
bool status = false;
int Choice;
int InitialBalance;

int main() 
{
	cout << "Please enter your intial balance,thx." << endl;
	cin >> InitialBalance;
	AccountClass YenKeatAccount(InitialBalance);  //set your current balance 

	while (status != true) {
		
		cout << "\n---------------------------------------\n" 
		     << " \"Option 1-Credit\" "<<"\n"
			 << " \"Option 2-Debit\" " << "\n" 
			 << " \"Option 3-CheckBalance\" " << "\n"
			<<" \"Option 4-Quit\" " <<"\n\n";

		cin >> Choice;

		switch (Choice)
		{
		case 1:
			YenKeatAccount.credit();
			break;

		case 2:
			YenKeatAccount.debit();
			break;

		case 3:
			cout<<"Your current balance is "<<YenKeatAccount.getBalance()<<endl;
			break;

		case 4:
			status = true;
			break;

		default:
			break;
		}
	}

	return 0;
}
