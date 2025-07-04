#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength)
{
    int iCnt = 0, SumEven = 0, SumOdd = 0;

    if((Arr == NULL) || (iLength <= 0))
    {
        printf("Invalid input\n");
        return -1;
    }

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            SumEven = SumEven + Arr[iCnt];
        }
        else
        {
            SumOdd = SumOdd + Arr[iCnt];
        }
    }

    return (SumEven - SumOdd);
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL; 

    printf("Enter number of elements : ");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize * sizeof(int));

    if(NULL == p)
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

    iRet = Difference(p, iSize);

    printf("Result is %d",iRet);

    free(p);

    return 0;
}