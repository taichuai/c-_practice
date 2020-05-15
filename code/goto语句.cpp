#include<iostream>
#include<cstdio>
#include<string>

using namespace std;


int main()
{
    //可以无条件跳转语句，但是并不推荐使用
    // goto语句
    cout << "1 --" << endl;

    cout << "2 --" << endl;

    cout << "3--" << endl;
    goto FLAG;
    cout << "4--" << endl;

    FLAG:
    cout << "5--" << endl;

    return 0;
}
