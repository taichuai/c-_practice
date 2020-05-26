#include<iostream>
#include<string>

using namespace std;

class Person
{
    int m_A;

    static int m_B;  //静态成员变量 不属于类对象上

    void func(){} //非静态成员函数， 不属于类对象上

    static void func2(){}  //静态成员函数，不属于类的对象上

};

int Person::m_B = 0;  //静态成员变量必须初始化

void test01()
{
    Person p;  
    //空对象占用内存空间大小为 1 
    //c++编译器会给每一个空对象也分配一个字节空间，为了区分空对象占用内存的位置
    //每个空对象应该有一个独一无二的内存地址
    cout << "size of p =" << sizeof(p) << endl;
};

void test02()
{
    Person p;
    cout << "size of p =" << sizeof(p) << endl;
}

int main()
{
    test02();

    return 0;
}