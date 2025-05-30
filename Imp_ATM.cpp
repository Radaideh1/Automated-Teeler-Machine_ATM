#include "ATM.h"




// ## function of class ##

int Check::find_User(Beneficiary User[]) {

	for (int i = 0; i < size; i++) {
		if (check_ID == User[i].User_ID) {
			return i;
		}
	}
	return -1;

}

void Check::Check_ID(Beneficiary User[]) {
	
	while (U == -1) {
		cout << "Sorry We can't find ID plesee try again\n";
		cout << "Enter the ID here : "; cin >>check_ID;
		U = find_User(User);
	}


}

bool Check::Check_Passsword(Beneficiary User[]) {
	cout << "Entre the password : "; cin >> check_Password;
	while (check_Password != User[U].password) {
		cout << "Try again : "; cin >> check_Password;
		if (Try <= 0) { Try = 2; return false; }
		Try--;
	}
	Try = 2;

}

// ## Itrer Face ##

void Interface(Beneficiary User[],int U) {
	cout << "\n\n=================================\n";
	cout <<'\t' << User[U].User_Name_First_Name << ' ' << User[U].User_Name_Last_Name << "\n\n";
	cout << "1.Withdrawal\t\t2.Deposit\n\n3.Balace Inguiry\t4.Exit";
	cout << "\n\nChose : ";

}


// ## Servase ##

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

void Deposit(double& Current_Balance) {
	double AmoToDepo;
	cout << "Amount to be Deposited : "; cin >> AmoToDepo;
	Current_Balance += AmoToDepo;


}

void Balance_Inquiry(int Current_Balance) {
	cout << "\nAvailable in the Account : " << Current_Balance << "$";
	
}