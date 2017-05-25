#include <iostream>
using namespace std;

void printA()
{
    cout << "A" << endl;
}
 
void printB()
{
    cout << "B" << endl;
}
 
// function printAB() calls both printA() and printB()
void printAB()
{
    printA();
    printB();
}
 
int main()
{
    cout << "Starting main()" << endl;
    printAB();
    cout << "Ending main()" << endl;
    return 0;
}