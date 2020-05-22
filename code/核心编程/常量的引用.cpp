#include<iostream>
#include<string>

using namespace std;

//引用做函数的返回值

//引用的注意事项
//1、不要返回局部变量的引用
//2、函数的调用可以作为 左值

// static c = 100;

void showValue(int &val)
{
    val = 100;
    cout << "val= " << val << endl;
}


void showValue2(const int &val)
{
    // val = 100;
    cout << "val= " << val << endl;
}

int main()
{
    int a = 10;
    //创建引用
    // int & ref = 10;  //直接引用常量是不被允许的，必须引用一块合法的内存空间

    //加上const 之后，编译器将代码修改 int temp = 10; const int & ref = temp;
    const int & ref = 10;

    showValue(a);
    cout << "外部 a " << a << endl;

    //为了避免修改，需要加上 const
    showValue2(a);
}
