#include<stdio.h>
struct node {
    int data;
    struct node *next;
    struct node *prev;
};

void main()
{
    int i, n;
    struct node *head=NULL, *temp=NULL, *newnode=NULL , *ptr=NULL;
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
            ptr=temp=head=newnode;
        }
        else
        {
            temp->next=newnode;
            newnode->prev=temp;
            temp=newnode;

        }
    }
  while(ptr)
    {
    	printf("\n %d",ptr->data);
    	ptr=ptr->next;
	}

/*	temp=head;
	    while(temp)
    {
    	printf("\n %d",temp->data);
    	temp=temp->next;
	} 
*/
	 printf("\nInsertion at End Performing\n");
	 newnode=(struct node*)malloc(sizeof(struct node));
	 printf("/n Enter new node");
	 scanf("%d",&newnode->data);
	 newnode->next=NULL;
	 newnode->prev=NULL;
	 if(head==NULL)
	 {
	 	printf("empty");
	 }
	 else
	 {
		temp->next=newnode;
	 	newnode->prev=temp;
	 }
	 temp=head;
	 
	 while(temp)
    {
    	printf("\n %d",temp->data);
    	temp=temp->next;

}
}
