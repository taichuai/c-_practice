# include<iostream>
# include<string>

using namespace std;


struct student
{
    /* data */
    string name;
    int score;
};


struct teacher
{
    string tname;
    struct student sArray[5];
    
};


void allocateSpace(struct teacher tArray[], int len)
{
    string nameSeed = "abcde";
    for (int i = 0; i < len; i++)
    {
        tArray[i].tname = "teacher_";
        tArray[i].tname += nameSeed[i];
        for (int j = 0; j < 5; j++)
        {
            //
            tArray[i].sArray[j].name = "student_";
            tArray[i].sArray[j].name += nameSeed[j];
            tArray[i].sArray[j].score = 60;
        }
        
    }
    
};

void printInfo(struct teacher tArray[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << "老师姓名" << tArray[i].tname << endl;
        for (int j = 0; j < 5; j++)
        {
            cout << "学生姓名 " << tArray[i].sArray[j].name << 
            " 考试分数 " << tArray[i].sArray[j].score << endl;
        }
        
    }
    
}

int main()
{
    //1、创建3名老师的数组
    struct teacher tArray[3];
    //2、通过函数给三明老师的信息赋值,并给老师带的学生信息赋值
    int len = sizeof(tArray) / sizeof(tArray[0]);
    allocateSpace(tArray, len);
    printInfo(tArray, len);
    //3、打印所有老师及所带学生信息


}                                                                                                                                                                                 
