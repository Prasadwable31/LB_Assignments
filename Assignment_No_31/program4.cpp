#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
    UINT iMask1 = 0x00000040;
    UINT iMask2 = 0x00000200;
    UINT iResult = 0;

    iResult = iMask2 ^ (iNo ^ iMask1);

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