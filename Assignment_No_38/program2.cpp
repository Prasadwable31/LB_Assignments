#include<iostream>
using namespace std;

template<class T>
T Max(T iNo1, T iNo2, T iNo3)
{
    if((iNo1 > iNo2) && (iNo1 > iNo3))
    {
        return iNo1;
    }
    else if ((iNo2 > iNo1) && (iNo2 > iNo3))
    {
        return iNo2;
    }
    else
    {
        iNo3;
    }
}

int main()
{
    int iRet = Max(10, 20, 30);

    printf("%d\n",iRet);
    
    float fRet = Max(10.5f,20.5f, 1.5f);
    
    printf("%f\n",fRet);
    
    return 0;
}