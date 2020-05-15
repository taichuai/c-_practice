#include<iostream>
#include<cstdio>
#include<string>

using namespace std;


int main()
{
    //逻辑运算符
    //if 语句
    int a = 10;
    cout << "请输入一个分数 " << endl;
    cin >> a;
    //打印用户输入的分数
    cout << "输入的分数为: " << a << endl;
    // if 后面的条件，使用括号将条件括起来，且后面不要使用 ";"符号
    if (a > 500)
    {
        cout << "恭喜获得好分数" << endl;
        if (a > 600)
        {
            cout << "超级牛逼" << endl;
        }
        else
        {
            cout << "一般牛逼" << endl;
        }
        
        
    }
    else if ((600 > a) && (a > 300))
    {
        cout << "中等成绩! " << endl;
    }
    else
    {
        cout << "抱歉!" << endl;
    }
    
    
    
    return 0;
}
