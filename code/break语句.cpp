#include<iostream>
#include<cstdio>
#include<string>

using namespace std;


int main()
{
    //break常用的使用场景
    //switch条件语句中，终止case并跳出switch
    //出现在循环语句中，作用是跳出当前的循环语句
    //出现在嵌套循环中，跳出最近的内层循环语句

    for (int i = 0; i < 10; i++)
    {
        if (i == 5)
        {
            break;
        }
        cout << i << endl;
    }
    
    
    return 0;
}
