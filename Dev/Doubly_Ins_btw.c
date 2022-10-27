#include<stdio.h>
struct node {
    int data;
    struct node *next;
    struct node *prev;
};
void main()
{
    int i, n;
    struct node *head=NULL, *temp=NULL, *newnode=NULL , *temp1=NULL;
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
    }
   */	
	printf("\n Insertion At Specified positon\n");
	int pos,jump;
	printf("\nEnter the position where uh want to Insert the node\n");
	scanf("%d",&pos);Aa
	jump=pos-2;
	temp1=head;
	for(i=0;i<jump;i++)
	{
		temp1=temp1->next;
	}
	newnode=(struct node*)malloc(sizeof(struct node));
        printf("\n Enter the data[%d]:",i);
        scanf("%d",&newnode->data);
          newnode->prev=NULL;
        newnode->next=NULL;

        if(head==NULL)
        {
           printf("Empty");  
        }
        else
          {
            newnode->prev=temp1;
            temp->prev=newnode;
            newnode->next=temp1->next;
            temp1->next=newnode;

        }
    temp=head;
    printf("\n You data is :");
    while(temp)
    {
        printf("\n%d",temp->data);
        temp=temp->next;
    }
}
