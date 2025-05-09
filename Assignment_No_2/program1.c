#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    // Updater for negative numbers
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iCnt < iNo)
    {
        printf("* ");
        iCnt++;
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