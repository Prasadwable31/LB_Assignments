#include<iostream>
using namespace std;

void Display()
{
    static char ch = 'a';
    static int iCnt = 0;

    if(iCnt <= 5)
    {
        printf("%c ",ch);
        ch++;
        iCnt++;

        Display();
    }
}

int main()
{
    Display();

    return 0;
}