// implementation file for Mortgage class
#include <iomanip>
#include "Mortgage.h"

//Constructor
Mortgage::Mortgage()
{
	payment = 0;
	loan = 0;
	rate = 0;
	years = 0;
	term = 0;
}
//Setter functions
void Mortgage::setLoan(float input)
{
	loan = input;
}

void Mortgage::setRate(int input)
{
	rate = input;
}

void Mortgage::setYears(int input)
{
	years = input;
}

void Mortgage::setTerm()
{
	int power = (12 * years);
	float num = (1.0 + (rate / 12.0));
	term = pow(num, power);
}

float Mortgage::Payment()
{
	float p1 = loan * (rate / 12.0) * term;
	float p2 = term - 1.0;
	payment = p1 / p2;
	return payment;
}