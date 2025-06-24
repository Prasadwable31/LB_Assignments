#include<stdio.h>

void StrCpySmall(char *src, char *dest)
{
    // Fileter
    if(src == NULL)
    {
        return;
    }

    while(*src != '\0')
    {
        if(((*src >= 'a') && (*src <= 'z')) || (*src == ' '))
        {
            *dest = *src;
            dest++;
        }
            src++;
    }
    
    *dest = '\0';
}

int main()
{
    char arr[30] = "Marvellous Multi OS";
    char brr[30] = {'\0'}; // Empty string

    StrCpySmall(arr,brr);

    printf("%s",brr); // arvellous ulti

    return 0;
}