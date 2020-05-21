# include<iostream>
# include<string>

using namespace std;

//结构体中 const 使用场景
struct student
{
    string name;  //姓名
    int age;  //年龄
    int score;  //分数
};

//打印学生信息的函数
void printStudent(struct  student s)
{
    cout << "子函数中姓名： " << s.name << "年龄： " << s.age << endl;
};

// 使用指针可以节省内存，不需要重新开辟空间存储形参，而添加 const 可以防止指针使用时被修改
void printStudent2(const struct  student *p)
{   
    // p ->name = "王五";
    cout << "子函数2中 姓名：" << p ->name << "年龄: " << p ->age << endl;
};


int main()
{
    //创建结构体变量
    struct student s;
    s.name = "张三";
    s.age = 20;
    s.score = 45;

    printStudent(s);
    printStudent2(&s);
}
