#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	double Principal, IntRate, PayPerYear, NumYears, Payment, numer, denom, b, e;

	cout << "Enter loan amount: ";
	cin >> Principal;

	cout << "Enter interest rate (ex, 0.075): ";
	cin >> IntRate;

	cout << "Enter amount of payments a year: ";
	cin >> PayPerYear;

	cout << "Amount of year: ";
	cin >> NumYears;

	numer = IntRate * Principal / PayPerYear;

	e = -(PayPerYear * NumYears);
	b = (IntRate / PayPerYear) + 1;

	denom = 1 - pow(b, e);

	Payment = numer / denom;

	cout << "Payment will be " << Payment << endl;

	return 0;
}
