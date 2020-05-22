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

void func()
{
    cout << "func 的调用" << endl;
}

void func(int a)
{
    cout << "func 2的调用" << endl;
}

void func(double a, int b)
{
    cout << "func 双精度 " << endl;
}

int main()
{
    int a = 10;
    // func();
    // func(10);
    func(3.14, 10);

}
