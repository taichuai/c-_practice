#include<iostream>
#include<cstdio>
#include<string>

using namespace std;


int main()
{
    //数组就是一个集合

    //一维数组定义的三种方式
    //1、数据类型 数组名 [数组长度]
    //2、数据类型 数组名 [数组长度] = [值1，值2, ..]
    //3、数据类型 数组名 [] = [值1，值2， ..]，如果初始化数据的时候，没有全部填完，则会用0来填补
    
    /*
    数组特点，放在一块连续的内存空间中，
    数据中的每一个元素都是相同数据类型
    
     */
    int arr[5];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;

    //访问数据元素
    cout << arr[0] << endl;

    cout << arr << endl;    // 打印的是 arr 的地址
    

    for (int i = 0; i < 5; i++)
    {
        arr[i] = i * 10;
    }
    
    // 
    int arr2[5] = {10, 20, 30, 40, 50};
    for (int i = 0; i < 5; i++)
    {
        cout << arr2[i] << endl;
    }

    // 数据类型 数组名[] = {值1， 值2， ...}，定义数组必须有初始长度
    int arr3[] = {10,20130,40,50,20,30,60};

    return 0;
}
