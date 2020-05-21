# include<iostream>
# include<string>

using namespace std;

//地址传递: 如果需要改变实参,则使用地址传递

void swap01(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

void swap02(int *p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main()
{   
    //指针和函数
    //1、地址传递
    int a = 10;
    int b = 20;
    swap02(&a, &b);

    cout << "a:" << a << " , b: " << b << endl;

}
