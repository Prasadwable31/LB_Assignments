#include<stdio.h>
# define METERCONV 1000

int KMtoMeter(int iNo)
{
    int iMeter = 0;

    if(iNo > 0)
    {
        iMeter = iNo * METERCONV;
    }
   
    return iMeter;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter distance : ");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in meter is : %d",iRet);

    return 0;
}


// Time Complexity : N.A