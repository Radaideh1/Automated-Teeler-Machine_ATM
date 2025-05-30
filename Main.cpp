#include "ATM.h"

int main() {
	const int size = 5;
	Beneficiary User[size];
	// Data 
	User[0] = { 1111,true,"Abdullah","Radaideh",3070,10000 };
	User[1] = { 2222,true,"Maha","Radaideh",8661,5411 };
	User[2] = { 3333,true,"Lama","Radaideh",1981,3122 };
	User[3] = { 4444,true,"Lina","Radaideh",2505,5500 };
	User[4] = { 5555,true,"Ahmad","Omary",9031,450 };
	// var
	int U;
	int Try = 3;
	int check_ID;
	int check_Password;
	
	// wellcom
	cout << "\t\tWellcom\t\t\n\n";

	while (true) {

		cout << "Enter the ID here : "; cin >> check_ID;
		U = findUser(User, size, check_ID);


		Check_ID(User, check_ID, U);
		if (User[U].User_Account_Status == false) {
			cout << "your account has Band , plese go to\nband and solve this probrem there !!" << endl;
			continue;
		}

		cout << "Entre the password : "; cin >> check_Password;
		User[U].User_Account_Status = Check_Password(check_Password, User,U);
		if (User[U].User_Account_Status == false) 
			continue;

		bool ser = true;
		while (ser) {

			Interface(User,U);

			int q;
			cin >> q;
			switch (q) {
			case 1: {
				Withdrawal(User[U].User_Current_Balance);
				break;
			}
			case 2: {
				Deposit(User[U].User_Current_Balance);
				break;
			}
			case 3: {
				Balance_Inquiry(User[U].User_Current_Balance);
				break;
			}
			case 4: {
				ser = false;
				cout << "\n\n=================================\n\n";
				break;
			}

			}// for main switch 

		}
		




	}// for main while 
	
	return 0;
}