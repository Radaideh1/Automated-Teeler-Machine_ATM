#include "ATM.h"




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