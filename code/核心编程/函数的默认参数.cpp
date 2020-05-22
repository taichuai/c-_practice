#include<iostream>
#include<string>

using namespace std;

//引用做函数的返回值

//引用的注意事项
//1、不要返回局部变量的引用
//2、函数的调用可以作为 左值

// static c = 100;

int func(int a, int b = 20, int c= 30)
{
    return a + b + c;
}


//注意事项
//1、如果某个位置已经有了默认参数，那么从这个位置往后，从左向右都必须有默认值，即默认参数写在一般形参之后
//2、如果函数的声明，函数的实现就不能有默认参数了，声明和实现只能有一个有默认参数，及同一个参数不能冲突

int func2(int a, int b = 20);

int func2(int a = 10, int b)
{
    return a + b;
}


int main()
{
    cout << func(10, 30) << endl;

    cout << func2(10, 20) << endl;

    system("pause");
    
    return 0;
}
