#include<iostream>
using namespace std;

int Strlen(char *str)
{
    static int i = 0;

    if(str[i] != '\0')
    {
        i++;

        Strlen(str);
    }

    return i;
}

int main()
{
    int iRet = 0;
    char arr[20];

    printf("Enter string : ");
    scanf("%[^'\n']s",arr);

    iRet = Strlen(arr);

    printf("Length of String : %d",iRet);

    return 0;
}