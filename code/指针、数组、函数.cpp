# include<iostream>
# include<string>

using namespace std;

//定义一个冒泡排序函数
void bubbleSort(int * arr, int len)
{
    for (int  i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - i -1; j++)
        {
            if (arr[j] > arr[j +1])
            {
                int temp = arr[j];
                arr[j] = arr[j +1];
                arr[j + 1] = temp;
            }
            
        }
        
    }
    
}

int main()
{   
    //常量指针
    //1、定义一个数组
    int arr[8] = {1,2,3,4,5,6,7,8};

    int len = sizeof(arr) / sizeof(arr[0]);
    //2、创建一个数组，实现冒泡排序
    bubbleSort(arr, len);
    
    //3、打印排序后的数组(arr = & arr = &arr[0])
    cout << 'arr' << arr << " and " << &arr << " and " << &arr[0] << endl;
    int * pp = arr;
    for (int i = 0; i < len; i++)
    {
        cout << "arr_i: " << *pp << endl;
        pp++;
    }

}
