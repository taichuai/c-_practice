#include<iostream>
#include<string>

using namespace std;

//构造函数的分类和调用
//分类:
//无参构造  有参构造
//按照类型分类，拷贝构造和无参构造函数


class Person
{
public:
    Person()  //默认构造函数
    {
        cout << "person构造函数的调用" << endl;
    };
    //有参构造函数
    Person(int a, int height)
    {
        age = a;
        m_Height = new int(height);
        cout << "person的有参构造函数调用" << endl;
    }

    //析构函数,程序结束前，将之前堆区的参数m_height释放
    ~Person()  //析构在堆区有内存的时候可以用来释放堆区的内存
    {   
        if (m_Height !=NULL)
        {
            delete m_Height;
            m_Height = NULL;
        }
        cout <<"persong的析构函数调用" << endl;
    }

    //拷贝构造函数，有点类似于函数的继承？
    Person(const Person &p)
    {
        age = p.age;
        // m_Height = p.m_Height;  //浅拷贝
        m_Height = new int(*p.m_Height);  //深拷贝
        cout << "拷贝构造函数调用" << endl;
    }

    int age;
    int *m_Height;  //身高
};

void test01()
{
    Person p1(18, 160);
    cout << "p1的年龄为： " << p1.age << "身高为：" << *p1.m_Height << endl;
    Person p2(p1);
    cout << "p2的年龄为： " << p2.age << "身高为:" << *p2.m_Height << endl;
}

int main()
{

    // test01(); //默认构造函数调用
    // test02(10); //有参构造函数
    test01();
    system("pause");

    return 0;
};