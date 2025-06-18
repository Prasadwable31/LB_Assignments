#include<stdio.h>

void DisplayASCII()
{
    int iCnt = 0;

    printf("  Symbol   Decimal   Hexadecimal     Octal   \n");

    for(iCnt = 0; iCnt <= 255; iCnt++)
    {   
        printf("    %c        %d         %X        %o    \n", iCnt, iCnt, iCnt, iCnt);    
    }
}

int main()
{
    DisplayASCII();

    return 0;
}