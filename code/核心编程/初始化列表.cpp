#include<iostream>
#include<string>

using namespace std;

//初始化列表


class Person
{
public:
    Person()  //默认构造函数
    {
        cout << "person构造函数的调用" << endl;
    };
    //有参构造函数
    // Person(int a, int b, int c)
    // {
    //     m_A = a;
    //     m_B = b;
    //     m_C = c;

    //     cout << "person的有参构造函数调用" << endl;
    // };

    //初始化列表赋初值
    Person(int a, int b, int c):m_A(a), m_B(b), m_C(c){

    }

    int m_A;
    int m_B;
    int m_C;
    int *m_Height;  //身高
};


void test01()
{
    Person p(30, 20, 10);
    cout << p.m_A << p.m_B << p.m_C << endl;
}

void test02()
{
    Person p(10, 20 , 30);
}

int main()
{

    // test01(); //默认构造函数调用
    // test02(10); //有参构造函数
    test01();
    system("pause");

    return 0;
};