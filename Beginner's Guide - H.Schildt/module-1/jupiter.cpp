#include <iostream>

int main () {
	double jup_year, earthy;
	int b; // will need this int to later store a whole number
	std::cout << "Enter what year you living in Jupiter\n";
	std::cin >> jup_year;
	b = jup_year;
	jup_year = jup_year - b; // to be left with decimal numbers
	if(jup_year > 0.12) {
		std::cout << "Try again, there is no more than 12 months in a year\n";
		return 0;
	}

	std::cout << "At Earth it would be " << (b * 12) + jup_year << " year\n";
	return 0;
}
