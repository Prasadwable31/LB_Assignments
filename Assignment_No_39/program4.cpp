#include<iostream>
using namespace std;

template<class T>
int SearchLast(T *arr, int iSize, T iNo)
{
    int i = 0, iTrack = -1;

    for (i = 0; i < iSize; i++)
    {
        if(arr[i] == iNo)
        {
            iTrack = i;
        }
    }

    if(iTrack == -1)
    {
        return -1;
    }
    else
    {
        return iTrack + 1;
    }
}

int main()
{
    int arr[]={10,20,30,10,30,40,10,40,10};

    int iRet = SearchLast(arr,9,40);
    printf("%d",iRet);
    
    return 0;
}