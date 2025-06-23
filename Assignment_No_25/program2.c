#include<stdio.h>

void struprx(char *str)
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

        str++;
    }

}

int main()
{
    char arr[20];

    printf("Enter string : ");
    scanf("%[^'\n']s",arr);
    
    struprx(arr);

    printf("Modified string is : %s",arr);
    
    return 0;
}