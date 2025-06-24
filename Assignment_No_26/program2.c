#include<stdio.h>

int CountChar(char *str, char ch)
{
    int Count = 0, iDisplacenment = 0;

    if(str == NULL)
    {
        return -1;
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
            Count++;
        }
        
        str++;
    }

    return Count;
}

int main()
{
    char arr[20];
    char cValue = '\0';
    int iRet = 0;
    
    printf("Enter string : ");
    scanf("%[^'\n']s",arr);

    printf("Enter the character : ");
    scanf(" %c",&cValue);
    
    iRet = CountChar(arr, cValue);
    
    printf("Character frequency is : %d",iRet);
    
    return 0;
}