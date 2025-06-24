#include<stdio.h>

void StrCpyCap(char *src, char *dest)
{
    // Fileter
    if(src == NULL)
    {
        return;
    }

    while(*src != '\0')
    {
        if((*src >= 'A') && (*src <= 'Z'))
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

    StrCpyCap(arr,brr);

    printf("%s",brr); // MMOS

    return 0;
}