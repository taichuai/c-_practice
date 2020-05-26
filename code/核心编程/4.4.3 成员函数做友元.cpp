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

    void visit();  //让 visit 函数可以访问 Building中的私有成员

    void visit2(); //让visit2函数不可以访问 Building中的私有成员

    Building * building;
};

class Building
{
    friend void GoodGay::visit();  //goodgay类下的visit成员，可以作为友元访问私有属性

public:
    Building();  //构造函数

public:
    string m_Sittingroom;  //客厅

private:
    string m_BedRoom;  //卧室

};

//类外实现成员函数，这个和 
Building::Building()
{
    m_Sittingroom = "客厅";
    m_BedRoom = "卧室";
};

GoodGay::GoodGay()
{
    building = new Building;

}

void GoodGay::visit()
{
    cout << "visit 函数正在访问 " << building -> m_BedRoom << endl; 

}

void GoodGay::visit2()
{
    cout << "visit 函数正在访问 " << building -> m_Sittingroom << endl; 

}

void test01()
{
    GoodGay gg;
    gg.visit();
    gg.visit2();
}


int main()
{
    //
    test01();
    return 0;
}