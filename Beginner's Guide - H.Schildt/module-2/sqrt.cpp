#include <iostream>
#include <cmath>

int main() 
{
	double x, y, z;

	x = 5.0;
	y = 4.0;

	z = sqrt(x*x + y*y);

	std::cout << "Hypotenuse is equal to " << z << std::endl;

	return 0;
}
