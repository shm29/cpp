#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
        int magic;
        int guess;

        magic = rand();

        do {
                cout << "Enter your guess: ";
                cin >> guess;
                if(guess == magic) {
                        cout << "** Niceee, you got it right **\n";
                } else {
                        cout << "Nope.\n";
                        if(guess > magic)
                                cout << "Your number is too high.\n";
                        else cout << "Your number is too low.\n";
                }
        }while(guess != magic);
        return 0;
}
