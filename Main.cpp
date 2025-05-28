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
	User[0].User_Email = "radaideh7484@gmail.com";
	User[0].User_Phone_Number = "0796905422";
	User[0].password = 8642;
	User[0].User_Current_Balance = 1000;


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

				break;
			}
			case 3: {
				Balance_Inquiry(User[0].User_Current_Balance);
				break;
			}
			case 4: {
				ser = false;
				break;
			}


			}// for main switch 

		}
		




	}// for while 
	
		











	cout << "Good bye" << endl;


	return 0;
}