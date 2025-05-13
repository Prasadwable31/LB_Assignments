#include<stdio.h>
# define CONVERSION 0.0929

double SquareMeter(int iNo)
{
    double fMeter = 0.0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    fMeter = iNo * CONVERSION;

    return fMeter;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet : ");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("Area in Square meter : %lf",dRet);

    return 0;
}


// Time Complexity : N.A