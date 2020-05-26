#include<iostream>
#include<string>

using namespace std;

//判断点和圆的关系判断

class Circle
{

public:
    //设置x坐标
    void setX(int x)
    {
        m_x = x;
    };

    void set(int y)
    {
        m_y = y;
    };

private:
    int m_x;
    int m_y;

};
