#include <iostream>
using namespace std;

int main () {
        char choice;

        cout << "Choose on of items:\n";
        cout << " 1. if\n";
        cout << " 2. switch\n";
        cin >> choice; 
        cout << endl;

        switch(choice) {
                case '1':
                        cout << "if works like \n\n";
                        cout << "if(condition) do this\n";
                        cout << "else do this\n";
                        break;
                case '2':
                        cout << "switch works like \n\n";
                        cout << "switch(statement) {\n";
                        cout << " case const: \n";
                        cout << "   do this \n";
                        cout << "   break;\n";
                        cout << " // ... \n";
                        cout << "} \n";
                        break;
                default:
                        cout << "Choose one of two, there is nothing more to choose from\n";
        }
        return 0;
}



