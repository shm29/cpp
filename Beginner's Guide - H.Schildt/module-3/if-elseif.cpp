#include <iostream>
using namespace std;

int main()
{
        int x;

        for(x=0; x<6; x++) {
                if(x==1) cout << "x is equal to 1\n";
                else if(x==2) cout << "x is equal to 2\n";
                else if(x==3) cout << "x is equal to 3\n";
                else if(x==4) cout << "x is equal to 4\n";
                else cout << "x is not between 1 and 4\n";
        }
        return 0;
}
