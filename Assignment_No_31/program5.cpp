#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
    UINT iMask = 0x0000000f;
    UINT iResult = 0;

    iResult = iNo | iMask;

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