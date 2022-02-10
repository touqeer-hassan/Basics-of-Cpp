#include<iostream>
#include<fstream>
#include<cmath>
#include<iomanip>

using namespace std;

//const float Loan_Amount = 5000.00;
//const float Yearly_Interest = 0.0524;
//const int Number_of_Years = 7;

int main()
{
	//float MonthlyInterest;
	//int NumberOfPayments;
	//float Payment;
	
	
	//input variables
	float loanAmount;
	float yearlyInterest;
	int numberOfYears;
	ofstream outData;
	ifstream inData;
	
	//local variables
	float monthlyInterest;
	int numberOfPayment;
	float payment;
	
	//Open files
	inData.open("loan.in");
	outData.open("loan.out");
	
	
	//Read values
	inData >> loanAmount >> yearlyInterest >> numberOfYears;
	
	//Calculate values
	monthlyInterest =  yearlyInterest / 12;
	numberOfPayment = numberOfYears * 12;
	payment = (loanAmount * pow(1 + monthlyInterest, numberOfPayment) * monthlyInterest) / (pow(1 + monthlyInterest, numberOfPayment)-1);
	//cout << fixed << setprecision(2) << "For a loan amount of "
	//<< Loan_Amount << " with an interest rate of "
	//<< Yearly_Interest <<" and a "
	//<< Number_of_Years << " year mortage, "<<endl;
	//cout << " your monthly payments are $" << Payment <<"." << endl;
	
	
	//Output results
	outData << fixed << "Loan amount:	" << setprecision(2)
	<< loanAmount << endl << "Interest reate:	" <<
	setprecision(4) << yearlyInterest << endl;
	outData << fixed << "Montly  Payment:	" << setprecision(2) << payment << endl;
	
	//Close file
	inData.close();
	outData.close();
	
	return 0;
}
