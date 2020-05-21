# include<iostream>
# include<string>

using namespace std;


//值传递
//定义函数，实现两个数字进行交换函数
//如果函数不需要返回值，则使用 void 声明
void swap(int num1, int num2)
{
    cout << "交换前" << endl;
    cout << "num1" << endl;
    cout << "num2" << endl; 
    //如果我们做值传递，函数的形参发生改变，并不会影响实参，具体的是因为 形参会额外开辟存储空间

}