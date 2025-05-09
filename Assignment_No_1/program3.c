#include<stdio.h>

void Display()
{
    int iCnt = 0;
    iCnt = 5;

    while(iCnt >= 1)
    {
        printf("%d\n",iCnt);
        iCnt--;
    }
}

int main()
{
    Display();

    return 0;
}