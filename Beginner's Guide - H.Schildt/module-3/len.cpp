#include <iostream>
using namespace std;

int main() {
        int len;

        cout << "Enter your length (0 - 79): \n";
        cin >> len;
        while (len>0 && len < 80) {
                cout << ".";
                len--;
        }
        cout << endl;
        return 0;
}
