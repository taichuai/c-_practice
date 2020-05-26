#include<iostream>
#include<string>

using namespace std;

//构造函数主要租用在于创建对象时，为对象的成员属性赋值，构造函数由编译器自动调用,无需手动调用
//西沟函数,主要作用在于对象销毁前系统自动调用,执行一些清理工作

//构造函数语法：类名{}
/*
1、构造函数没有返回值
2、函数名称与类名相同
3、构造函数可以有参数，可以发生重载
4、创建对象的时候，构造函数会自动调用，而且只调用一次

//析构函数 进行清理的操作
1、没有返回值 不写 void
2、函数名与类名相同，在名称前加 ~
3、析构函数不可以有参数的，不可以发生重载
4、对象在销毁前，会自动调用析构函数，而且智慧调用一次

 */

class Person
{
public:
    Person()
    {
        cout << "person构造函数的调用" << endl;
    };

    ~Person()
    {
        cout <<"persong的析构函数调用" << endl;
    }
};

void test01()
{
    Person p;  //在栈上的数据，test01中创建的person类是一个局部变量

};

int main()
{

    // test01();
    Person p2;
    system("pause");

    return 0;
};