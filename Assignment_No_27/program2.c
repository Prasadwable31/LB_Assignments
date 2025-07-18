#include<stdio.h>

void StrNCpyX(char *src, char *dest, int iCnt)
{
    // Fileter
    if(src == NULL)
    {
        return;
    }

    while((*src != '\0') && (iCnt != 0))
    {
        *dest = *src;
        src++;
        dest++;
        iCnt--;
    }
    
    *dest = '\0';
}

int main()
{
    char arr[30] = "Marvellous Multi OS";
    char brr[30] = {'\0'}; // Empty string

    StrNCpyX(arr,brr,10);

    printf("%s",brr); // Marvellous

    return 0;
}