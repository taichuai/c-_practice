#include<iostream>
#include<string>

using namespace std;

//构造函数调用规则:
//1、创建一个类，c++编译器会给每个类都添加至少3个函数:默认构造、析构、拷贝构造

//如果用户定义有参构造函数 c++不在提供默认无参构造，但是会提供默认拷贝构造
//如果用户定义拷贝构造函数, c++不会再提供其他构造函数



class Person
{
public:
    Person()
    {
        cout << "person默认构造函数的调用" << endl;
    };
    //有参构造函数
    Person(int a)
    {
        age = a;
        cout << "person的有参构造函数调用" << endl;
    }

    //析构函数
    ~Person()
    {   
        cout <<"persong的析构函数调用" << endl;
    }

    //拷贝构造函数，有点类似于函数的继承？
    Person(const Person &p)
    {
        age = p.age;
        cout << "拷贝构造函数调用" << endl;
    }

    int age;
};


void test01()
{
    Person p;
    p.age = 18;

    Person p2(p);

    cout << "p2的年龄" << p2.age << endl;
}


int main()
{

    // test01(); //默认构造函数调用
    // test02(10); //有参构造函数
    test01();
    system("pause");

    return 0;
};