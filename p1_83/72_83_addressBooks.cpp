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

// clear display
void clearDisplay()
{
    //clear for macOS or Linux
    system("clear");
}

//menu
void showMenu()
{
    cout << "************************" << endl;
    cout << "**** 1. add contact；" << endl;
    cout << "**** 2. show contact；" << endl;
    cout << "**** 3. delete contact；" << endl;
    cout << "**** 4. search contact；" << endl;
    cout << "**** 5. modify contact；" << endl;
    cout << "**** 6. clear contact；" << endl;
    cout << "**** 0. exit " << endl;
    cout << "************************" << endl;
}

//add
void addPerson(AddrBooks *abs)
{
    if (abs->m_Size == MAX)
    {
        cout << "full:MAX" << endl;
        return;
    }
    else
    {
        //name
        string name;
        cout << "pls input name:";
        cin >> name;
        abs->personArray[abs->m_Size].m_Name = name;

        //gendar
        cout << "pls input gendar， 1= male， 2= female" << endl;
        int sex;
        while (true)
        {
            cin >> sex;
            if (sex == 1 || sex == 2)
            {
                abs->personArray[abs->m_Size].m_Sex = sex;
                break;
            }
            else
            {
                cout << "please input 1 or 2" << endl;
            }
        }

        //age
        cout << "please input age:";
        int age = 0;
        cin >> age;
        abs->personArray[abs->m_Size].m_Age = age;

        //phone
        cout << "please input phone:";
        string phone;
        cin >> phone;
        abs->personArray[abs->m_Size].m_Phone = phone;

        // addr
        cout << "please input address:";
        string addr;
        cin >> addr;
        abs->personArray[abs->m_Size].m_Addr = addr;

        abs->m_Size++;

        cout << "add successful" << endl;

        clearDisplay();
        return;
    }
}

// show all persons

void showPerson(AddrBooks *abs)
{
    if (abs->m_Size == 0)
    {
        cout << "no persons found." << endl;
    }
    else
    {
        for (int i = 0; i < abs->m_Size; i++)
        {
            Person per = abs->personArray[i];
            cout << "name:" << per.m_Name << "\t";
            cout << "gendar:" << (per.m_Sex == 1 ? "男" : "女") << "\t";
            cout << "age:" << per.m_Age << "\t";
            cout << "phone:" << per.m_Phone << "\t";
            cout << "addr:" << per.m_Addr << endl;
        }
    }
    // clearDisplay();
}

//check whether person is exist
int isExist(AddrBooks *abs, string name)
{
    for (int i = 0; i < abs->m_Size; i++)
    {
        if (abs->personArray[i].m_Name == name)
        {
            return i;
        }
    }
    return -1;
}

//delete
void deletePerson(AddrBooks *abs)
{
    cout << "please input person which will be deleted." << endl;
    string name;
    cin >> name;

    int ret = isExist(abs, name);

    if (ret == -1)
    {
        cout << "not " << name << " found.." << endl;
    }
    else
    {
        cout << name << " found" << endl;
        for (int i = ret; i < abs->m_Size; i++)
        {
            // data moves forward
            abs->personArray[i] = abs->personArray[i + 1];
        }
        abs->m_Size--;
    }
}

// find
void findPersion(AddrBooks *abs)
{
    cout << "please input the special name:" << endl;
    string name;
    cin >> name;
    int ret = isExist(abs, name);
    if (ret != -1)
    {
        Person per = abs->personArray[ret];
        cout << per.m_Name << "\t";
        cout << per.m_Age << "\t";
        cout << (per.m_Sex == 1 ? "male" : "female") << "\t";
        cout << per.m_Addr << "\t";
        cout << per.m_Phone << endl;
    }
    else
    {
        cout << "not " << name << " found." << endl;
    }
}

//modify
void modifyPersion(AddrBooks *abs)
{
    cout << "please input the modified name:" << endl;
    string name;
    cin >> name;
    int ret = isExist(abs, name);
    if (ret != -1)
    {
        //name
        string name;
        cout << "pls input name:";
        cin >> name;
        // notice here ! pls must use the below statement.
        abs->personArray[abs->m_Size].m_Name = name;

        //gendar
        cout << "pls input gendar， 1= male， 2= female" << endl;
        int sex;
        while (true)
        {
            cin >> sex;
            if (sex == 1 || sex == 2)
            {
                abs->personArray[abs->m_Size].m_Sex = sex;
                break;
            }
            else
            {
                cout << "please input 1 or 2" << endl;
            }
        }

        //age
        cout << "please input age:";
        int age = 0;
        cin >> age;
        abs->personArray[abs->m_Size].m_Age = age;

        //phone
        cout << "please input phone:";
        string phone;
        cin >> phone;
        abs->personArray[abs->m_Size].m_Phone = phone;

        // addr
        cout << "please input address:";
        string addr;
        cin >> addr;
        abs->personArray[abs->m_Size].m_Addr = addr;

        cout << "modified successful。" << endl;
    }
}

//clear
void clearPerson(AddrBooks *abs)
{
    cout << "are you permanently clear those? 1=yes, other=no" << endl;
    int confirm;
    cin >> confirm;
    if (confirm == 1)
    {
        abs->m_Size = 0;
        cout << "Clear successful." << endl;
    }
    else
    {
        cout << "nothing to do." << endl;
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
            showPerson(&abs);
            break;
        case 3: //
            deletePerson(&abs);
            break;
        case 4:
            findPersion(&abs);
            break;
        case 5:
            modifyPersion(&abs);
            break;
        case 6:
            clearPerson(&abs);
            break;
        case 0:
            cout << "欢迎使用!" << endl;
            return 0;
            break;
        default:
            break;
        }
    }
}
