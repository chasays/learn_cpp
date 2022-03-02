#include <iostream>
#include <string>

using namespace std;


int* func()
{
    int a = 1;
    //cpp_baisc/86.cpp:10:13: warning: address of stack memory associated with local variable 'a'
    //   returned [-Wreturn-stack-address]
    return &a;

}

int main() 
{   
    int* p = func();
    cout << &p <<endl;    
    cout << &p <<endl;      
    return 0;
}
