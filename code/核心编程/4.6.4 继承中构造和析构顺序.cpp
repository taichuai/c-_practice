#include<iostream>
#include<string>

using namespace std;

class Base
{
public:
    //构造函数
    Base()
    {
        cout << "Base构造函数" << endl;
    };

    //析构函数
    ~Base()
    {
        cout << "Base的析构函数" << endl;
    }
};

class Son:public Base
{
public:
    Son()
    {
        cout << "Son构造函数！" << endl;
    }

    ~Son()
    {
        //析构函数
        cout << "Son 析构函数" << endl;
    }
};


void test01()
{
    // Base b;

    //继承中的构造和析构顺序如下：
    //先构造父类，再构造子类，先析构子类，在析构父类
    Son s1;
}

int main()
{
    test01();

    return 0;
}