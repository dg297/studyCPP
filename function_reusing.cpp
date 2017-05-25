#include <iostream>
using namespace std;

// getValue will read a value in from the user, and return it to the caller
int getValue()
{
    cout << "Enter an integer: ";
    int a; 
    cin >> a; 
    return a;
}
 
int main()
{
    int x = getValue(); // first call to getValue
    int y = getValue(); // second call to getValue
 
    cout << x << " + " << y << " = " << x + y << endl;
    // method below prints "x+y" rather than the values
    cout << "x + y = ";
    cout << x+y << endl;
 
    return 0;
}