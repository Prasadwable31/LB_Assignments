#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

bool Check(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;

    if((Arr == NULL) || (iLength <= 0))
    {
        printf("Invalid input\n");
        return -1;
    }

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
    }

    return (iCnt != iLength);
}

int main()
{
    int iSize = 0, iCnt = 0, iValue = 0;
    int *p = NULL; 
    bool bRet = false;

    printf("Enter number of elements : ");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate the memory");
        return -1;
    }

    printf("\nEnter %d elements\n", iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d : ",iCnt + 1);
        scanf("%d",&p[iCnt]);
    }

    printf("\nEnter number to be search : ");
    scanf("%d",&iValue);

    bRet = Check(p, iSize, iValue);

    if(bRet == true)
    {
        printf("Number is present");
    }
    else
    {
        printf("Number is not present");
    }

    free(p);

    return 0;
}