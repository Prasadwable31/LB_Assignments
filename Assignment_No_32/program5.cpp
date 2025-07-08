#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iMask = 0xf000000f;
    UINT iResult = 0;

    iResult = iNo ^ iMask;

    return iResult;
}

int main()
{
    UINT iValue = 0, iRet = 0;
    int iPos = 0;

    cout<<"Enter number : ";
    cin>>iValue;

    iRet = ToggleBit(iValue);

    cout<<"Modified Number is : "<<iRet<<"\n";

    return 0;
}