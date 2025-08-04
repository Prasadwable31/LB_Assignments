#include<iostream>
using namespace std;

template<class T>
void Reverse(T *arr, int iSize)
{
    T *ptr1 = arr;
    T *ptr2 = arr;
    T temp = 0;

    for (int i = 0; i < iSize - 1; i++)
    {
        ptr2++;
    }

    while(ptr1 < ptr2)
    {
        temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;

        ptr1++;
        ptr2--;
    }
}

int main()
{
    int arr[]={10,20,30,10,30,40,10,40,10};

    for(int i = 0; i < 9; i++)
    {
        cout<<arr[i]<<"\t"; // 10 20 30 10 30 40 10 40 10
    }

    Reverse(arr,9);
    cout<<"\n";
    
    for(int i = 0; i < 9; i++)
    {
        cout<<arr[i]<<"\t"; // 10 40 10 40 30 10 30 20 10
    }

    return 0;
}