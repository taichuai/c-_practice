# include<iostream>
# include<string>

using namespace std;

//结构体定义和使用

//结构体定义和使用
//语法： struct 结构体名 {结构体成员列表}
//1、创建学生数据类型: 学生包括(姓名，年龄，分数)

struct Student
{
    /* data */
    // 成员列表

    //姓名
    string name;
    //年龄
    int age;
    //分数
    int score;
};

//通过学生类型创建具体学生

struct Student2
{
    /* data */
    // 成员列表

    //姓名
    string name;
    //年龄
    int age;
    //分数
    int score;
} s3;


int main()
{
    // struct  Student s1
    struct Student s1;
    //给s1属性赋值,通过访问结构体中的属性
    s1.name = "张三";
    s1.age = 18;
    s1.score = 100;
    cout << "姓名" << s1.name << "年龄" << s1.age << "分数" << s1.score << endl;
    
    //第二种定义方式,创建变量的时候，结构体关键字 struct 可以省略
    struct  Student s2 = {"李四", 19, 18};
    cout << "姓名" << s2.name << "年龄" << s2.age << "分数" << s2.score << endl;

    //第三种定义方式:定义的同事，顺便创建结构体比那辆
    s3.name = "王五";
    s3.age = 20;
    s3.score = 20;

    system("pause");

}

//定义结构体的关键字 struct 不可以省略
//创建结构体变量时，可以省略关键字
//使用方法类似于 python 中的类的使用方式