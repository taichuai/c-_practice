#include<iostream>

using namespace std;

int main()
{

    // 单精度: float
    // 双精度: double
    // 默认情况下，会输出一个小数
    float f1 = 3.14f; //通常在单精度后面加个 f ,不然会先把3.14作双精度，然后再做转换

    cout << "f1 = " << f1 << endl;

    double d1 = 3.1515445;

    cout << "d1 = " << d1 << endl;

    // 科学计数法
    float f2 = 3e2; // 3* 10 ^ 2

    cout << "f2 = " << f2 << endl;

}