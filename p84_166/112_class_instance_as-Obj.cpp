#include <iostream>
#include <string>

using namespace std;
// 类实例作为类成员

class Phone
{
public:
    Phone(string name)
    {
        m_PName = name;
        cout << "Phone initial" << endl;
    }
    string m_PName;
    ~Phone()
    {
        cout << "Phone release" <<endl;
    }
};

class Person
{
public:
    
    Person(string name, string pName): m_Name(name), m_Phone(pName)
    {
        cout << "person initial" << endl;
    }
    ~Person()
    {
        cout << "Person release" << endl;
    }
    string m_Name;
    Phone m_Phone;

};

void test01()
{
    Person p1("20", "phone11");
    
}


int main()
{   
    test01();
    // Person p("string");
}