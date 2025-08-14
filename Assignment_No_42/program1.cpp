#include<iostream>
using namespace std;

void Display(int iNo)
{
    if(1 <= iNo)
    {
        printf("%d * ",iNo);

        Display(--iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}