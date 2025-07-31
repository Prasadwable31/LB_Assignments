#include<iostream>
using namespace std;

template<class T>
T Min(T *arr, int iSize)
{
    T iMin = 0;

    for(int i = 0; i < iSize; i++)
    {
        if(iMin < arr[i])
        {
            iMin = arr[i];
        } 
    }

    return iMin;
}

int main()
{
    int arr[]={10,20,30,40,50};
    float brr[] = {10.0f,3.7f,99.8f,8.7f};
    
    int iRet = Min(arr,5);
    printf("%d\n",iRet);
    
    float fRet = Min(brr,4);
    printf("%f\n",fRet);
    
    return 0;
}