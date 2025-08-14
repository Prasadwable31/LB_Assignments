#include<iostream>
using namespace std;

int Multi(int iNo)
{
    static int iMult = 1;
    int iDigit = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        
        iMult = iMult * iDigit;

        iNo = iNo / 10;

        Multi(iNo);
    }

    return iMult;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    iRet = Multi(iValue);    

    printf("Multiplictaion of Digits : %d",iRet);

    return 0;
}