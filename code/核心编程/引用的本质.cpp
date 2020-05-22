#include<iostream>
#include<string>

using namespace std;

//引用的本质在c++内部实现是一个指针常量

void func(int& ref)
{
    ref = 100;
}

int main()
{
    int a = 10;  //创建一个内存，存入10
    //自动转换为 int * const ref = &a; 指针指向不能改,这也是 引用初始化后不能发生改变的原因
    int& ref = a;  //引用，相当于创建了一个指针常量
    ref = 20;  //内部发现ref是引用，自动帮我们转换为: *ref = 20;

    cout << "a: " << a << endl;
    cout << "ref: " << ref << endl;

    func(a);

    return 0;
}