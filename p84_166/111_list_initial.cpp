#include <iostream>
#include <string>

using namespace std;
// 初始化列表
class Person
{
public:
    int m_Age;
    int m_Height;
    Person(int age, int height):m_Age(age),m_Height(height)
    {
    // {   m_Age = age;
    //     m_Height = new int(height);
        cout << "parameter-init__:" << m_Age << endl;
        cout << "parameter-init__:" << m_Height << endl;
    }
    Person()
    {
        cout << "non-parameter-init" << endl;
    }
    Person (const Person & p)
    {
        m_Age = p.m_Age;
        m_Height = p.m_Height;
        cout << "copy func:" << m_Age << p.m_Height << endl;
    }
    ~Person()
    {
        if (m_Height != NULL) {
            m_Height = NULL;
        }
        cout << "destroy" <<endl;
    }

};

void test01()
{
    Person p1(20, 180);
    cout << p1.m_Age << p1.m_Height <<endl;
    Person p2(22,333);
    cout << p1.m_Age << p2.m_Height <<endl;
    cout << p2.m_Age <<endl;
}


int main()
{   
    test01();
    // Person p("string");
}