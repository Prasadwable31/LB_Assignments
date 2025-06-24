#include<stdio.h>

void StrRevX(char *str)
{
    char *start = NULL;
    char *end = NULL;
    int Temp;

    if(str == NULL)
    {
        return;
    }

    start = str;
    end = str;

    while(*str != '\0')
    {
        end++;
        str++;
    }

    end--;

    while(start <= end)
    {
        Temp = *start;
        *start = *end;
        *end = Temp;
        start++;
        end--;
    }
}

int main()
{
    char arr[20];
    
    printf("Enter string : ");
    scanf("%[^'\n']s",arr);

    StrRevX(arr);
    
    printf("Modified string is : %s",arr);
    
    return 0;
}