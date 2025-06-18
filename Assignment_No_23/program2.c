#include<stdio.h>

void  Display(char ch)
{
    int iDisplacenment = 32;

    if((ch >= 'a') && (ch <= 'z'))
    {
        ch = ch - iDisplacenment;
    }
    else if((ch >= 'A') && (ch <= 'Z'))
    {
        ch = ch + iDisplacenment;
    }

    printf("%c", ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter the character : ");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}