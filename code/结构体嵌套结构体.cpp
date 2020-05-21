# include<iostream>
# include<string>

using namespace std;

//结构体嵌套
struct student
{
    string name;
    int age;
    int score;
};


//1、定义结构体数组
struct Teacher
{   
    //编号
    int id;
    //姓名
    string name;
    //年龄
    int age;
    //分数
    struct student stu;    // 辅导的学生
};

int main()
{
    //1、创建老师
    struct Teacher t;
    t.id = 1000;
    t.age = 50;
    t.name = "老王";
    t.stu.name = "小王";
    t.stu.age = 20;
    t.stu.score = 60;
   
   cout << "老师姓名: " << t.name << "  学生姓名: " << t.stu.name << endl;
}
