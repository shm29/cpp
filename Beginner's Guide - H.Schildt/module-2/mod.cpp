#include <iostream>

int main()
{
	int x, y;

	x = 10;
	y = 3;
	std::cout << x << " / " << y << " is equal to " << x / y << " left with " << x % y << std::endl;

	x = 1;
	y = 2;

	std::cout << x << " / " << y << " is equal to " << x / y << "\n" << x << " % " << y << " is equal to " << x % y << std::endl;

	return 0;
}
