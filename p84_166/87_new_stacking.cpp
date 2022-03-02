#include <iostream>
#include <string>

using namespace std;


int * func()
{
    // 用new关键字来开辟空间
    int * p = new int(111);
    return p;


}

int main() 
{   //output: 
    //111
    // 0x7ffee90f01f0
    int* p = func();
    cout << *p <<endl;    
    cout << &p <<endl;      
    return 0;
}
