#include<iostream>
#include<string>

using namespace std;

//struct 和 class区别
//struct 默认权限是公共 public
//class 默认权限是私有 private

class c1
{
    string m_name = "c1";
};


struct c2
{
    string m_name = "c2";
};

int main()
{
    c1 c1;
    // cout << c1.m_name << endl;
    c2 c2;
    cout << c2.m_name << endl;
    
}
