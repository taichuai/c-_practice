#include<iostream>
#include<string>

using namespace std;

// 面向对象三大特性： 封装、继承、多态

double PI = 3.14;

class Circle
{
    //访问权限
//公共权限
public:

    //属性
    int m_r;

    //行为
    double calculateZC()
    {
        return 2 * PI * m_r;
    }
};


int main()
{
    //封装
    //封装的意义
    //设计一个圆类，求圆的周长
    //圆求州长公式

    //通过圆类，创建一个圆对象
    Circle cl;
    //给圆对象 的属性进行赋值
    cl.m_r = 10;
    //计算周长
    cout << "圆的周长为" << cl.calculateZC() << endl;

}
