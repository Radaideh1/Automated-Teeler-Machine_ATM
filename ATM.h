#include <iostream>

using std::endl;
using std::cout;
using std::cin;


// buld Data!!
struct Beneficiary {
	int User_ID;
	bool User_Account_Status;
	std::string User_Name_First_Name;
	std::string User_Name_Last_Name;
	int password;
	double User_Current_Balance;// مقدار المال الحالي
	double User_Monthly_Salary_amount;

};


class Check {
	int U;
	int Try;
	
public:
	int check_ID;
	int check_Password;


};

//  ## Check ##

int findUser(Beneficiary User[], int size, int check_ID);

void Check_ID(Beneficiary User[], int check_ID, int& U);

bool Check_Password(int check_Password, Beneficiary User[], int U);


// ## InterFace ##

void Interface(Beneficiary User[], int U);


// ## Servase ##

void Withdrawal(double &Current_Balance);

void Deposit(double& Current_Balance);

void Balance_Inquiry(int Current_Balance);