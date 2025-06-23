#include<stdio.h>

void strtogglex(char *str)
{
    int iDisplacenment = 32;

    if(str == NULL)
    {
        return;
    }

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - iDisplacenment;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + iDisplacenment;
        }

        str++;
    }
}

int main()
{
    char arr[20];

    printf("Enter string : ");
    scanf("%[^'\n']s",arr);
    
    strtogglex(arr);

    printf("Modified string is : %s",arr);
    
    return 0;
}