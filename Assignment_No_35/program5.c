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

void SumDigit(PNODE first)
{
    int iSum = 0, iDigit = 0, iNo = 0;

    while(first != NULL)
    {
        iSum = 0;
        
        iNo = first->Data;
        
        while(iNo != 0)
        {
            iDigit = iNo % 10;

            iSum = iSum + iDigit;

            iNo = iNo / 10;
        }

        printf("%d\t",iSum);

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
    int iRet = 0;

    InsertFirst(&head, 7);
    InsertFirst(&head, 30);
    InsertFirst(&head, 5);
    InsertFirst(&head, 41);
    InsertFirst(&head, 3);
    InsertFirst(&head, 28);
    InsertFirst(&head, 2);

    Display(head);

    SumDigit(head);

    return 0;
}