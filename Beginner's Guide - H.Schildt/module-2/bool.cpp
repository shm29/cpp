#include <iostream>

int main()
{
	bool b;

	b = false;

	std::cout << "b is equal to " << b << std::endl;

	b = true;

	std::cout << "b is now equal to " << b << std::endl;
	if(b) std::cout << "This line will work.\n";
	b = false;
	if(b) std::cout << "This line won't work.\n";

	std::cout << "10 > 9 is " << (10 > 9) << std::endl;

	return 0;
}
