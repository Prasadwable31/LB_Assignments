#include<stdio.h>
# define INVALID -1

double RectArea(float fWidth, float fHeight)
{
    double fArea = 0.0;

    if(fWidth < 0 || fHeight < 0)
    {
        return INVALID;
    }

    fArea = fWidth * fHeight;
   
    return fArea;
}

int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f;
    double dRet = 0.0;

    printf("Enter width : ");
    scanf("%f",&fValue1);

    printf("Enter height : ");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1, fValue2);

    printf("Area of rectangle is : %lf",dRet);

    return 0;
}


// Time Complexity : N.A