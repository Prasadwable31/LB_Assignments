#include<iostream>
using namespace std;

int Fact(int iNo)
{
    static int iFact = 1;

    if (iNo != 0)
    {   
        iFact = iFact * iNo;

        Fact(--iNo);
    }
    
    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    iRet = Fact(iValue);    

    printf("Factorial of Number : %d",iRet);

    return 0;
}