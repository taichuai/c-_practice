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
    Person()
    {
        cout << "person构造函数的调用" << endl;
    };
    //有参构造函数
    Person(int a)
    {
        age = a;
        cout << "person的有参构造函数调用" << endl;
    }

    //析构函数
    ~Person()
    {   
        cout <<"persong的析构函数调用" << endl;
    }

    //拷贝构造函数，有点类似于函数的继承？
    Person(const Person &p)
    {
        age = p.age;
        cout << "拷贝构造函数调用" << endl;
    }

    int age;
};

void test01()
{
    Person p;  //在栈上的数据，test01中创建的person类是一个局部变量

};

void test02(int a)
{
    Person p(a);
}

void test03()
{
    //默认构造函数时，不要加 (),因为编译器会认为是一个函数的声明,不会认为是在创建对象
    Person p;

    Person P3(p);

    Person p4 = Person(10);

    Person(10);  //匿名对象 特点：当前执行结束后，系统会立即回收匿名对象
    cout << "aaa" << endl;
    //不要利用拷贝构造函数，初始化匿名对象

    Person p5 = Person(p4);

    //隐式转换法
    Person p4 = 10;  //相当于 写了 Person p4 = Person(10);
    Person p4 = p4; //拷贝构造

}

int main()
{

    // test01(); //默认构造函数调用
    // test02(10); //有参构造函数
    test03();
    system("pause");

    return 0;
};