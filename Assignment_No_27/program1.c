#include<stdio.h>

void StrCpyX(char *src, char *dest)
{
    // Fileter
    if(src == NULL)
    {
        return;
    }
    
    while(*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }

    *dest = '\0';
}

int main()
{
    char arr[30] = "Marvellous Multi OS";
    char brr[30] = {'\0'}; // Empty string

    StrCpyX(arr,brr);

    printf("%s",brr); // Marvellous Multi OS

    return 0;
}