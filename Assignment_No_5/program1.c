#include<stdio.h>

int Pattern(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)         // Updator
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("$   *   ");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}


// Time Complexity : O(n)