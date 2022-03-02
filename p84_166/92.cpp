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
    cout << "---" << endl;

    int &c = test02();
    cout << c <<endl;
    cout << c <<endl;

    test02() = 55; //如果函数的返回值是引用，这个函数调用可以作为左值
    cout << c <<endl;
    cout << c <<endl;
}
