#include<iostream>
#include<cstdio>
#include<string>
#include<ctime>

using namespace std;


int main()
{
    // do{循环语句}, while(循环条件)
    // 注意，与while的区别在于do while，先执行循环语句，再执行循环条件
    

    //需求， do --while在屏幕中输出 0- 9的数字
    int num = 0;

    do
    {
        cout << num << endl;
        num++;
    } 
    while (num < 100);    //满足则执行，否则退出循环
    
    return 0;
}
