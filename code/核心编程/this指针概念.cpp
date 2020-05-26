#include<iostream>
#include<string>

using namespace std;

//this指针是隐含每一个非静态成员函数内的一种指针
//this指针不需要定义，直接使用即可



class Person
{
public:
    Person(int age)
    {
        // m_age = age;
        this -> age = age;  //this 指针指向 被调用的成员函数，所属的对象,有点像 self
    }
    // int m_age;
    int age;

    void PersonAddAge(Person &p)
    {
        this -> age += p.age;
    }

    Person& Lian_PersonAddAge(Person &p)
    {
        this -> age += p.age;

        return *this;    //this指向本身类，所以指针就是 一个类,而类中返回值会创建新的对象，返回引用就可以不创建对象，形成叠加
    }

};


void test01()
{
    Person p1(18);

    cout << "p1的年龄为: " << p1.age << endl;
}

void test02()
{
    Person p1(10);
    Person p2(20);
    p2.PersonAddAge(p1);
    cout << "p2的年龄为" << p2.age << endl;

}

void test03()
{
    Person p1(10);
    Person p2(20);
    //链式调用(两个重点：this 解决名称冲突指向自身， *this 返回引用)
    p2.Lian_PersonAddAge(p1).Lian_PersonAddAge(p1).Lian_PersonAddAge(p1);
    cout << "p2的年龄为" << p2.age << endl;

}

int main()
{
    test03();

    return 0;
}