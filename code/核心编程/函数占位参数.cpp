#include<iostream>
#include<string>

using namespace std;

//函数占位参数
// c++中函数的形参列表可以有占位参数，用来做占位，调用函数时必须填补该位置
//语法： 返回值类型 函数名 (数据类型) {}
//目前阶段的占位参数，我们还用不到，后面介绍
//占位参数 还可以有默认参数

void func(int a, int = 10)  // int 占位
{
    cout << "hello " << endl;
}


int main()
{
    int a = 10;
    func(10 ,20);
    
}
