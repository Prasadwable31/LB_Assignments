#include<stdio.h>

void DisplayConvert(char cValue)
{
    if(cValue >= 'a' && cValue <= 'z')
    {
        printf("%c",toupper(cValue));
    }
    else if(cValue >= 'A' && cValue <= 'Z')
    {
        printf("%c",tolower(cValue));
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the Character : ");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return 0;
}