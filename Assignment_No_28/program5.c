#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

#define SIZE 50

int main()
{
    int fd = -1, iRet = 0;
    char Filename[20] = {'\0'};
    char Buffer[SIZE] = {'\0'};

    printf("Enter the name of file : ");
    scanf("%s",Filename);

    printf("Enter the string : ");
    scanf(" %[^'\n']s",Buffer);                 // flush

    fd = open(Filename, O_WRONLY | O_APPEND);             
    
    if(fd == -1)
    {
        printf("Unable to open file");
    }
    else
    {
        printf("File is successfully open with fd : %d\n",fd);

        iRet = write(fd, Buffer, strlen(Buffer));

        printf("%d Bytes get added successfully",iRet);

        close(fd);
    }

    return 0;
}