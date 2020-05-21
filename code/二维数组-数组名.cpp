#include<iostream>
#include<cstdio>
#include<string>

using namespace std;


int main()
{
    //二维数组数组名
    //1、可以查看占用的内存空间大小
    //2、可以产看二维数组的首地址

    int arr[2][3] = 
    {
        {1, 2, 3},
        {4, 5, 6}
    };

    cout << "二维数组所占内存大小： " << sizeof(arr) << endl;

    //二维数组第一行占用的内存
    cout << "二维数组第一行内存为: " << sizeof(arr[0]) << endl;
    //二维数组的首地址

    cout << "二维数组首地址为： " << long(arr) << endl;

    return 0;
}
