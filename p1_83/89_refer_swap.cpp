#include <iostream>
#include <string>

using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 10;
    int b = 20;
    swap(a, b);
    cout << a << endl;
    cout << b << endl;
    //output
    // 20 10
    return 0;
}
