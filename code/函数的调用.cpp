# include<iostream>
# include<string>

using namespace std;


int add(int num1, int num2)
{
    int sum = num1 + num2;
    return sum;
};


int main()
{
    //函数的调用
    int a = 10;
    int b = 20;
    int c = add(a, b);
    
    //a和b称为 实际参数, 简称实参
    //函数定义中的参数称为形参

    c = add(a, b);

    cout << "求和: " << c << endl;
    
};