#include<stdio.h>
#include<stdlib.h>
#include<io.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

#define SIZE 1024

void DisplayN(char FName[], int iSize)
{
    int fd = -1, iRet = 0, iCnt = 0;
    char Buffer[SIZE];

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
            // printf("%d",iRet);               // size of total file

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                printf("%c",Buffer[iCnt]);
            }
        }

        close(fd);
    }
}

int main()
{
    char FileName[30];
    int iValue = 0;
    
    printf("Enter file name : ");
    scanf("%s",FileName);

    printf("Enter the number of character : ");
    scanf("%d",&iValue);
    
    DisplayN(FileName, iValue);
    
    return 0;
}