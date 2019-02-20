#pragma once
// header file for Mortgage class

class Mortgage
{
private:
	float payment;
	float loan;
	int rate;
	int years;
	int term;
public:
	Mortgage();
	void setLoan(float);
	void setRate(int);
	void setYears(int);
	void setTerm();
	float Payment(); 
};