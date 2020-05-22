#include<iostream>
#include<string>

using namespace std;

//1、引用:给变量起别名
//语法： 数据类型 &别名 = 原名
//引用的注意事项
//1、引用必须要初始化  int &b = a;
//2、引用一旦初始化后，就不可以更改了


int main()
{
    int a = 10;
    //创建引用
    int &b = a;
    cout << "a=" << a << "b:" << b << endl;
    cout << "a的地址" << &a << endl;
    cout << "b的地址" << &b << endl;
    int c = 20;
    b = c ;  //赋值操作，而不是更改引用，是被允许的
    // int &b = c;  //这样会导致错误
    a = 30;
    cout << "a=" << a << ", b:" << b << endl;

}

//带局部的都放在栈区
