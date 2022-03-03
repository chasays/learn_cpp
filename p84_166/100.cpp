#include <iostream>
#include <string>

using namespace std;


class Student
{
    public:
    int m_Id;
    string m_Name;

    void showStudent()
    {
        cout<< "name:id \t" << m_Name  << m_Id << endl;
    }

    void setName( string name)
    {
        m_Name = name;
    }

    void setId( int id)
    {
        m_Id = id;
    }

};


int main()
{
    Student s1;
    s1.m_Name = "Zhangsan";
    s1.setId(1);
    s1.showStudent();
}
