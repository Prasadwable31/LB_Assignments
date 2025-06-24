#include<stdio.h>

void StrCatX(char *str, char * dest)
{
    // Filter
    if(str == NULL)
    {
        return;
    }

    while(*str != '\0') // Traverse first string till end
    {
        str++;
    }
    
    while(*dest != '\0') // Copy contents of destination in source
    {
        *str = *dest;
        str++;
        dest++;
    }
    
    *str = '\0';
}

int main()
{
    char arr[50] = "Marvellous Infosystems";
    char brr[30] = "Logic Building";

    StrCatX(arr,brr);

    printf("%s",arr); 

    return 0;
}