# include<iostream>
# include<string>

using namespace std;

int main()
{   
    //常量指针
    int arr[] = {1,2,3,4,5,6};

    int * p = arr;    //指向数组的指针

    cout << "第一个元素 " << arr[0] << endl;

    //利用指针访问数组中的元素

    cout << "利用指针访问第一个元素: " << *p << endl;

    p++;

    cout << "利用指针访问第一个元素: " << *p << endl;

    int * p2 = arr;

    for (int i = 0; i < 6; i++)
    {
        cout << "指针数组： " << *p2 << endl;
        p2 ++;
    }
    
}
