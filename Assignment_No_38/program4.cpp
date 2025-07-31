#include<iostream>
using namespace std;

template<class T>
T Max(T *arr, int iSize)
{
    T iMax = 0;

    for(int i = 0; i < iSize; i++)
    {
        if(iMax < arr[i])
        {
            iMax = arr[i];
        } 
    }

    return iMax;
}

int main()
{
    int arr[]={10,20,30,40,50};
    float brr[] = {10.0f,3.7f,99.8f,8.7f};
    
    int iRet = Max(arr,5);
    printf("%d\n",iRet);
    
    float fRet = Max(brr,4);
    printf("%f\n",fRet);
    
    return 0;
}