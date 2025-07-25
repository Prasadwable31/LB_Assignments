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

void DisplayPerfect(PNODE first)
{
    int iDigit = 0, iCnt = 0, iSum = 0;

    while(first != NULL)
    {
        iDigit = first->Data;

        for(iCnt = 1, iSum = 0; iCnt <= (iDigit/2); iCnt++)
        {
            if((iDigit % iCnt) == 0)
            {
                iSum = iSum + iCnt;
            }
        }

        if(iSum == iDigit)
        {
            printf("%d \t",iDigit);
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

    InsertFirst(&head, 70);
    InsertFirst(&head, 30);
    InsertFirst(&head, 6);
    InsertFirst(&head, 41);
    InsertFirst(&head, 17);
    InsertFirst(&head, 28);
    InsertFirst(&head, 11);

    Display(head);

    DisplayPerfect(head);

    return 0;
}