#include<stdio.h>

int OddDisplay(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)         // Updator
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) == 1)
        {
            printf("%d  ",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    return 0;
}


// Time Complexity : O(n)