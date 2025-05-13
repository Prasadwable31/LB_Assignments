#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iFact = 0, iNonFact = 0;
    int iAns = 0;

    // Updator
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iFact = iFact + iCnt;
        }
        else
        {
            iNonFact = iNonFact + iCnt;
        }
    }

    iAns = iFact - iNonFact;
    return iAns;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("Difference of Factor and Non-Factor : %d",iRet);

    return 0;
}


// Time Complexity : O(n)