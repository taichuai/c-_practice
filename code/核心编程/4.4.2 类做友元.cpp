#include<iostream>
#include<string>

using namespace std;

//友元的三种实现
//1、全局函数做友元
//2、类做友元
//3、成员函数做友元
class Building;
class GoodGay
{
public:
    GoodGay();
    void visit();
    Building * Building;

private:
    Building *building;

};

class Building
{

    friend class GoodGay;

public:
    Building();

public:

    string m_Sittingroom;  //客厅
    
private:
    string BedRoom;  //卧室

};

//类外写成员函数
Building::Building()
{
    this -> m_Sittingroom = "客厅";
    this -> BedRoom = "卧室";
};

GoodGay::GoodGay()
{
    building = new Building;
};


void goodGay::visit()
{
    cout << "好基友正在访问" << building -> m_Sittingroom << endl;
}

void test01()
{
    Building building;
    goodGay(&building);
}

int main()
{
    test01();
}