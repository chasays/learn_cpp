#include <iostream>
#include <string>

using namespace std;

class Person
{
public:
    Person(string name)
    {
        cout << "init__" << name << endl;
    }
    ~Person()
    {
        cout << "destroy" <<endl;
    }
};



int main()
{
    Person p("string");
}