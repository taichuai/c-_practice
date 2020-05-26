#include<iostream>
#include<string>

using namespace std;

//左移运算符重载


class Person
{
public:
    Person(int age)
    {
        m_age = new int(age);  //开辟数据到了堆区
    }

    ~Person()
    {   
        //释放内存
        if (m_age != NULL)
        {
            delete m_age;
            m_age = NULL;
        }
    }

    //重载 赋值运算符
    Person& operator=(Person &p)
    {
        if (m_age != NULL)
        {
            delete m_age;
            m_age = NULL;
        }
        //深拷贝
        m_age = new int(*p.m_age);

        //返回自身
        return *this;
    };

    int *m_age;
};


void test01()
{
    Person p1(18);
    Person p2(20);
    Person p3(30);

    p3 = p2 = p1;

    cout << "p1的年龄为： " << *p1.m_age << endl;
    cout << "p2的年龄为: " << *p2.m_age << endl;
    cout << "p3的年龄为: " << *p3.m_age << endl;

}

int main()
{
    test01();
}
