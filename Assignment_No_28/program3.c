#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include <string.h>

#define SIZE 10

int main()
{
    int fd = -1, iRet = 0;
    char Filename[20] = {'\0'};
    char Buffer[SIZE];

    printf("Enter the name of file : ");
    scanf("%[^'\n']s",Filename);

    fd = open(Filename, O_RDONLY);             
    
    if(fd == -1)
    {
        printf("Unable to open file");
    }
    else
    {
        printf("File is successfully open with fd : %d\n",fd);

        while((iRet = read(fd, Buffer, SIZE)) != 0)
        {
            // printf("%s",Buffer);

            write(1, Buffer, iRet);
            memset(Buffer, '\0', SIZE);
        }

        close(fd);
    }


    return 0;
}