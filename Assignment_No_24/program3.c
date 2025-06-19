#include<stdio.h>

int Difference(char *str)
{
    int iSmall = 0, iCap = 0;

    if(str == NULL)
    {
        return -1;
    }
    
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iSmall++;
        }
        else if((*str >= 'a') && (*str <= 'z'))
        {
            iCap++;
        }
        str++;
    }
    
    return (iSmall - iCap);
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^'\n']s",arr);
    
    iRet = Difference(arr);
    
    printf("Number of Difference in Character is : %d",iRet);
    
    return 0;
}