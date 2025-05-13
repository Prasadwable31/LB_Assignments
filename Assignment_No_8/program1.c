#include<stdio.h>
# define PI 3.14

double CircleArea(float fRadius)
{
    double fArea = 0.0;

    if(fRadius < 0)
    {
        fRadius = -fRadius;
    }

    fArea = PI * (fRadius * fRadius);

    return fArea;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter radius : ");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of Circle is : %lf",dRet);

    return 0;
}


// Time Complexity : N.A