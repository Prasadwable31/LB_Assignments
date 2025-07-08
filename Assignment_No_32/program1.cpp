#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool ChkBit(UINT iNo, int iPos)
{
    UINT iMask = 1;
    UINT iResult = 0;

    iMask = iMask << (iPos - 1);

    iResult = iNo & iMask;

    if(iResult == iMask)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    UINT iValue = 0;
    int iPos = 0; 
    bool bRet = false;

    cout<<"Enter number : ";
    cin>>iValue;

    cout<<"Enter position : ";
    cin>>iPos;

    bRet = ChkBit(iValue, iPos);

    if(bRet == true)
    {
        cout<<"The Bit is ON\n";
    }
    else
    {
        cout<<"The bit is Off\n";
    }

    return 0;
}