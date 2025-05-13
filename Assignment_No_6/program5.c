#include<stdio.h>

void TableRev(int iNo)
{
    int iCnt = 0;
    int iAns = 1;

    // updator
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 10; iCnt >= 1; iCnt--)
    {
        iAns = iNo * iCnt;
        printf("%d  ",iAns);
    }
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    TableRev(iValue);

    return 0;
}


// Time Complexity : O(n)