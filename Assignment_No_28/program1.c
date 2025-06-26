#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = -1;
    char Filename[20] = {'\0'};

    printf("Enter the name of file : ");
    scanf("%[^'\n']s",Filename);

    fd = open(Filename, O_RDONLY);
    
    if(fd == -1)
    {
        printf("unable to open file");
    }
    else
    {
        printf("file open successfully with fd %d",fd);
    }


    return 0;
}