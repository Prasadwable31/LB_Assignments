#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool ChkBit(UINT iNo)
{
    UINT iMask = 0x000001c0;
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
        cout<<"7th & 8th & 9th bit is On\n";
    }
    else
    {
        cout<<"7th & 8th & 9th bit is Off\n";
    }

    return 0;
}