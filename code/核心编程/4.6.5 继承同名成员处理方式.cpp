#include<iostream>
#include<string>

using namespace std;

//继承同名成员处理方式

class Base
{
public:
    Base()
    {
        m_A = 100;

    }

    void func()
    {
        cout << "Base - func() 函数调用" << endl;
    }


    void func(int)
    {
        cout << "Son 重载" << endl;
    }


    int m_A;
};


class Son:public Base
{
public:
    Son()
    {
        m_A = 200;
    }
    void func()
    {
        cout << "Son - func() 函数调用" << endl;
    }


    int m_A;

};

void test01()
{
    Son s1;
    cout << "Son 下面的 m_A = " << s1.m_A << endl;
    //如果通过子类对象，访问到父类中同名成员，需要加作用域
    cout << "Base 下面的 m_A = " << s1.Base::m_A << endl;
    s1.func();  //直接调用，调用的是子类的同名成员
    //如果子类中出现和父类同名的成员函数，子类的同名成员会隐藏掉父类中所有同名成员函数
    
    s1.Base::func(100);  //

};


int main()
{
    test01();
    return 0;
}

/*
总结：
1、子类对象可以直接访问到子类中同名成员
2、子类对象加作用域可以访问到父类同名成员
3、当子类与父类拥有同名的成员函数，加作用域可以访问到父类同名函数;

 */