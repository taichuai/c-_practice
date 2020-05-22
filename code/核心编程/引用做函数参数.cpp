#include<iostream>
#include<string>

using namespace std;

//1、引用:给变量起别名
//语法： 数据类型 &别名 = 原名
//引用的注意事项
//1、引用必须要初始化  int &b = a;
//2、引用一旦初始化后，就不可以更改了

void mySwap01(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}


void mySwap02(int * a, int * b)  //引用起别名
{
    int temp = *a;
    * a = *b;
    * b = temp;
}


void mySwap03(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 10;
    //创建引用
    int b = 20;
    mySwap01(a, b);  //值传递，形参不会修饰实参

    cout << "a=" << a << ", b:" << b << endl;

    mySwap02(&a, &b);  //地址传递，形参会修饰实参

    cout << "a=" << a << ", b:" << b << endl;

    mySwap03(a, b);  //引用传递，形参会修饰实参

    cout << "a=" << a << ", b:" << b << endl;

}

//带局部的都放在栈区
