#include<iostream>
using namespace std;

void Display()
{
    static int iCnt = 1;

    if(iCnt <= 5)
    {
        printf("%d ",iCnt);
        iCnt++;

        Display();
    }
}

int main()
{
    Display();

    return 0;
}