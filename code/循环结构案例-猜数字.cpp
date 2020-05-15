#include<iostream>
#include<cstdio>
#include<string>
#include<ctime>

using namespace std;


int main()
{
    //生成随机数种子（利用系统时间作为种子，防止每一次的随机数都一样）
    srand((unsigned int)time(NULL));    //需要在头文件中加 ctime
    //1、系统生成随机数
    int num = rand() % 100 +1; //生成一个0-100的随机数


    cout << "随机数为: " << num << endl;
    
    int val = 0;
    while (1)
    {
        cin >> val;
        if (val > num)
        {
            cout << "猜测过大" << endl;
        }
        else if (val < num)
        {
            cout << "猜测过小" << endl;
        }
        else
        {
            cout << "猜中答案" << endl;
            break; // 再循环中，可以退出当前循环
        }
    }
    
    
    
    
    return 0;
}
