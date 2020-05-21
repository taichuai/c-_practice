# include<iostream>
# include<string>

using namespace std;

int main()
{   
    //常量指针
    int a = 10;
    int b = 20;
    const int * p = &a;    //修饰的 *p是一个常量
    // *p = 20; //错误
    p = &b;

    //指针常量
    int * const p2 = &a;   //修饰的是 p是一个常量，所以指向不能改动
    *p2 = 100;
    // p2 = &b;

    const int * const p3 = &a;  //都不可以修改

    //指针最重要的特性：指针指向和指向的值
}
