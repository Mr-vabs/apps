#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};

void Display(struct Node *head)
{
    struct Node *p;
    p = head;
    while (p != NULL)
    {
        printf("%d\t", p->data);
        p = p->next;
    }
    printf("\n");
}
struct Node *DoublyInsertionAtBeg(struct Node *head, int data)
{
    struct Node *ptr;
    ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->prev = NULL;
    ptr->next = head;
    head->prev = ptr;
    head = ptr;
    return head;
}
struct Node *DoublyInsertionAtEnd(struct Node *head, int data)
{
    struct Node *ptr, *p;
    ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    ptr->next = NULL;
    ptr->prev = p;
    p->next = ptr;
    return head;
}
struct Node *DoublyInsertionAtIndex(struct Node *head, int data)
{
    struct Node *ptr, *p;
    ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;

    int position;
    printf("Enter the Postion on Insert::\n");
    scanf("%d", &position);
    if (position == 1)
    {
        ptr->next = head;
        head->prev = ptr;
        head = ptr;
        return head;
    }
    p = head;

    for (int i = 1; i < position - 1 && p != NULL; i++)
    {
        p = p->next;
    }

    if (p == NULL)
    {
        printf("There are less than %d elements\n", position);
    }

    else
    {
        ptr->prev = p;
        ptr->next = p->next;
        if (p->next != NULL)
        {
            p->next->prev = ptr;
        }
        p->next = ptr;
        return head;
    }
}
void main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 11;
    head->prev = NULL;
    head->next = second;

    second->data = 14;
    second->prev = head;
    second->next = third;

    third->data = 156;
    third->prev = second;
    third->next = fourth;

    fourth->data = 36;
    fourth->prev = third;
    fourth->next = NULL;

    printf("List print befor Insertion::\n");
    Display(head);
    int data;
    printf("Enter Element to Insert ::\n");
    scanf("%d", &data);
    // head = DoublyInsertionAtBeg(head, data);
    //head = DoublyInsertionAtEnd(head, data);
    head = DoublyInsertionAtIndex(head, data);
    Display(head);
}
