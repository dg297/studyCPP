#include <iostream>
using namespace std;


int main()
{

#define PRINT_JOE				 //defining PRINT_JOE
#define FOO 9

#ifdef PRINT_JOE
std::cout << "Joe" << std::endl; //works because #ifdef --> PRINT_JOE was defined
#endif
 
#ifdef PRINT_BOB
std::cout << "Bob" << std::endl; //does not work becuase #ifdef PRINT_BOB was not defined
#endif

#ifdef FOO
cout << FOO << endl;			//prints ( 9 )
#endif

return 0;
}