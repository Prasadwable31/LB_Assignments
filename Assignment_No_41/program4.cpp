#include<iostream>
using namespace std;

void Display(int iNo)
{
    static char ch = 'A';
    static char i = 1;

    if (i <= iNo)
    {
        printf("%c ",ch);
        ch++;
        i++;

        Display(iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}