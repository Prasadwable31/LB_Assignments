#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int Data;
    struct node* next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE first, int No)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->Data = No;
    newn->next = NULL;

    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
        newn->next = *first;
        *first = newn;
    }
}

void DisplayPrime(PNODE first)
{
    int iDigit = 0, iCnt = 0;
    bool bFlag = true;

    while(first != NULL)
    {
        iDigit = first->Data;

        for(iCnt = 2, bFlag = true; iCnt < (iDigit/2); iCnt++)
        {
            if((iDigit % iCnt) == 0)
            {
                bFlag = false;
                break;
            }
        }

        if(bFlag == true)
        {
            printf("%d\t",iDigit);
        }

        first = first->next;
    }
}

void Display(PNODE first)
{
    while(first != NULL)
    {
        printf("| %d | -> ",first->Data);
        first = first -> next;
    }

    printf("NULL\n");
}

int main()
{
    PNODE head = NULL;

    InsertFirst(&head, 7);
    InsertFirst(&head, 30);
    InsertFirst(&head, 5);
    InsertFirst(&head, 41);
    InsertFirst(&head, 3);
    InsertFirst(&head, 28);
    InsertFirst(&head, 2);

    Display(head);

    DisplayPrime(head);

    return 0;
}