#include <iostream>
#include <string>

using namespace std;



int * test01()
{
    int * p = new int(10);
    return p;
}

void test02()
{
    int * arr = new int[10];
    for (int i =0;i<10;i++)
    {
        arr[i] = i+100;
        cout << arr[i] <<endl;
    }
}

int main() 
{   
    int * p = test01();
    cout << *p <<endl;    
    // release the p
    delete p;
    cout << *p <<endl;  
    cout << *p <<endl;  

    test02(); 
    return 0;
}
