#include<iostream>
#include<string>

using namespace std;

// 面向对象三大特性： 封装、继承、多态

double PI = 3.14;

//类中的属性和行为 我们统一称为 成员
//属性 成员属性 成员变量
//行为 方法函数

class Student
{
    //访问权限
//公共权限
public:

    //属性
    string name;
    int id;

    //行为
    void showStudent()
    {
        cout << "姓名：" << name << " 学号: " << id << endl;
    }

    void setName(string n)
    {
        name = n;
    }

};


int main()
{
    //封装
    //封装的意义
    //设计一个圆类，求圆的周长
    //圆求州长公式

    //通过圆类，创建一个圆对象
    Student st;
    //给圆对象 的属性进行赋值
    st.name = "张三";
    st.id = 12345;
    st.setName("李四");
    //计算周长
    st.showStudent();

}
