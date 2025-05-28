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
	std::string User_Email;
	double User_Monthly_Salary_amount;
	double User_Current_Balance;
	int password;

};


void Check_ID(int check_ID, int User_ID);

bool Check_Password(int check_Password, int User_Password);