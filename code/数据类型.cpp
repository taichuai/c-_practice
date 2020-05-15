# include<iostream>

using namespace std;
//数据类型存在的意义就是给变量分配合适的内存空间
//

/*
short 2个字节
int 4个字节
long(长整形) linux中4个字节
long long 8个字节
 */

int main()
{
    //短整型(-32768 - 32767)
    short n1 = 10;
    short n2 = 32996;

    //整型
    int n3 = 10;

    //长整型
    long n4 = 100;

    cout << "短" << n1 << "整型" << n3 << "长" << n4 << endl;

    system("pasuse");

    return 0;
}