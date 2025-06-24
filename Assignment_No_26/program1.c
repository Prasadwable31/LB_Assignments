#include<stdio.h>
#include<stdbool.h>

bool ChkChar(char *str, char ch)
{
    bool bFalg = false;
    int iDisplacenment = 0;

    if(str == NULL)
    {
        return false;
    }

    if((ch >= 'A') && (ch <= 'Z'))
    {
        iDisplacenment = 32;
    }
    else if((ch >= 'a') && (ch <= 'z'))
    {
        iDisplacenment = -32;
    }

    while(*str != '\0')
    {
        if((*str == ch) || (*str == ch + iDisplacenment))
        {
            bFalg = true;
            break;
        }
        
        str++;
    }

    return bFalg;
}

int main()
{
    char arr[20];
    char cValue = '\0';
    bool bRet = false;

    printf("Enter string : ");
    scanf("%[^'\n']s",arr);

    printf("Enter the character : ");
    scanf(" %c",&cValue);
    
    bRet = ChkChar(arr, cValue);
    
    if(bRet == true)
    {
        printf("Character found");
    }
    else
    {
        printf("Character not found");
    }
    
    return 0;
}