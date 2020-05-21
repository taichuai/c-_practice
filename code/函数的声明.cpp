# include<iostream>
# include<string>

using namespace std;


//函数的声明
//提前告诉编译器函数的存在，可以利用函数的声明
//函数的声明，且声明可以写多次，但是定义只能有一次

int max(int a, int b);

int add(int num1, int num2)
{
    int sum = num1 + num2;
    return sum;
};


int max(int a, int b)
{
    return a > b ? a:b;
}

int main()
{
    //函数的声明
    //比较函数，实现两个整型数字比较，返回较大的值
    int a = 10;
    int b = 20;
    
    cout << max(a, b) << endl;
    
};