#include<iostream>
#include<string>

using namespace std;

//常函数
class Person
{
public:

    //tihs 指针的本质是指针常量，指针的指向 是不可以修改的
    // const Person * const this
    //在成员函数后面加 const，修饰的是 this 指向，让指针指向的值也不可以修改
    void showPerson() const
    {
        // m_A = 10;
        this -> m_B = 100;
    }
    int m_A;
    mutable int m_B;  //特殊变量，即使在常函数中，也可以修改这个值，加关键字 mutable
};


//常对象

void test01()
{
    Person p;
    p.showPerson();
}

void test02()
{
    // const Person p;  //在对象前加 const,变为常对象
    // p.m_A = 100;
    // p.m_B = 100;  //m_B是特殊值，在常对象下也可以修改

    //常对象只能调用常函数
    // p.showPerson();
};



int main()
{
    test01();
}