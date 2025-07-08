#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT offBit(UINT iNo, int iPos)
{
    UINT iMask = 1;
    UINT iResult = 0;

    iMask = iMask << (iPos - 1);

    iResult = iNo & ~iMask;

    return iResult;
}

int main()
{
    UINT iValue = 0, iRet = 0;
    int iPos = 0;

    cout<<"Enter number : ";
    cin>>iValue;

    cout<<"Enter position : ";
    cin>>iPos;

    iRet = offBit(iValue, iPos);

    cout<<"Modified Number is : "<<iRet<<"\n";

    return 0;
}