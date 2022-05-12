#include <iostream>
#include <string>

using namespace std;

template <typename T>
inline T const &Max(T const &a, T const &b)
{
    return a < b ? b : a;
}

int main()
{
    float sdata[4] = {2, 3, 4, 5};
    int i = 39;
    int j = 20;
    cout << Max(i, j) << endl;
    for (int n = 0; n < 4; n++)
    {
        cout << sdata[n] << endl;
    }
    cout << sdata[4] << endl;
}