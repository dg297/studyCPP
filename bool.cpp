#include <iostream>
using namespace std;

int main()
{
    cout << true << endl; // true evaluates to 1
    cout << !true << endl; // !true evaluates to 0


    bool b = false;
    cout << b << endl; // b is false, which evaluates to 0
    cout << !b << endl; // !b is true, which evaluates to 1
    
    cout << boolalpha;	//boolalpha prints true/false instead of 0/1
    
    cout << b << endl; 
    cout << !b << endl; 

   
    return 0;
}