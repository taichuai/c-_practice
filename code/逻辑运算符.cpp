#include<iostream>
#include<cstdio>
#include<string>

using namespace std;


int main()
{
    //逻辑运算符
    // 非 !
    int a = 10;
    // 在c++中，除了0都为真
    cout << !a << endl;
    // 与 &,同真为真，其余为假
    int b = 0;
    cout << (a && b) << endl;
    //或 ||
    cout << (a || b) << endl;

    // 提示： | &  与 | &有所区别

    return 0;
}
