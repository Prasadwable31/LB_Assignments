#include<stdio.h>
#include<stdlib.h>

struct node
{
    int Data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE first, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->Data = no;
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

void Reverse(PNODE first)
{
    int iNo = 0;
    int iDigit = 0;
    int Rev = 0;

    while(first != NULL)
    {
        iNo = first->Data;
        Rev = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            Rev = (Rev * 10) + iDigit;
            iNo = iNo / 10;
        }

        printf("| %d | -> ",Rev);

        first = first->next;
    }
}

void Display(PNODE first)
{
    while(first != NULL)
    {
        printf("| %d | -> ",first->Data);
        first = first->next;
    }

    printf("NULL\n");
}

int main()
{
    PNODE head = NULL;

    InsertFirst(&head, 101);
    InsertFirst(&head, 51);
    InsertFirst(&head, 21);
    InsertFirst(&head, 11);

    Display(head);

    Reverse(head);

    return 0;
}