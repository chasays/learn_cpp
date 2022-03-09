#include <iostream>
#include <string>

using namespace std;
// 无参数、有参数、参数拷贝: 这3个，只要前面任意一个实现，前面默认的就不生效了
// 析构函数：
class Person
{
public:
    int m_Age;
    Person(int age)
    {   m_Age = age;
        cout << "parameter-init__:" << age << endl;
    }
    Person()
    {
        cout << "non-parameter-init" << endl;
    }
    Person (const Person & p)
    {
        m_Age = p.m_Age;
        cout << "copy func:" << m_Age << p.m_Age << endl;
    }
    ~Person()
    {
        cout << "destroy" <<endl;
    }

};

void test01()
{
    Person p1(20);
    Person p2(p1);
    cout << p2.m_Age <<endl;
}


int main()
{   
    test01();
    // Person p("string");
}