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

int SecMaximum(PNODE first)
{
    PNODE temp = NULL;

    temp = first;
    
    int iMax = 0;
    int SeciMax = 0;

    iMax = first->Data;
    SeciMax = first->Data;

    while(first != NULL)
    {
        if(iMax < first->Data)
        {
            iMax = first->Data;
        }

        if((SeciMax < first->Data) && (first->Data < iMax))
        {
            SeciMax = first->Data;
        }

        first = first->next;
    }

    return SeciMax;
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

    iRet = SecMaximum(head);

    printf("Second Maximum is : %d",iRet);

    return 0;
}