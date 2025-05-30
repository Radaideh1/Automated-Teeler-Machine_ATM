#include "ATM.h"

int main() {
	Check portal;
	const int size = 5;
	portal.size = size;
	Beneficiary User[size];
	// Data 
	User[0] = { 1111,true,"Abdullah","Radaideh",3070,10000 };
	User[1] = { 2222,true,"Maha","Radaideh",8661,5411 };
	User[2] = { 3333,true,"Lama","Radaideh",1981,3122 };
	User[3] = { 4444,true,"Lina","Radaideh",2505,5500 };
	User[4] = { 5555,true,"Ahmad","Omary",9031,450 };
	
	// wellcom
	cout << "\t\tWellcom\t\t\n\n";

	while (true) {

		cout << "Enter the ID here : "; cin >> portal.check_ID;
		portal.U = portal.find_User(User, portal);

		portal.Check_ID(User, portal);
		if (User[portal.U].User_Account_Status == false) {
			cout << "your account has Band , plese go to\nband and solve this probrem there !!" << endl;
			continue;
		}

		cout << "Entre the password : "; cin >> portal.check_Password;
		User[portal.U].User_Account_Status = portal.Check_Passsword(User, portal);
		if (!User[portal.U].User_Account_Status) 
			continue;

		bool ser = true;
		while (ser) {

			Interface(User,portal.U);

			int q;
			cin >> q;
			switch (q) {
			case 1: {
				Withdrawal(User[portal.U].User_Current_Balance);
				break;
			}
			case 2: {
				Deposit(User[portal.U].User_Current_Balance);
				break;
			}
			case 3: {
				Balance_Inquiry(User[portal.U].User_Current_Balance);
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