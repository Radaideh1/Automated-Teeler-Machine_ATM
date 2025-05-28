#include "ATM.h"



//  ## Check ##
void Check_ID(int check_ID, int User_ID) {
	while (check_ID != User_ID) {
		cout << "we can find this ID plese try again !! " << endl;
		cin >> check_ID;
	}// if ID
}

bool Check_Password(int check_Password, int User_Password) {
	int Try = 2;
	while (check_Password != User_Password) {
		cout << "try again : "; cin >> check_Password;
		Try--;
		if (Try == 0) { return false;}
	}// if Password
	return true;
}


// ## ItroFace ##
void Interface() {
	cout << "\n\n=================================\n\n";
	cout << "1.Withdrawal\t\t2.Deposit\n\n3.Balace Inguiry\t4.Exit";
	cout << "\n\nChose : ";

}


// ## Servase ##

// 1.Withfrawal
void Withdrawal(double &Current_Balance){
	double AmoToBeWith;
	cout << "Amount to be WithDrawn : "; cin >> AmoToBeWith;
	while (AmoToBeWith > Current_Balance) {
		cout << "\nSorry but you can't do it \n" << endl;
		cout << "Amount to be WithDrawn : "; cin >> AmoToBeWith;
		cout << endl;
	}
	Current_Balance -= AmoToBeWith;
}

// 2.Deposit 
void Deposit(double& Current_Balance) {
	double AmoToDepo;
	cout << "Amount to be Deposited : "; cin >> AmoToDepo;
	Current_Balance += AmoToDepo;


}


// 3.Balance Inquiry
void Balance_Inquiry(int Current_Balance) {
	cout << Current_Balance << endl;
	cout << endl;
}