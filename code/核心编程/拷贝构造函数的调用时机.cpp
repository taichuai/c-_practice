#include<iostream>
#include<string>

using namespace std;

//拷贝构造函数的调用时机
//1、使用一个已经创建完毕的对象来初始化一个新对象
//2、值传递的方式给函数参数传值
//3、值方式返回局部对象

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

Person doWork2()
{
    Person p1;

    return p1;
}

void test03()
{
    Person p = doWork2();
}

void dowork(Person p)
{
    cout << "dowork" << endl;
}

void test02()
{
    Person p;
    dowork(p);
}

void test01()
{
    Person p1(20);
    Person p2(p1);

    cout << "p2的年龄" << p2.age << endl;
}

int main()
{

    test02(); //函数中涉及到 类作为值进行传递，所以 会使用类中的拷贝函数
    test03(); // 作为返回值，也会调用类中的拷贝函数，但是 新的编译器好像有优化
    system("pause");

    return 0;
};