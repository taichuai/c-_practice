#include<iostream>
#include<string>

using namespace std;

//1、new的基本语法

int * func()
{
    //在堆区创建整型数据
    int * p = new int(10); //new返回是 该数据类型的地址

    return p;
};


void test01()
{
    int *p = func();
    cout << *p << endl;
    cout << *p << endl;
    cout << *p << endl;
    //堆区的数据 由程序员开辟，程序员管理释放
    //如果想释放堆区的数据，利用关键字 delete
    delete p;

    // cout << *p << endl;
}

void test02()
{
    int * arr= new int[10];  //代表数组有10个元素的地址
    for (int i = 0; i < 10; i++)
    {
        /* code */
        arr[i] = i + 100;
    }
    
    for (int i = 0; i < 10; i++)
    {
        // cout << i << endl;
        cout << arr[i] << endl;
    }

    // 释放堆区数组
    //释放数组的时候，要加[]才可以
    delete[] arr;
    

}

int main()
{
    //
    // test01();
    test02();

}

//带局部的都放在栈区
