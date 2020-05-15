#include<iostream>
#include<cstdio>
#include<string>

using namespace std;

int main()
{
    //1、整型
    int a = 0;
    cout << "请给整型变量a赋值: " << endl;
    cin >> a;

    cout << "整型变量a = " << a << endl;
    //浮点型
    float f = 3.14f;
    cout << "请给浮点变量赋值" << endl;
    cin >> f;
    cout << "浮点： " << f << endl;

    // 字符型注意 include<string>就好了
    return 0;
    // 其他的数据类型也一样
}
