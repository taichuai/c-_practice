#include<iostream>
#include<cstdio>
#include<string>
#include<ctime>

using namespace std;


int main()
{
    //for循环语句
    //满足循环条件，执行循环语句
    // for(其实表达式，条件表达式，末尾循环体) (循环语句;)

    //从数字 0 打印到 数字 9
    for(int i = 0; i < 10; i ++)
    {
        cout << i << endl;
    }

    //下面这个式子和上面的等价，尽量使用上面结构更加精简
    int s = 0;
    for (; ;)
    {
        if (s >= 5)
        {
            break;
        }
        cout << s << endl;
        s++;
    }
    

    return 0;
}
