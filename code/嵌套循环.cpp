#include<iostream>
#include<cstdio>
#include<string>
#include<ctime>

using namespace std;


int main()
{
    //利用嵌套循环实现星图

    //打印一行星图
    for (int s = 0; s < 8; s++)
    {
        for (int i = 0; i < 10; i ++)
        {
            cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}
