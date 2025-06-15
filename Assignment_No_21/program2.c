#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[], int iLength)
{
    int iCnt = 0, iMin = 0;

    if((Arr == NULL) || (iLength <= 0))
    {
        printf("Invalid input\n");
        return -1;
    }

    iMin = Arr[0];
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }

    return iMin;
}

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0;
    int *p = NULL;

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

    iRet = Minimum(p, iSize);

    printf("Smallest Number is %d",iRet);

    free(p);

    return 0;
}