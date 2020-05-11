#include <iostream>
using namespace std;

int main()
{
        int a, b;
        cout << "Enter number: ";
        cin >> a;
        cout << "Enter a divider: ";
        cin >> b;
        if(b) cout << "Result is: " << a/b << endl;
        else cout << "You can't device by zero" << endl;

        return  0;
}
