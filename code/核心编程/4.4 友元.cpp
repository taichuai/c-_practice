#include<iostream>
#include<string>

using namespace std;

//友元的三种实现
//1、全局函数做友元
//2、类做友元
//3、成员函数做友元

class Building
{

    friend void goodGay(Building *building);  //友元 函数

public:
    Building()
    {
        m_Sittingroom = "客厅";
        BedRoom = "卧室";
    }

public:

    string m_Sittingroom;  //客厅
    
private:
    string BedRoom;  //卧室

};

void goodGay(Building *building)  //全局函数做友元
{
    cout << "好基友全局函数 正在访问: " << building -> m_Sittingroom << endl;
    cout << "好基友全局函数 正在访问 " << building -> BedRoom << endl;
};

void test01()
{
    Building building;
    goodGay(&building);
}

int main()
{
    test01();
}