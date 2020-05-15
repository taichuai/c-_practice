# include<iostream>

using namespace std;

int main()
{
    //语法: sizeof (数据类型 / 变量)
    short num1 = 10;
    cout << "short占用的空间" << sizeof(short) << endl;

    cout << "num1占用的空间" << sizeof(num1) << endl;


    long num2= 10;
    cout << "long占用的空间" << sizeof(long) << endl;

    cout << "num2占用的空间" << sizeof(num2) << endl;

}
