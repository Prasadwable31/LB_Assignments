#include<iostream>
using namespace std;

void Display()
{
    static int iCnt = 0;

    if(iCnt < 5)
    {
        printf("* ");
        iCnt++;

        Display();
    }
}

int main()
{
    Display();

    return 0;
}