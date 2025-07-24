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

int Addition(PNODE first)
{
    int iSum = 0;

    while(first != NULL)
    {
        iSum = iSum + first->Data;
        first = first->next;
    }

    return iSum;
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

    InsertFirst(&head, 40);
    InsertFirst(&head, 30);
    InsertFirst(&head, 20);
    InsertFirst(&head, 10);

    Display(head);

    iRet = Addition(head);

    printf("Addition of elements are : %d", iRet);

    return 0;
}