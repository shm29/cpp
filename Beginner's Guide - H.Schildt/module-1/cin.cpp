#include <iostream>

int main()
{
	int length, width;

	std::cout << "Enter length: ";
	std::cin >> length;

	std::cout << "Enter width: ";
	std::cin >> width;

//	std::cout << "Area is equal to: ";
//	std::cout << length * width;
	
	std::cout << "Area is equal to: " << length * width;

	return 0;
}
