#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool ChkBit(UINT iNo)
{
    UINT iMask = 0x00004000;
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
        cout<<"15th bit is On\n";
    }
    else
    {
        cout<<"15th bit is Off\n";
    }

    return 0;
}