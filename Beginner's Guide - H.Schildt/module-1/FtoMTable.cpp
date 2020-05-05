#include <iostream>

int main() {
	double f,m;
	int counter;

	counter = 0;

	for(f = 1.0;f <= 100.0; f++) {
		m = f / 3.28;
		std::cout << f << " feet is " << m << " meters.\n";
		counter++;

		if(counter == 10) {
			std::cout << "\n";
			counter = 0;
		}
	}

	return 0;
}
