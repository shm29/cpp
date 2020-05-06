#include <iostream>

int main()
{
	double distance, lightspeed, delay, delay_in_min;
	
	distance = 34000000; // 34000000 miles
	lightspeed = 186000; // 186000 miles per second

	delay = distance / lightspeed;

	std::cout << "Talk time delay with Mars: " << delay << " seconds.\n";
	delay_in_min = delay / 60.0;
	std::cout << "It will be " << delay_in_min << " minutes.\n";
	
	std::cout << "A two way conversation will take " << delay_in_min * 2 << std::endl;

	return 0;
}
