#include<iostream>
#include<cstdio>
#include<string>

using namespace std;


int main()
{
    //三目运算符

    //创建三个变量 a , b , c
    //将a, b 做个比较，将变量打的值，赋值给变量c
    int a = 10;
    int b = 20;
    int c = 0;

    c = (a > b ? a : b);

    cout << "c = " << c << endl;

    (a > b ? a:b) = 100;
    cout << "a= " << a << endl;
    cout << "b= " << b << endl;
    
    return 0;
}
