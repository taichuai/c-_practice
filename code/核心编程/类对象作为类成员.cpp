#include<iostream>
#include<string>

using namespace std;

//类对象作为类成员
class Phone
{
public:
    //
    Phone(string pName)
    {
        m_pName = pName;
    }

    string m_pName;
};

class Person
{
public:

    Person(string name, string pName) : m_Name(name), m_phone(pName)
    {
        cout << "person构造函数调用" << endl;
    };
    //姓名
    string m_Name;
    //手机
    Phone m_phone;  //手机类初始化
};

//在其他类对象作为本类成员，构造时先构造类对象，再构造自身,析构的顺序与构造相反

void test01()
{
    Person p("张三", "苹果");
    cout << p.m_Name << "拿着" << p.m_phone.m_pName << endl;
}

int main()
{

    // test01(); //默认构造函数调用
    // test02(10); //有参构造函数
    test01();
    system("pause");

    return 0;
};
