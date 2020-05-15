#include<iostream>
#include<cstdio>
#include<string>

using namespace std;


int main()
{
    // 加减乘除
    int a = 10;
    int b = 3;
    cout << a + b << endl;
    cout << a - b << endl;
    cout << a * b << endl;
    cout << a / b << endl;    // 两个整数相除依然是整数

    cout << a / 1 << endl;    // 两个数相除，除数不可以为 0

    //两个小数相除
    double d1 = 0.5;
    double d2 = 2.5;

    cout << d1 / d2 << endl;

    return 0;
}
