# include<iostream>

using namespace std;

//字符型 char ch = 'a'
// c和c++字符型变量只占一个字节

int main()
{
    //字符型变量的创建方式
    char ch = 'a';
    cout << ch << endl;

    //字符型变量所占内存大小:一个字节
    cout << "char 字符型变量所占内存大小" << sizeof(char) << endl;

    // 字符型变量 常见错误
    // char ch2 = "b",字符型变量要用单引号
    // 创建字符变量单引号内只能有一个字符
    
    // 字符型变量对应的ascii值， (int) char
    cout << (int)ch << endl;

    return 0;
}