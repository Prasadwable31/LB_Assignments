#include<stdio.h>

# define ERR_INVALID -1

int Divide(int iNo1, int iNo2)
{
    int iAns = 0;

    if(iNo2 == 0)
    {
        return ERR_INVALID;
    }

    iAns = iNo1 / iNo2;

    return iAns;
}

int main()
{
    int iValue1 = 15, iValue2 = 5;
    int iRet = 0;

    iRet = Divide(iValue1, iValue2);

    printf("Division is %d",iRet);

    return 0;
}