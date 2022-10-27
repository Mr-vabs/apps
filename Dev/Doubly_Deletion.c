// Doubly Linked List (DLL) All Deletion Program
//©(@»ML«)
#include<stdio.h>
struct node {
    int data;
    struct node *next;
    struct node *prev;
};
void main()
{
    int i, n;
    struct node *head=NULL, *temp=NULL, *newnode=NULL, *temp1=NULL;
    printf("\n Enter Number of Nodes :");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("\n Enter the data[%d]:",i);
        scanf("%d",&newnode->data);
        newnode->prev=NULL;
        newnode->next=NULL;

        if(head==NULL)
        {
            head=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            newnode->prev=temp;
            temp=newnode;

        }
    }
    /* temp=head;
       printf("\n You data is :");
       while(temp)
       {
           printf("\n%d",temp->data);
           temp=temp->next;
       }*/

    // Deletion at BEGINNING
    int del;
    printf("\nHit[0]>>Beginning Deletion\nHit[1]>>End Deletion\nHit[2]>>Positon Deletion");

    scanf("%d",&del);
    if(del==0)
    {
        if(head==NULL)
            printf("Empty");
        else
        {
            printf("\n Performing Deletion at beginning\n");
            temp=head;
            head=head->next;
            head->prev=NULL;
            free(temp);
        }
    }
    //Deletion at End
    else if(del==1)
    {
        if(head==NULL)
            printf("Empty");
        else
        {

            printf("\nPerforming Deletion at End\n");
            temp=temp->prev;
            temp->next=NULL;
        }

    }
    else if(del==2 || del==3 || del==4)
    {
        if(head==NULL)
            printf("Empty");
        else {
            printf("\nPerforming Deletion at Specified Positon :\n");
            int pos,jump;
            printf("\nEnter which node uh wants to delete :");
            scanf("%d",&pos);
            //   jump=pos-2;
            temp1=head;
            for(i=1; i<pos; i++)
            {
                temp1=temp1->next;
            }
            temp1->prev->next=temp1->next;
            temp1->next->prev=temp1->prev;
            free(temp1);
        }
    }
    temp=head;
    printf("\n You data is :");
    while(temp)
    {
        printf("\n%d",temp->data);
        temp=temp->next;
    }
}
