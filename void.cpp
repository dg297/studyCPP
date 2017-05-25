/*
Basically it means "nothing" or "no type"
There are 3 basic ways that void is used:

Function argument: int myFunc(void) -- the function takes nothing.

Function return value: void myFunc(int) -- the function returns nothing

Generic data pointer: void* data -- 'data' is a pointer to data of unknown type, and cannot be dereferenced

Note: the void in a function argument is optional in C++, so int myFunc() is exactly 
the same as int myFunc(void), and it is left out completely in C#. It is always required for a return value.
*/
////////////////////////
/*

void is the return type
void function(){
	//does not return a value
	//no "return" needed
}

*/

//EXAMPLE

#include <iostream>
using namespace std;

    // This function does not return a value so no return statement is needed
void doPrint() 
{
	cout << "In doPrint()" << endl;

}

	//void here means no parameters
void doPrint2(){
	cout << "In doPrint2 /n";
}

int main(){
	doPrint();  //will print whats in void doPrint();
	
	
	// invalid becuase
	// doPrint() is type void
	// cout << doPrint();
	
	// but can do
	cout << doPrint2() << endl;
	return 0;
}