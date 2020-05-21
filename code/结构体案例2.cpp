# include<iostream>
# include<string>

using namespace std;


struct Hero
{
    // 姓名
    string name;
    //年龄
    int age;
    //性别
    string sex;
};


void bubblesort(struct Hero heroarray[], int len)
{   
    // int len = sizeof(heroarray) / sizeof(heroarray[0]);
    for (int i = 0; i < len -1; i++)
    {
        for (int j = 0; j < len -i -1; j++)
        {
            if (heroarray[j].age > heroarray[j + 1].age)
            {
                struct Hero temp = heroarray[j];
                heroarray[j] = heroarray[j + 1];
                heroarray[j + 1] = temp;
            }
        }
        
    }
    
}

void printinfo(struct Hero heroarray[], int len)
{
    // len = sizeof(heroarray) / sizeof(heroarray[0]);
    cout << len << endl;

    for (int i = 0; i < len; i++)
    {
        cout << "人名: " << heroarray[i].name << " 年龄:" << heroarray[i].age << endl;
    };
}


int main()
{
    //1、设计英雄的结构体
    
    //2、对数组进行排序，按照年龄进行升序排列
    struct Hero heroarray[5] = {
        {"刘备", 23, "男"},
        {"关羽", 22, "男"},
        {"貂蝉", 18, "女"},
        {"赵云", 22, "男"},
        {"西施", 33, "女"}
    };
    cout << sizeof(heroarray) << endl;
    int len = sizeof(heroarray) / sizeof(heroarray[0]);
    printinfo(heroarray, len);
    bubblesort(heroarray, len);
    printinfo(heroarray, len);

    return 0;
}
