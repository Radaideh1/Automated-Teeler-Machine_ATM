#include "ATM.h"





int main() {
	// Data 
	Beneficiary User[100];

	User[0].User_ID = 1111;
	User[0].User_Account_Status = true;
	User[0].User_Name_First_Name = "Abdullah";
	User[0].User_Name_Last_Name = "Radaideh";
	User[0].User_National_ID_Number = 2000999346;
	User[0].User_Gender = 'M';
	User[0].User_Phone_Number = "0782905422";
	User[0].password = 3070;
	User[0].User_Current_Balance = 10000;

	// Maha 
	User[1].User_ID = 2222;
	User[1].User_Account_Status = true;
	User[1].User_Name_First_Name = "Maha";
	User[1].User_Name_Last_Name = "Radaideh";
	User[1].User_National_ID_Number = 2000999553;
	User[1].User_Gender = 'F';
	User[1].User_Phone_Number = "0779922123";
	User[1].password = 8661;
	User[1].User_Current_Balance = 5071;

	// lama
	User[2].User_ID = 3333;
	User[2].User_Account_Status = true;
	User[2].User_Name_First_Name = "Lama";
	User[2].User_Name_Last_Name = "Radaideh";
	User[2].User_National_ID_Number = 28889123553;
	User[2].User_Gender = 'F';
	User[2].User_Phone_Number = "0786423123";
	User[2].password = 1961;
	User[2].User_Current_Balance = 100;

	// Lina
	User[3].User_ID = 4444;
	User[3].User_Account_Status = true;
	User[3].User_Name_First_Name = "Lina";
	User[3].User_Name_Last_Name = "Radaideh";
	User[3].User_National_ID_Number = 2000999553;
	User[3].User_Gender = 'F';
	User[3].User_Phone_Number = "0784179331";
	User[3].password = 9910;
	User[3].User_Current_Balance = 250;

	int Try = 3;
	int check_ID;
	int check_Password;


	cout << "\t\twellcome\t\t\n\n";


	while (User[0].User_Account_Status) {

		cout << "Enter the ID here : "; cin >> check_ID;
		Check_ID(check_ID, User[0].User_ID);

		cout << "Entre the password : "; cin >> check_Password;
		User[0].User_Account_Status = Check_Password(check_Password, User[0].password);
		if (User[0].User_Account_Status == false) 
			continue;

		bool ser = true;
		while (ser) {

			Interface();

			int q;
			cin >> q;
			switch (q) {
			case 1: {
				Withdrawal(User[0].User_Current_Balance);
				break;
			}
			case 2: {
				Deposit(User[0].User_Current_Balance);
				break;
			}
			case 3: {
				Balance_Inquiry(User[0].User_Current_Balance);
				break;
			}
			case 4: {
				ser = false;
				continue;
			}

			}// for main switch 

		}
		




	}// for while 
	
		











	cout << "Good bye" << endl;


	return 0;
}