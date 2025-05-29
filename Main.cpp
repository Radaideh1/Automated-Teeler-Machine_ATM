#include "ATM.h"





int main() {
	// Data 
	Beneficiary User[4];

	User[0].User_ID = 1111;
	User[0].User_Account_Status = true;
	User[0].User_Name_First_Name = "Abdullah";
	User[0].User_Name_Last_Name = "Radaideh";
	User[0].password = 3070;
	User[0].User_Current_Balance = 10000;

	// Maha 
	User[1].User_ID = 2222;
	User[1].User_Account_Status = true;
	User[1].User_Name_First_Name = "Maha";
	User[1].User_Name_Last_Name = "Radaideh";
	User[1].password = 8661;
	User[1].User_Current_Balance = 5071;

	// lama
	User[2].User_ID = 3333;
	User[2].User_Account_Status = true;
	User[2].User_Name_First_Name = "Lama";
	User[2].User_Name_Last_Name = "Radaideh";
	User[2].password = 1961;
	User[2].User_Current_Balance = 3123;

	// Lina
	User[3].User_ID = 4444;
	User[3].User_Account_Status = true;
	User[3].User_Name_First_Name = "Lina";
	User[3].User_Name_Last_Name = "Radaideh";
	User[3].password = 9910;
	User[3].User_Current_Balance = 2505;

	int U;
	int Try = 3;
	int check_ID;
	int check_Password;
	

	cout << "\t\twellcome\t\t\n\n";

	while (true) {

		cout << "Enter the ID here : "; cin >> check_ID;
		U = findUser(User, 4, check_ID);


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
	
		











	cout << "\n\nGood bye\n\n" << endl;


	return 0;
}