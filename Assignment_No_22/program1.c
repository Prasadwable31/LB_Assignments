#include<stdio.h>
#include<stdbool.h>

bool ChkAlpha(char ch)
{
    if(ch == '\0')
    {
        return -1;
    }
    
    if(((ch >= 'a') && (ch <= 'z')) || ((ch >= 'A') && (ch <= 'Z')))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the character : ");
    scanf(" %c",&cValue);

    bRet = ChkAlpha(cValue);

    if(bRet == true)
    {
        printf("It is character");
    }
    else
    {
        printf("It is not a character");
    }

    return 0;
}