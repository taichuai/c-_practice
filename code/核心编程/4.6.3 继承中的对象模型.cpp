#include<iostream>
#include<string>

using namespace std;

class Base
{
public:
    int m_A;

protected:
    int m_B;

private:
    int m_C;

};

class Son:public Base
{
public:
    int m_D;

};


void test01()
{   
    // 父类中所有非静态成员属性都会被子类继承下去,父类中私有成员属性，被编译器隐藏了，但是也会被继承且占用内存
    cout << "size of Son = " << sizeof(Son) << endl;
}

int main()
{
    test01();
    return 0;
}

//利用开发人员命令提示工具查看对象模型
//跳转符： F:
