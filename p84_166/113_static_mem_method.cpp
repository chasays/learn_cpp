#include <iostream>
#include <string>

using namespace std;
// 静态成员函数


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

    static void func ()
    {   
        m_age = 100;
        //height = 1000; // raise error, only call static member
        cout << "call static" <<endl;
    }

    static int m_age;
    int height;

private:
    static void func2()
    {
        cout << "private" << endl;
    }
    static int p_name;

};
// 2. 类外初始化
int Person::m_age = 100;

void test01()
{
    Person p1;
    p1.func();
    Person::func();
    // Person::func2(); //raise error since private

}


int main()
{   
    test01();
    // Person p("string");
}