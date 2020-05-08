#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	bool p, q;

	q = true;
	p = true;

	cout << p << " XOR " << q << " equal " << ( (p || q) && !(p &&q) ) << "\n";

	p = false;
	q = true;

	cout << p << " XOR " << q << " equal " << ( (p || q) && !(p && q) ) << "\n";

	p = true;
	q = false;

	cout << p << " XOR " << q << " equal " << ( (p || q) && !(p && q) ) << "\n";

	p = false;
	q = false;

	cout << p << " XOR " << q << " equal " << ( (p || q) && !(p && q) ) << "\n";

	return 0;
}
