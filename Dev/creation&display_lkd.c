// creation and Display of linked list...

#include<stdio.h>
#include<conio.h>
struct node {
    int data;
    struct node *ptr;
};


void main()
{

    int i,n;
    struct node *start=NULL, *temp=NULL, *last=NULL;
    printf("\n Enter number of Nodes:\n");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        temp=(struct node*)malloc(sizeof(struct node));
        printf("\nEnter Data(%d):\n",i);
        scanf("%d",&temp->data);
        temp->ptr=NULL;
        
        if(start==NULL)
        {
            start=last=temp;
        }
        else
        {
            last->ptr=temp;
            last=temp;
        }
    }
    temp=start;
    printf("\n Your Data is:");
    while(temp) 
    {
        printf("\n%d",temp->data);
        temp=temp->ptr;
    }
}

