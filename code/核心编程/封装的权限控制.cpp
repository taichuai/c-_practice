#include<iostream>
#include<string>

using namespace std;

// 面向对象三大特性： 封装、继承、多态

double PI = 3.14;

//类中的属性和行为 我们统一称为 成员
//属性 成员属性 成员变量
//行为 方法函数


    //访问权限：三种
    //公共权限 : publib 成员 类内可以访问

    //保护权限 ： protected 成员 类内可以访问 类外不可以访问 儿子可以访问父亲中的保护内容
    //私有权限 : private 成员 类内可以访问类外不可以访问 儿子不可以访问父亲的私有内容

class Person
{

public:
    string m_name; //姓名

protected:
    string m_car;

private:
    int m_password;

public:
    void func()
    {
        m_name = "张三";
        m_car = "拖拉机";
        m_password = 1234;

    }

};


int main()
{
    //实例化一个对象
    Person p1;
    p1.m_name = "张三";
    // p1.m_car = "奔驰"
    p1.func();
    
}
