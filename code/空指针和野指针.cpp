# include<iostream>
# include<string>

using namespace std;

int main()
{
    //空指针
    //1、空指针用于给指针变量进行初始化
    int *p = NULL;

    //2、空指针是不可以进行访问的( 0-255 之间的内存编号是系统占用内存，不允许用户访问)
    // *P = 100;

    //野指针
    //在程序中，尽量避免出现野指针
    // int * p = (int *)0x1000;
    // cout << *p << endl;

    //空指针和野指针都不是我们的常规指针，不能随意访问和使用
}
