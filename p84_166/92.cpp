#include <iostream>
#include <string>

using namespace std;

int & test01()
{
    int a = 10; //warning: reference to stack memory associated with local
    return a;
}

int & test02()
{
    static int a = 10; // look good
    return a;
}


int main()
{
    int &b = test01();
    cout << b << endl;
    cout << b << endl;

    int &c = test02();
    cout << c <<endl;
    cout << c <<endl;
    cout << c <<endl;
}

//output:
//10 12313 10 10 10 
