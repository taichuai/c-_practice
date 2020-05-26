#include<iostream>
#include<string>

using namespace std;

//运算符重载概念，对已有的运算符进行重定义，赋予其另外一种功能

//对于内置数据类型，比哪一期知道如何进行运算

class Person
{
public:

    //成员函数重载（定义）
    // Person operator+(Person &p)
    // {
    //     Person temp;
    //     temp.m_A = this -> m_A + p.m_A;
    //     temp.m_B = this -> m_B + p.m_B;

    //     return temp;
    // };

    int m_A;
    int m_B;
};
//全局函数重载
Person operator+(Person &p1, Person &p2)
{
    Person temp;
    temp.m_A = p1.m_A + p2.m_A;
    temp.m_B = p2.m_B;

    return temp;
};


void test01()
{
    Person p1;
    p1.m_A = 10;
    p1.m_B = 10;

    Person p2;
    p2.m_A = 10;
    p2.m_B = 10;
    //成员函数重载本质调用
    //Person p3 = p1.operator + (p2)

    //全局函数重载本质调用
    //Person p3 = operator + (p1, p2);
    Person p3 = p1 + p2;
    
    cout << "p3.m_A" << p3.m_A << endl;
    cout << "p3.m_b " << p3.m_B << endl;

}

int main()
{
    test01();

    return 0;
}