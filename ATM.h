#include <iostream>

using std::endl;
using std::cout;
using std::cin;



struct Beneficiary {
	int User_ID;
	bool User_Account_Status;
	std::string User_Name_First_Name;
	std::string User_Name_Last_Name;
	int User_National_ID_Number;
	char User_Gender;
	std::string User_Phone_Number;
	double User_Monthly_Salary_amount;
	double User_Current_Balance;// مقدار المال الحالي
	int password;

};

// find 
int findUser(Beneficiary User[], int size, int check_ID);

//  ## Check ##
void Check_ID(Beneficiary User[], int check_ID, int U);

bool Check_Password(int check_Password, Beneficiary User[], int U);


// ## InterFace ##
void Interface();


// ## Servase ##

// 1.Withfrawal
void Withdrawal(double &Current_Balance);

// 2.Deposit '
void Deposit(double& Current_Balance);

// 3.Balance Inquiry
void Balance_Inquiry(int Current_Balance);