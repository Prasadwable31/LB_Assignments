#include<iostream>
using namespace std;

void Display(int iNo)
{
    static int i = 1;

    if (i <= iNo)
    {
        printf("* ");

        Display(--iNo);
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
