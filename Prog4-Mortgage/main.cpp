//**********************************
// Isaac N Pendley
// 04/08/2019
// Program 4 Mortgage 
// Programming 2
//**********************************
#include <iostream>
#include <iomanip>
#include <string>
#include "Mortgage.h"
using namespace std;
// main goes here. Code that *uses* the Mortgage class
// goes in this file

int main()
{
	char input[12];
	Mortgage house;
	float decIn;
	float pay;
	int intIn;
	cout << "Enter the loan amount:";
	cin >> input;
	decIn = stof(input);
	house.setLoan(decIn);
	cout << "Enter the rate of the loan:";
	cin >> input;
	intIn = stoi(input);
	house.setRate(intIn);
	cout << "Enter the years the loan will be active:";
	cin >> input;
	intIn = stoi(input);
	house.setYears(intIn);
	house.setTerm();
	pay = house.Payment();
	cout << "Your payments will each be: $" << pay;
	return 0;
}
