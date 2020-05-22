#include<iostream>
#include<string>

using namespace std;


//将属性设置在 private中，然后使用方法获取或修改
//成员属性设置为私有，可以有效控制使用范围
class Person
{
public:
    //写姓名
    void setName(string name)
    {
        m_name = name;
    };

    //获取姓名
    string getName()
    {
        return m_name;
    };

    //返回值，但是没有输入
    int getAge()
    {
        m_age = 19;
        return m_age;
    }

    //无返回值,只能设置，不可获取
    void setLover(string lover)
    {
        m_lover = lover;
    }

private:
    //姓名
    string m_name;
    //年龄
    int m_age;
    //情人
    string m_lover;

};

int main()
{
    Person p;
    p.setName("张三");

    cout << "姓名为:" << p.getName() << endl;
    cout << "姓名为:" << p.getName() << endl;
    string pe = p.getName();
    cout << "name: " << pe << endl;

}