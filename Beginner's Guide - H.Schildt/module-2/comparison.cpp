#include <iostream>

int main()
{
	int i, j;
	bool b1, b2;

	i = 10;
	j = 11;

	if(i < j) std::cout << "i < j\n";
	if(i <= j) std::cout << "i <= j\n";
	if(i != j) std::cout << "i != j\n";
	if(i == j) std::cout << "This one won't work\n";
	if(i >= j) std::cout << "This one won't also work\n";
	if(i > j) std::cout << "Also this one\n";

	b1 = true;
	b2 = false;

	if(b1 && b2) std::cout << "This one won't work\n";
	if(!(b1 && b2)) std::cout << "!(b1 && b2) this is true\n";
	if(b1 || b2) std::cout << "b1 || b2 is true\n";

	return 0;
}
