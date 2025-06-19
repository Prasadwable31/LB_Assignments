#include<stdio.h>

int CountSmall(char *str)
{
    int iCnt = 0;

    if(str == NULL)
    {
        return -1;
    }
    
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCnt++;
        }
        str++;
    }
    
    return iCnt;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^'\n']s",arr);
    
    iRet = CountSmall(arr);
    
    printf("Number of small Character is : %d",iRet);
    
    return 0;
}