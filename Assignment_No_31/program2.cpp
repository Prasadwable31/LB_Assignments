#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
    UINT iMask1 = 1;
    UINT iMask2 = 1;
    UINT iResult = 0;

    iMask1 = iMask1 << 6;
    iMask2 = iMask2 << 9;

    iResult = ~iMask2 & (iNo & ~iMask1);

    return iResult;
}

int main()
{
    UINT iValue = 0; 
    UINT iRet = 0;

    cout<<"Enter number : ";
    cin>>iValue;

    iRet = OffBit(iValue);

    cout<<"The modified no : "<<iRet<<"\n";

    return 0;
}