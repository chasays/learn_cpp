#include <iostream>
#include <string>

using namespace std;
// friend

class Building
{

    friend void goodGay(Building *Building); //won't access private varible if not
public:
    
    Building()
    {
        this->holding = "holding";
        this->bedroom = "bedroom";
    }

    string holding;

private:
    string bedroom;
    
};

void goodGay(Building *building)
{
    cout << building->holding << endl;
    cout << building->bedroom << endl;
}

void test01()
{
    Building b;
    goodGay(&b);
    
}


int main()
{   
    test01();
    // Person p("string");
}