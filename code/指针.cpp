# include<iostream>
# include<string>

using namespace std;

int main()
{
    //指针 指针可以保存一个地址，甚至可以说，指针就是地址
    //那么：
    //1、如何定义指针
    int a = 10;
    //指针的定义的语法：数据类型 * 指针变量名
    int * p;
    //让指针记录变量a的地址
    p = &a;  //让指针指向 a 的地址

    cout << "a的地址为: " << &a << endl;
    cout << "指针p为： " << p << endl;
    cout << "指针p的地址 : " << &p << endl;  //开辟了空间，存储了a的地址

    int b = a;
    cout << "b的地址为： " << &b << endl;    //地址与a的地址不相同
    cout << "b的值为: " << b << endl;    //

    //2、如何使用指针
    //可以通过解引用的方式，来找到指针指向的内存
    //指针 前加一个 * 就表示指针的解引用，找到指针指向的内存中的数据
    *p = 100;
    cout << "a= " << a << endl;
    cout << "*p= " << *p << endl;
    
}
