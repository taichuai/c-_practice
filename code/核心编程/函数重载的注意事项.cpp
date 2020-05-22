#include<iostream>
#include<string>

using namespace std;

//函数重载

//作用，函数名可以形同，提高复用性
//1、同一个作用域下
//2、函数名称相同
//3、函数参数类型不同，或者个数不同，或者顺序不同


//注意事项
//函数的返回值不可以作为函数重载的条件

//1、引用作为重载的条件
//2、函数重载碰到默认参数

void func()
{
    cout << "func 的调用" << endl;
}

void func(int &a)
{
    cout << "func 2的调用" << endl;
}

void func(const int &a)
{
    cout << "func const调用 " << endl;
}

void func2(int a)
{
    cout << "func2 调用" << endl;
}

void func2(int a, int b = 10)
{
    cout << "func2 int a " << endl;
}

int main()
{
    int a = 10;
    func(a);
    // func2(a);    //函数重载 碰到默认参数，出现二义性尽量避免 如上

}
