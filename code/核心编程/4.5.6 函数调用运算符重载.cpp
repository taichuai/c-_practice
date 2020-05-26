#include<iostream>
#include<string>

using namespace std;

//继承：面向对象三大特性之一

//继承的好处：减少重复代码
//语法： class子类:继承方式 父类
//子类 （派生类）
//父类 (基类)


// class Java
// {
// public:
//     void header()
//     {
//         cout << "首页、登录" << endl;
//     }
//     void footer()
//     {
//         cout << "帮助中心、交流合作" << endl;
//     }

//     void left()
//     {
//         cout << "Java 、python、c++" << endl;
//     }

//     void content()
//     {
//         cout << "Java学科视屏" << endl;
//     }
// };

// class python
// {
// public:
//     void header()
//     {
//         cout << "首页、登录" << endl;
//     }
//     void footer()
//     {
//         cout << "帮助中心、交流合作" << endl;
//     }

//     void left()
//     {
//         cout << "Java 、python、c++" << endl;
//     }

//     void content()
//     {
//         cout << "Java学科视屏" << endl;
//     }
// };


class Basepage
{
public:
    void header()
    {
        cout << "首页、登录" << endl;
    }
    void footer()
    {
        cout << "帮助中心、交流合作" << endl;
    }

    void left()
    {
        cout << "Java 、python、c++" << endl;
    }

    void content()
    {
        cout << "Java学科视屏" << endl;
    }
};

class Java:public Basepage  //继承basePage
{
public:
    void content()
    {
        cout << "Java学科视屏" << endl;
    }

};


class python:public Basepage  //继承basePage
{
public:
    void content()
    {
        cout << "python学科视屏" << endl;
    }

};


void test01()
{
    cout << "Java下载: " << endl;
    Java ja;
    ja.header();
    ja.footer();
    ja.left();
    ja.content();

    cout << "python下载: " << endl;
    python py;
    py.header();
    py.footer();
    py.left();
    py.content();
    
}

int main()
{
    test01();
    return 0;
}