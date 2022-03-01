#include <iostream>
#include <string>
using namespace std;

#define MAX 1000
//person
struct Person
{
    string m_Name;
    int m_Sex;
    int m_Age; //1=male, 2=female
    string m_Phone;
    string m_Addr;

};

//contact
struct AddrBooks
{
    struct Person personArray[MAX];
    int m_Size; //current count
};



//menu 
void showMenu()
{
    cout << "************************" << endl;
    cout << "**** 1. add contact；" << endl;
    cout << "**** 2. show contact；" << endl;
    cout << "**** 3. delete contact；" << endl;
    cout << "**** 4. search contact；" << endl;
    cout << "**** 5. clear contact；" << endl;
    cout << "**** 0. exit " << endl;
    cout << "************************" << endl;
}


//add 
void addPerson(AddrBooks * abs)
{   
    if(abs->m_Size == MAX)
    {
        cout << "full:MAX" << endl;
        return;
    } 
    else
    {   
        string name;
        cout << "pls input name:";
        cin >> name;
        abs->personArray[abs->m_Size].m_Name = name;

        cout << "pls input gendar， 1= male， 2= female";
        int sex;
        while(true)
        {
            cin >> sex;
            if(sex == 1 || sex ==2)
            {
                abs->personArray[abs->m_Size].m_Sex = sex;
            }
            else
            {

            }
        }
        

        return;
    }
}


int main() 
{   
    AddrBooks abs;
    abs.m_Size = 1;

    int select = 0;
    while (true)
    {
        showMenu();

        cin >> select;

        switch (select)
        {
        case 1: //add
            /* code */
            addPerson(&abs); //must mem addr
            break;
        case 2: //show
            /* code */
            break;
        case 3: //
            /* code */
            break;
        case 4:
            /* code */
            break;
        case 5:
            /* code */
            break;
        case 0:
            /* code */
            cout << "欢迎使用!" << endl;
            return 0;
            break;
        default:
            break;
        }
       
    }
}
