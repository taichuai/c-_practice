#include<iostream>
#include<string>

using namespace std;

//计算立方体的体积和面积

class Cube
{
    //属性
    //m_L; m_w, m_h
public:
    //设置长
    void setL(int l)
    {
        m_L = l;
    };
    //获取长
    int getL()
    {
        return m_L;
    };

    //设置宽
    void setW(int w)
    {
        m_W = w;
    }

    //获取宽
    int getW()
    {
        return m_W;
    }

    //设置高
    void setH(int h)
    {
        m_H = h;
    }

    //获取宽
    int getH()
    {
        return m_H;
    }

    //获取立方体面积
    int calculateS()
    {
        return 2 * m_L * m_W + 2 * m_W * m_H + 2 * m_L * m_H;
    }


    bool calcu_same(Cube &c2)
{
    if (m_L == c2.getL() && m_W == c2.getW() && m_H == c2.getH())
    {
        return true;
    }

    return false;
};

private:
    //行为
    //获取立方体面积
    //获取立方体体积
    int m_L;  //长
    int m_W; //宽
    int m_H;
};




//利用全局函数判断两个立方体是否相等
bool calcu_same(Cube &c1, Cube &c2)
{
    if (c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH() && c1.getL() == c2.getL())
    {
        return true;
    }

    return false;
};

int main()
{
    Cube c1;
    c1.setH(10);
    c1.setL(10);
    c1.setW(10);
    cout << "c1的面积为" << c1.calculateS() << endl;

    Cube c2;
    c2.setH(10);
    c2.setL(20);
    c2.setW(10);
    cout << "c1的面积为" << c2.calculateS() << endl;

    bool ret =  calcu_same(c1, c2);
    if (ret)
    {
        cout << "c1和c2相等" << endl;
    }
    else
    {
        cout << "c1和c2不相等" << endl;
    }
    

    system("pause");
}