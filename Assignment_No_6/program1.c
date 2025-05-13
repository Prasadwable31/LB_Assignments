#include<stdio.h>

void Number(int iNo)
{
    if(iNo <= 50)
    {
        printf("%d is Small Number",iNo);
    }
    else if(iNo > 50 && iNo <= 100)
    {
        printf("%d is Medium Number",iNo);
    }
    else if(iNo > 100)
    {
        printf("%d is Large Number",iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;
}


// Time Complexity : its only for LOOPs