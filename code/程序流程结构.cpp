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
    cout << "请输入分数为: " << a << endl;
    // if 后面的条件，使用括号将条件括起来，且后面不要使用 ";"符号
    if (a > 10)
    {
       cout << "恭喜你获得好的分数" << endl;
    }
    
    return 0;
}
