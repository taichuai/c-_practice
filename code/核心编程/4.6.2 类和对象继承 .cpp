#include<iostream>
#include<string>

using namespace std;

class Base1
{
public:
    int m_A;

protected:
    int m_B;
private:
    int m_C;
};

class Son1:public Base1
{
public:
    void func()
    {
        m_A = 10; //父类中公共权限成员，到子类中依然是公共权限
        m_B = 10; //父类中的保护权限成员，到子类中依然是保护全新
        // m_C = 10  //私有权限不能访问
    }    
};

class Son2:protected Base1
{
public:
    void func()
    {
        m_A = 100;  //父类中公共成员，到子类中变为了保护权限
        m_B = 100;  //父类中保护成员，到子类中变为保护权限
        // m_C = 100 //保护私有成员，子类访问不到

    }
};

void test01()
{
    Son1 s1;
    s1.m_A = 100; 
    // s1.m_B = 100; // Son1中 m_B 是保护权限，类外访问不到
    Son2 s2;
    // s2.m_A = 100;  //Son2中不能访问
}



int main()
{
    test01();
    return 0;
}