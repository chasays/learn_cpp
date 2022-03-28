#include <iostream>
#include <string>

using namespace std;

template <typename T>
inline T const& Max ( T const& a, T const & b)
{
    return a<b?b:a;
}

int main()
{
    int i = 39;
    int j = 20;
    cout << Max(i, j) << endl;
}