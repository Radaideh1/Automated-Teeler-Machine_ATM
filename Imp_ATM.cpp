#include "ATM.h"




//  ## Check ##

int findUser(Beneficiary User[], int size, int check_ID) {
	for (int i = 0; i < size; i++) {
		if (check_ID == User[i].User_ID)
			return i;
	}
	return -1;

}

void Check_ID(Beneficiary User[], int check_ID, int& U) {

	while (U == -1) {
		cout << "we can't find ID plese try again\n";
		cout << "Enter the ID here : "; cin >> check_ID;
		 U = findUser(User, 4, check_ID);
	}
}

bool Check_Password(int check_Password, Beneficiary User[], int U) {
	int Try = 2;
	while (check_Password != User[U].password) {
		cout << "try again : "; cin >> check_Password;
		Try--;
		if (Try == 0) { return false;}
	}// if Password
	return true;
}


// ## ItroFace ##
void Interface(Beneficiary User[],int U) {
	cout << "\n\n=================================\n";
	cout <<'\t' << User[U].User_Name_First_Name << ' ' << User[U].User_Name_Last_Name << "\n\n";
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
	cout << "\nAvailable in the Account : " << Current_Balance << "$";
	
}