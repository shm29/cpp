#include <iostream>

int main()
{
/*
	double f;
	double m;

	std::cout << "Enter length in feet: ";
	std::cin >> f;

	std::cout << f << " feet is " << f/3.28084 << " meters.\n";
*/
	double f,m;

	std::cout << "Enter length in meters: ";
	std::cin >> m;
	
	std::cout << m << " meters is " << m/0.3048 << " feet.\n";
	return 0;
}
