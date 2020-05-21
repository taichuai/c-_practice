#include<iostream>
#include<string>

using namespace std;

//栈区数据注意事项： 不要返回局部变量的地址
//栈区的数据由编译器管理开辟
//形参数据也会放在栈区

int * func(int b)
{   
    b = 100;
    int a = 10;    //局部变量存放在栈区，栈区的数据在函数执行后会自动释放

    return &a;

};


int main()
{
    //接受func函数返回值
    int *p = func(1);

    // cout << *p << endl;  //第一次可能可以打印，因为编译器做了保留
    // cout << *p << endl;    //第二次就不再保留了

    system("pause");

}

//带局部的都放在栈区