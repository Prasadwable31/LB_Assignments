#include<stdio.h>
#include<stdlib.h>
#include<io.h>
#include<unistd.h>
#include<fcntl.h>

#define SIZE 10

int CountChar(char FName[], char ch)
{
    int fd = -1, iRet = 0, iCnt = 0, iCount = 0;
    char Buffer[SIZE];
    int iDisplacenment = 0;

    if(ch == '\0')
    {
        return -1;
    }

    // case insensetive
    if((ch >= 'A') && (ch <= 'Z'))
    {
        iDisplacenment = 32;
    }
    else if((ch >= 'a') && (ch <= 'z'))
    {
        iDisplacenment = -32;
    }

    fd = open(FName, O_RDONLY);
    
    if(fd == -1)
    {
        printf("unable to open file\n");
    }
    else
    {
        printf("file open successfully with fd %d\n",fd);

        while((iRet = read(fd, Buffer, SIZE)) != 0)
        {
            for(iCnt = 0; iCnt < iRet; iCnt++)
            {
                if((Buffer[iCnt] == ch) || (Buffer[iCnt] == ch + iDisplacenment))
                {
                    iCount++;
                }
            }
        }

        close(fd);
    }

    return iCount;
}

int main()
{
    char FileName[30];
    int iRet = 0;
    char cValue;
    
    printf("Enter file name : ");
    scanf("%s",FileName);

    printf("Enter the character : ");
    scanf(" %c",&cValue);
    
    iRet = CountChar(FileName, cValue);
    
    printf("Frequency is : %d",iRet);
    
    return 0;
}