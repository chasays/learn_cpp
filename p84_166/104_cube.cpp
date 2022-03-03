#include <iostream>
#include <string>

using namespace std;

// 练习案例1:设计立方体类
// 设计立方体类(Cube)
// 求出立方体的面积和体积
// 分别用全局函数和成员函数判断两个敢方体是否相等。
// 容易出错点，全局函数没有使用引用
class Cube
{
public:
    void setLength(int l)
    {
        m_L = l;
    }
    int getLength()
    {
        return m_L;
    }
    void setWeight(int w)
    {
        m_W = w;
    }
    int getWeight()
    {
        return m_W;
    }
    void setHeigh(int h)
    {
        m_H = h;
    }
    int getHeigh()
    {
        return m_H;
    }
    bool isSameByClass(Cube &c)
    {
        if (m_H == c.getHeigh() && m_L == c.getLength() && m_W == c.getWeight())
        {
            return true;
        }
        return false;
    }
    int calculateS()
    {
        return 2 * (m_H * m_L + m_H * m_W + m_L * m_W);
    }
    int calculateV()
    {
        return m_H * m_L * m_W;
    }

private:
    int m_L;
    int m_H;
    int m_W;
};

bool isSame(Cube &c1, Cube &c2)
{
    if (c1.getHeigh() == c2.getHeigh() && c1.getLength() == c2.getLength() && c1.getWeight() == c2.getWeight())
    {
        return true;
    }
    return false;
}

int main()
{
    Cube c1;
    c1.setHeigh(10);
    c1.setLength(10);
    c1.setWeight(10);

    cout << "S:" << c1.calculateS() << endl;
    cout << "V:" << c1.calculateV() << endl;

    Cube c2;
    c2.setHeigh(10);
    c2.setLength(10);
    c2.setWeight(101);
    bool is_Same = isSame(c1, c2);
    cout << "isSame:" << (is_Same ? "Yes" : "No") << endl;
    cout << "isSame1:" << (c1.isSameByClass(c2) ? "Yes" : "No") << endl;
}
