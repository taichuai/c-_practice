#include<iostream>
#include<string>

using namespace std;

//左移运算符重载


class MyInteger
{
    friend ostream& operator<<(ostream& cout, MyInteger myinteger);

public:
    
    MyInteger()
    {
        m_Num = 0;
    }

    //重载前置++运算符
    MyInteger& operator++()  //返回引用
    {
        m_Num ++;

        return *this;
    }
    //重载后置++运算符
    //void operator++(int)  int代表占位参数，可以用于区分前置和后置递增
    MyInteger operator++(int)
    {
        //后置递增
        //先 返回结果
        MyInteger temp = *this;
        //后 递增
        m_Num ++;
        //最后将记录结果做返回
        return temp;
    }

private:
    int m_Num;
};

//重载左移运算符
ostream& operator<<(ostream& cout, MyInteger myinteger)
{
    cout << myinteger.m_Num;

    return cout;
}


void test01()
{
    MyInteger myint;
    cout << ++(++myint) << endl;
    cout << myint << endl;
}

int main()
{
    test01();
    int a = 0;
    cout << ++a << endl;
}
