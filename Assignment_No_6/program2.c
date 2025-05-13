#include<stdio.h>

void Number(int iNo)
{
    // updator
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    switch(iNo)
    {
        case 1:
            printf("One");
            break;
        case 2:
            printf("Two");
            break;
        case 3:
            printf("Three");
            break;
        case 4:
            printf("Four");
            break;
        case 5:
            printf("Five");
            break;
        case 6:
            printf("Six");
            break;
        case 7:
            printf("Seven");
            break;
        case 8:
            printf("Eight");
            break;
        case 9:
            printf("Nine");
            break;
        default:
            printf("Invalid Number");
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


// Time Complexity :  its only for LOOPs