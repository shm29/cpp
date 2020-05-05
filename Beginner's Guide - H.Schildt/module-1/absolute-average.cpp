#include <iostream>

int main() {
	
	double a,b,c,d,e;

	std::cout << "Enter 5 number and I will guess the absolute average\n";
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;
	std::cin >> d;
	std::cin >> e;
	std::cout << "Absolute average is " << (abs(a)+abs(b)+abs(c)+abs(d)+abs(e))/5 << "\n";
	
	return 0;
}
