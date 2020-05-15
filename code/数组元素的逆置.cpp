#include<iostream>
#include<cstdio>
#include<string>

using namespace std;


int main()
{
    //数组的逆置
    int arr[] = {1, 2, 3, 4, 5};
    cout << "元素逆置前的结果-" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }
    

    int start = 0;
    int end = sizeof(arr) / sizeof(arr[0]) - 1;    //末尾元素下标

    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;

    }

    cout << "结果： " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }
    

    return 0;
}
