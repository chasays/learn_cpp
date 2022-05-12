#include <iostream>
#include <string>

using namespace std;
// 深拷贝和浅拷贝
class Person
{
public:
    int m_Age;
    int* m_Height;
    Person(int age, int height)
    {   m_Age = age;
        m_Height = new int(height);
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
        // m_Height = p.m_Height; //shadown copy
        m_Height = new int(*p.m_Height); //deep copy
        cout << "copy func:" << m_Age << p.m_Age << endl;
    }
    ~Person()
    {
        if (m_Height != NULL) {
            delete m_Height;
            m_Height = NULL;
        }
        cout << "destroy" <<endl;
    }

};

void test01()
{
    Person p1(20, 180);
    cout << p1.m_Age << *p1.m_Height <<endl;
    Person p2(p1);
    cout << p1.m_Age << *p2.m_Height <<endl;
    cout << p2.m_Age <<endl;
}


int main()
{   
    test01();
    // Person p("string");
}