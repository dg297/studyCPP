#include <iostream>
using namespace std;

int add(int x, int y){
	return x+y;
}

int multiply(int a, int b){
	return a*b;
}

int main(){
	cout << add(4,5) << endl; 		//=9
	cout << multiply(2,3) << endl;	//=6

	//returns 4+(2*3)
	cout << add(4,multiply(2,3)) << endl;

	cout<< multiply(2,multiply(2,3)) << endl;

	return 0;
}