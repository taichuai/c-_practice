#include<iostream>
#include<string>

using namespace std;

//左移运算符重载


class Person
{
public:
    int m_A;
    int m_B;
};

ostream & operator << (ostream &out, Person &p) //本质 operator << (cout, p) 
{
    out << "m_A = " << p.m_A << ", m_B = " << p.m_B;
    return out;
};


void test01()
{
    Person p;
    p.m_A = 10;
    p.m_B = 10;
    //一般来说，直接打印 p是不行的，那么使用重载运算符，可以定义左移运算符，定义 cout << p的输出属性
    cout << p << " hello world " << endl;
}

int main()
{
    test01();

    return 0;
}