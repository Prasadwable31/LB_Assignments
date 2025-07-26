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

void DisplayProduct(PNODE first)
{
    int iMul = 1;
    int iDigit = 0;
    int iNo = 0;

    while(first != NULL)
    {
        iNo = first->Data;
        iMul = 1;

        while(iNo != 0)
        {
            iDigit = iNo % 10;

            if(iDigit != 0)
            {
                iMul = iMul * iDigit;
            }

            iNo = iNo / 10;
        }

        printf("%d\t",iMul);

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
    InsertFirst(&head, 53);
    InsertFirst(&head, 23);
    InsertFirst(&head, 11);

    Display(head);

    DisplayProduct(head);

    return 0;
}