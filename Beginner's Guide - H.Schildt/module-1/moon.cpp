#include <iostream>

int main() {

	double kgs;
	int lbs,counter;
	counter = 0;
	for(lbs = 1; lbs <= 100; lbs++){
		kgs = lbs * 0.453592;
		std::cout << lbs << " pounds is " << kgs << " kgs. \n";
		std::cout << "That would be " << kgs/0.17 << " kgs on the moon\n";
		counter++;
		if(counter == 25) {
			std::cout << "\n";
			counter = 0;
		}
	}
	return 0;
}
