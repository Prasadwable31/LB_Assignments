#include<stdio.h>

int Factorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    // updator
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }
    
    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial is : %d",iRet);

    return 0;
}


// Time Complexity : O(n)