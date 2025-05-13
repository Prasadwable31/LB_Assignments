#include<stdio.h>
# define INVALID_AMOUNT -1

int DollarToINR(int iNo)
{  
    int iAmount = 0;

    if(iNo < 0)
    {
        return INVALID_AMOUNT;
    }

    iAmount = iNo * 70;

    return iAmount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number of USD : ");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    if(iRet == INVALID_AMOUNT)
    {
        printf("Enter Valid Amount");
    }
    else
    {
        printf("Value in INR is : %d",iRet);
    }

    return 0;
}


// Time Complexity : its only for LOOPs