#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
        int i;
        long int r;

        r = rand();

        for (i=0; r<=20000; i++) {
                r = rand();
        }
        cout << "Number is equal to " << r << ". We got it on the " << i << " try." << endl;
        return 0;
}
