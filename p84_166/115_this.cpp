#include <iostream>
#include <string>

using namespace std;
// this用途
// 解决名称冲突
// 返回对象本身的*this


class Person
{
public:
    Person(int age)
    {
        this->age = age; // age and as age
        cout << "person initial" << this->age << endl;
    }
    int age;

    Person& PersonAddage(int age)
    {
        this->age += age;
        return *this;
    }

};

void test01()
{
    Person p1(10);
    Person p2(10);
    p1.PersonAddage(10).PersonAddage(20).PersonAddage(100);

    cout << p1.age <<endl;
    
}


int main()
{   
    test01();
    // Person p("string");
}