#include <iostream>

int main()
{
	int ivar;
	// Example in the book is using double
	float dvar;

	ivar = 100;
	dvar = 100.0;

	std::cout << "Initial value of ivar: " << ivar << "\n";
	std::cout << "Initial value of dvar: " << dvar << "\n";

	std::cout << "\n";

	ivar = ivar / 3;
	dvar = dvar / 3.0;

	std::cout << "ivar after division: " << ivar << "\n";
	std::cout << "dvar after division: " << dvar << "\n";

	return 0;
}
