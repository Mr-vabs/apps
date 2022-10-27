#include<stdio.h>
struct node {
    int data;
    struct node *next;
    struct node *prev;
};
int main()
{
    int i, n;
    struct node *head=NULL, *temp=NULL, *newnode=NULL;
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
    temp=head;
    printf("\n You data is :");
    while(temp)
    {
        printf("\n%d",temp->data);
        temp=temp->next;
    }
	printf("\n%d",temp->data);
    // Insertion at beginning
    int del;
    printf("\n HIT ZERO[0] TO INSERT AT BEGINNING\n");
     printf("\n HIT ONE[1] TO INSERT AT END\n");
       scanf("%d",&del);
    if(del==0)
    {
      printf("\n Insertion at begining");
        newnode=(struct node*) malloc(sizeof(struct node));
        printf("\nEnter new nodes data");
        scanf("%d",&newnode->data);
        newnode->prev=NULL;
        newnode->next=NULL;
        if(head==NULL)
            printf("\n Underflow");
        else
        {
            newnode->next=head;
            head=newnode;
        }
    }
    else if(del==1)
    {
        printf("\nInsertion at End Performing\n");
        newnode=(struct node*) malloc(sizeof(struct node));
        printf("\nEnter new nodes data");
        scanf("%d",&newnode->data);
        newnode->prev=NULL;
        newnode->next=NULL;
        if(head==NULL)
            printf("\n Underflow");
        else
        {
           temp->next=newnode;
           newnode->prev=temp;
           temp=newnode;
        }
    }
    printf("\n%d",temp->data);
    temp=head;
    printf("\n%d",temp->data);
    printf("\n You inserted data is :\n");
    while(temp)
    {
        printf("\n%d",temp->data);
        temp=temp->next;
    }
}
