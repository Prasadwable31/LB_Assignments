#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = -1;
    char Filename[20] = {'\0'};

    printf("Enter the name of file : ");
    scanf("%[^'\n']s",Filename);

    fd = creat(Filename, 0777);             // permission
    
    if(fd == -1)
    {
        printf("Unable to create file");
    }
    else
    {
        printf("file created successfully with fd %d",fd);
    }


    return 0;
}