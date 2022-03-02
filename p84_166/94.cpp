#include <iostream>
#include <string>

using namespace std;

void func(const int & ref)
{
    ref = 100; //error: cannot assign to variable 'ref' with const-qualified
    
}


int main()
{
    //non-const lvalue reference to type 'int' cannot bind to
    //   a temporary of type 'int'
    // int & ref = 10;

    const int & ref = 10;


}
