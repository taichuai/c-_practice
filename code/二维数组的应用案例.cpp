# include<iostream>
# include<string>

using namespace std;

int main()
{
    //考试成绩统计
    int scores[3][3] = {
        {80, 20, 60},
        {91,83,99},
        {90, 89, 95}

    };
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "成绩" << scores[i][j] << endl;
        }
        
    }
    
}