#include <iostream>

int main()
{
	int a, b, c;

	a = 2;
	b = 3;
	
	if (a < b) std::cout << "a is less than b\n";

	if (a == b) std::cout << "you won't see this line\n";

	std::cout << "\n";

	c = a - b;
	std::cout << "c is -1\n";
	if (c >= 0) std::cout << "c is not negative\n";
	if (c < 0) std::cout << "c is negative\n";

	std::cout << "\n";

	std::cout << "c = b - a\n";
	c = b - a;

	std::cout << "c is now 1\n";
	if (c >= 0) std::cout << "c is not negative\n";
	if (c < 0) std::cout << "c is negative\n";

	return 0;
}
