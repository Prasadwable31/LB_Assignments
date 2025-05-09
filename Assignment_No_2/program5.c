#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkEven(int iNo)
{
    BOOL iAns = FALSE;
    
    if((iNo / 2) * 2 == iNo)
    {
        iAns = TRUE;
    }
    else
    {
        iAns = FALSE;
    }

    return iAns;
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number : ");
    scanf("%d",&iValue);

    bRet = ChkEven(iValue);

    if(bRet == TRUE)
    {
        printf("The Number is Even");
    }
    else
    {
        printf("The Number is Odd");
    }

    return 0;
}