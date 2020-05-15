#include<iostream>
#include<cstdio>
#include<string>

using namespace std;


int main()
{
    //数组就是一个集合

    //一维数组定义的三种方式
    //1、数据类型 数组名 [行数][列数]
    //

    int arr[5][3] = 
    {
        {1,2,3}, 
        {4,5,6}, 
        {7,8,9},
         {1,2,3}, 
         {1,2,1}
    };

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<< arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "二维数组的内存空间大小: " << sizeof(arr) << endl;
    
    
    return 0;
}
