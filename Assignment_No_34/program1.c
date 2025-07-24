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

int SearchFirstOcc(PNODE first, int No)
{
    int iCnt = 0;

    iCnt = 1;
    while(first != NULL)
    {
        if(first->Data == No)
        {
            break;
        }

        first = first->next;
        iCnt++;
    }

    if(first == NULL)
    {
        return -1;
    }
    else
    {
        return iCnt;
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
    int iValue = 0, iRet = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    InsertFirst(&head, 70);
    InsertFirst(&head, 30);
    InsertFirst(&head, 50);
    InsertFirst(&head, 40);
    InsertFirst(&head, 30);
    InsertFirst(&head, 20);
    InsertFirst(&head, 10);

    Display(head);

    iRet = SearchFirstOcc(head, iValue);

    printf("First Occurance of element is : %d", iRet);

    return 0;
}