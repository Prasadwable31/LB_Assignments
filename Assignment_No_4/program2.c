#include<stdio.h>

void FactRev(int iNo)
{
    int iCnt = 0;

    // Updator
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = (iNo/2); iCnt >= 1 ; iCnt--)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d\t",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    FactRev(iValue);

    return 0;
}


// Time Complexity : O(n/2)