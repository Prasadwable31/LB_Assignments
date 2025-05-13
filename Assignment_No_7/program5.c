#include<stdio.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0, iAns = 0;
    int iFact1 = 1;
    int iFact2 = 1;

    // updator
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            iFact1 = iFact1 * iCnt;
        }
        else
        {
            iFact2 = iFact2 * iCnt;
        }
    }
    
    iAns = iFact1 - iFact2;
    return iAns;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial Difference is : %d",iRet);

    return 0;
}


// Time Complexity : O(n)