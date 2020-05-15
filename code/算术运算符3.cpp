#include<iostream>
#include<cstdio>
#include<string>

using namespace std;


int main()
{
    // 递增运算符
    //前置递增
    int a = 10;
    ++a;  //让变量+1
    cout << "a = " << a << endl;

    //后置递增
    int b = 10;
    b++;  // 让变量 + 1
    cout << "b = " << b << endl;

    //前置和后置递增
    //区别在于：前置递增，先让变量+1，然后进行表达式计算
    //且同一个变量，不能重复声明
    a = 20;
    b = ++a * 10;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    // 后置递增，先进行表达式运算，后让变量+1

    a = 10;
    b = a++ * 10;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    system("pause");
    return 0;
}
