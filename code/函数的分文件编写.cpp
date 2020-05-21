# include<iostream>
# include<string>
# include "swap.h"

using namespace std;


//函数的分文件编写
//实现两个数字的交换

// void swap(int a, int b);

// void swap(int a, int b)
// {
//     int temp = a;
//     a = b;
//     b = temp;

//     cout << "a= " << a << endl;
//     cout << "b= " << b << endl;

// }

// //1、创建 .h后缀名的头文件
// //2、创建 .cpp 后缀名的源文件
// //3、在头文件中写函数的声明
// //4、源文件中先函数的声明

int main()
{
    //函数的调用
    int a = 10;
    int b = 20;
    swap(a, b);
    
    //a和b称为 实际参数, 简称实参
    //函数定义中的参数称为形参

    // swap(a, b);

    // cout << "求和: " << c << endl;
    
}