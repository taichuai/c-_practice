#include<iostream>
#include<string>

using namespace std;

int ga = 10;
int gb = 10;

const int c_a = 10;
//
int main()
{
    //全局区

    //全局变量、静态变量、常量（从生命周期理解）

    //创建普通局部变量
    int a = 10;
    int b = 10;

    cout << "a的地址: " << (long)&a << endl;
    cout << "b的地址: " << (long)&b << endl;
    //打印全局变量
    cout << "全局a的地址: " << (long)&ga << endl;
    cout << "全局b的地址: " << (long)&gb << endl;

    //静态变量
    static int sa = 10;
    static int sb = 10;
    cout << "静态a的地址: " << (long)&sa << endl;
    cout << "静态b的地址: " << (long)&sb << endl;

    //字符串常量
    cout << "字符串常量的地址: " << (long)&"hello world" << endl;

    //全局常量
    cout << "全局常量的地址: " << (long)&c_a << endl;

    //局部常量
    const int cla = 10;
    cout << "局部常量的地址: " << (long)&cla << endl;
}
