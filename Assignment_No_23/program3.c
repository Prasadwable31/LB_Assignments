#include<stdio.h>

void  Display(char ch)
{
    if((ch >= 'a') && (ch <= 'z'))
    {
        while(ch >= 'a')
        {
            printf("%c  ",ch);
            ch--;
        }
    }
    else if((ch >= 'A') && (ch <= 'Z'))
    {
        while(ch <= 'Z')
        {
            printf("%c  ",ch);
            ch++;
        }
    }
    else
    {
        printf("%c",ch);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the character : ");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}