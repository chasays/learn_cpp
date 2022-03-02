#include <iostream>
#include <string>

using namespace std;

int g_a = 1;
const int c_g_a = 1;


int main()
{
    static int s_a = 1;
    int l_a = 1;
    const int c_l_a = 1;
    string ss_a = "hello world";

    cout << &g_a << endl;
    cout << &s_a << endl;
    cout << &"hello world" << endl;
    // the below are local
    cout << &c_g_a << endl;
    cout << &c_l_a << endl;
    cout << &l_a << endl;


}
