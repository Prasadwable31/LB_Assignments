#include<stdio.h>
#include<stdlib.h>
#include<io.h>
#include<unistd.h>
#include<fcntl.h>

#define SIZE 10

int CountSmall(char FName[])
{
    int fd = -1, iRet = 0, iCnt = 0, iCount = 0;
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

            for(iCnt = 0; iCnt < iRet; iCnt++)
            {
                if(Buffer[iCnt] >= 'a' && Buffer[iCnt] <= 'z')
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
    
    printf("Enter file name : ");
    scanf("%s",FileName);
    
    iRet = CountSmall(FileName);
    
    printf("Number of Small characters are : %d",iRet);
    
    return 0;
}