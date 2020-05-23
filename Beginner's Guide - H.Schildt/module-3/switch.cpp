#include <iostream>
using namespace std;

int main()
{
        int num;
        
        cout << "Enter a number between 1 or 3\n";
        cin >> num;

        switch(num) {
                case 1:
                        cout << "Guess what, I know you are first\n";
                        break;
                case 2:
                        cout << "Why in the middle of the road?\n";
                        break;
                case 3:
                        cout << "3rd is better than last\n";
                        break;
                default:
                        cout << "Enter the number that is asked\n";
                }
        return 0;
}
