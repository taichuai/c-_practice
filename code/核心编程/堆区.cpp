#include<iostream>
#include<string>

using namespace std;

//堆区

int * func()
{
    //利用new关键字，可以将数据开辟到堆区
    //本质上 指针也是局部变量, 放在栈上，指针保存的数据是放在堆区
    int * p = new int(10);

    return p;
};


int main()
{
    //
    int *p = func();    //开辟一个指针变量，接受函数返回的地址，而不是直接接受 func参数p的地址,是func中p存的值
    //更进一步的说，指针只是一种定义，一种可以访问此变量值所指向地址的值的一种定义

    cout << *p << endl;

    system("pause");

}

//带局部的都放在栈区
