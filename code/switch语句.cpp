#include<iostream>
#include<cstdio>
#include<string>

using namespace std;


int main()
{
    //switch语句
    //给电影进行打分
    // 10-9经典， 8-7非常好， 6-5一般， 5分以下，烂片
    

    //1、提示用户给电影评分
    cout << "请给电影打分" << endl;
    int score = 10;
    cin >> score;
    cout << "您给的分数为" << score << endl;
    switch (score)
    {
    case 10:    //case后面跟 : 
        cout << "您认为是经典电影" << endl;
        break; // 退出当前分支
    case 9:
        cout << "您认为电影非常好" << endl;
        break;    //退出当前分支
    case 8:
        cout << "您认为电影一般" << endl;
        break;
    default:    //前面几个都不满足，则执行此条
        break;
    }
    
    
    
    return 0;
}

//总结：
//switch 缺点： 判断时候只能是整型或者字符型，不可以是一个区间
//switch 优点： 结构清洗，执行效率高相比if-else结构