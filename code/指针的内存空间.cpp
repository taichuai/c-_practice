# include<iostream>
# include<string>

using namespace std;

int main()
{
    //指针所占的内存空间大小
    int a = 10;

    int * p = &a;

    cout << "sizeof " << sizeof(p) << endl;    //windows中是四个字节， linux中是8个字节
    cout << "sizeof " << sizeof(int *) << endl;    //windows中是四个字节， linux中是8个字节
    cout << "sizeof " << sizeof(float *) << endl;    //windows中是四个字节， linux中是8个字节
    cout << "sizeof " << sizeof(double *) << endl;    //windows中是四个字节， linux中是8个字节
    //总的而言，在32位操作系统下，指针占四个字节，不管什么数据类型
    //在64位操作系统下，指针总是占八个字节，不管是什么数据类型
    
}
