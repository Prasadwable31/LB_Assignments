#include<stdio.h>

int MultipleDisplay(int iNo)
{
    int iCnt = 0;
    int iMult = 1;

    if(iNo < 0)         // Updator
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        iMult = iNo * iCnt;
        printf("%d  ",iMult);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}


// Time Complexity : O(n)