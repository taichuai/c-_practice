#include<iostream>
#include<cstdio>
#include<string>

using namespace std;

int main()
{
    //1、c风格的字符串

    cout << "hello" << endl;
    // char 字符串名[]
    // 等号后面要用双引号,包含起来字符串，单引号是单个字符，不能是字符串
    char str[] = "hello world";

    cout << str << endl;
    //2、c++风格的字符串
    // 包含一个头文件 #include<string>

    string str2 = "hello2_world";

    cout << str2 << endl;
    system("pause");

    return 0;
}
