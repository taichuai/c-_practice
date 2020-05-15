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
    if (a > 100)
    {
        cout << "恭喜获得好分数" << endl;
    }
    // else if (50 < a < 100) // 注意这种写法有问题
    else if ((50 < a) && (100 > a))
    {
        cout << "恭喜考上了二本大学" << endl;
    }
    else
    {
        cout << "成绩差" << endl;
    }

    
    return 0;
}
