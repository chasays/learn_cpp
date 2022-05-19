#include <iostream>
#include <string>

using namespace std;
// const

class Person
{
public:
    Person(int age)
    {
        this->age = age; // age and as age
        cout << "person initial" << this->age << endl;
    }
    int age;
    mutable int name;

    void printxx() const
    {
        // this->age = 10;  raise error
        cout << "const function :" <<endl;
    };

    void non_const()
    {

    }
    
};

void test01()
{
    Person p1(10);
    const Person p2(10);
    p2.printxx();
    // p2.non_const(); //clang++ 115_this.cpp
    cout << p1.age <<endl;
    
}


int main()
{   
    test01();
    // Person p("string");
}