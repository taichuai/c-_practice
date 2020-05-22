#include<iostream>
#include<string>

using namespace std;

//引用做函数的返回值

//引用的注意事项
//1、不要返回局部变量的引用
//2、函数的调用可以作为 左值

// static c = 100;

int& test01()
{
    int a = 10;  //局部变量存放在四区中的 栈区
    return a;
}

int& test02()  //
{
    static int a = 10;
    
    return a;
}

int main()
{
    int a = 10;
    //创建引用
    int b = 20;
    // int &ref = test01();  //非法操作
    // cout << "ref: " << ref << endl;
    int &ref2 = test02();  //非法操作
    cout << "ref: " << ref2 << endl;

    test02() = 1000;  //如果函数的返回值是引用，这个函数调用可以作为左值
    cout << "ref2: " << ref2 << endl;

}
