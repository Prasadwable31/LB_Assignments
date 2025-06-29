#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool ChkBit(UINT iNo)
{
    UINT iMask = 0x80000001;
    UINT iResult = 0;

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
    bool bRet = false;

    cout<<"Enter number : ";
    cin>>iValue;

    bRet = ChkBit(iValue);

    if(bRet == true)
    {
        cout<<"1th and 32th bit is On\n";
    }
    else
    {
        cout<<"1th & 32th bit is Off\n";
    }

    return 0;
}