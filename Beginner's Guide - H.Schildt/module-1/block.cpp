#include <iostream>

int main() {
	double result, n, d;

	std::cout << "Enter a number: ";
	std::cin >> n;

	std::cout << "Enter a devider: ";
	std::cin >> d;

	if (d != 0) {
		std::cout << "d is not zero, so you can devide it" << "\n";
		result = n / d;
		std::cout << n << " / " << d << " is equal to " << result << "\n";
	}
	
	return 0;
}
