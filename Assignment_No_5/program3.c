#include<stdio.h>

int Display(int iNo)
{
    int iCnt = 0;
    int iStart = 0;

    if(iNo < 0)         // Updator
    {
        iNo = -iNo;
    }

    iStart = -iNo;

    for(iCnt = iStart; iCnt <= iNo; iCnt++)
    {
        printf("%d  ",iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}


// Time Complexity : O(n)