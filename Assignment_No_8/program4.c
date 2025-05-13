#include<stdio.h>
# define INVALID -1

double FhtoCs(float fTemp)
{
    double fClecius = 0.0;

    if(fTemp < 0)
    {
        fTemp = -fTemp;
    }

    fClecius = (((fTemp - 32) * 5) / 9);

    return fClecius;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit : ");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("Temperature in Celcius is : %lf",dRet);

    return 0;
}


// Time Complexity : N.A