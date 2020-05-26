#include<iostream>
#include<string>

using namespace std;

//静态成员函数
class Person
{
public:
    //静态成员函数特点：
    //1、程序共享一个函数
    //2、静态成员函数只能访问静态成员变量
    static void func()
    {
        // m_A = 100; //静态成员函数可以访问静态成员变量，但是不能访问不可以访问非静态成员变量
        cout << "static void func调用" << endl;
    };

    static int m_A;  //静态成员变量
    // int m_B;

private:
    static void func2()  //类外访问不到私有的静态成员函数
    {
        cout << "static void func2调用" << endl;
    }
};



//在其他类对象作为本类成员，构造时先构造类对象，再构造自身,析构的顺序与构造相反

void test01()
{
    Person p;
    p.func();  //通过对象访问
    Person::func();  //通过类名访问
}

int main()
{

    // test01(); //默认构造函数调用
    // test02(10); //有参构造函数
    test01();
    system("pause");

    return 0;
};
