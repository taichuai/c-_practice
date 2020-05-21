# include<iostream>
# include<string>

using namespace std;

int main()
{   
    //常量指针
    int a = 10;
    int b = 20;
    const int * p = & a;
    //指针的指向可以修改，但是指针的指向的值不可以修改，那么
    // *p = 20; //这个是错误操作
    p = &b; //这个是正确操作
    cout << "p: " << endl;

    //指针常量
    int * const s = &a;  //指针后面跟的是常量

    *s = 20;
    // s = &b;  //错误的


    //const既修饰指针，又修饰常量
    const int * const P = &a;
    // *p = 20;
    // p = &a;

    //技巧: const 后面跟啥，啥是固定的
}
