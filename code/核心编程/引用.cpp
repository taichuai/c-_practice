#include<iostream>
#include<string>

using namespace std;

//1、引用:给变量起别名
//语法： 数据类型 &别名 = 原名


int main()
{
    int a = 10;
    //创建引用
    int &b = a;
    cout << "a=" << a << "b:" << b << endl;
    cout << "a的地址" << &a << endl;
    cout << "b的地址" << &b << endl;
    a = 30;
    cout << "a=" << a << ", b:" << b << endl;

}

//带局部的都放在栈区
