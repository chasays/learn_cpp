#include <iostream>
#include <string>

using namespace std;
// 静态成员


class Person
{
public:
    Person()
    {
        cout << "person initial" << endl;
    }
    ~Person()
    {
        cout << "Person release" << endl;
    }

    static int m_age;

private:
    static int p_name;

};
// 2. 类外初始化
int Person::m_age = 100;
// int Person::p_name = 133; // raise error

void test01()
{
    Person p1;

    cout << p1.m_age <<endl;

    cout << Person::m_age << endl;
    
}


int main()
{   
    test01();
    // Person p("string");
}