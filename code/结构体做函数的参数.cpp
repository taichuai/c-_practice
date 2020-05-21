# include<iostream>
# include<string>

using namespace std;

//结构体嵌套
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

void printStudent2(struct  student *p)
{
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
    
}
