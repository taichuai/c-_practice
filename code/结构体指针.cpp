# include<iostream>
# include<string>

using namespace std;

//结构体指针

//1、定义结构体数组
struct Student
{
    //姓名
    string name;
    //年龄
    int age;
    //分数
    int score;
};

int main()
{
    //1、创建学生结构体变量
    struct Student s = {"张三", 19, 43};
    //2、通过指针指向结构体变量
    Student * p = &s;    //定义结构体的指针方式

    //3、通过指针访问结构体变量中的数据:通过 -> 操作符来访问结构体中的属性

    cout << "姓名： " << p ->name << "年龄" << p ->age << endl;

}
