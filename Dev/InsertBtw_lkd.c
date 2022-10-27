// Insertion At The between of list

#include<stdio.h>
#include<conio.h>
struct node {
    int data;
    struct node *ptr;
};
void main()
{

    int i,n;
    struct node *start=NULL, *temp=NULL, *last=NULL,*temp1;
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
    while(temp) // displaying lists
    {
        printf("\n%d",temp->data);
        temp=temp->ptr;
    }
    printf("\nInsertion at between \n");

    int pos,jump;
    printf("\nEnter position to insert\n");
    scanf("%d",&pos);
    jump=pos-2;

    temp=(struct node*)malloc(sizeof(struct node));
    printf("\n Enter additional data\n");
    scanf("%d",&temp->data);
    temp->ptr=NULL;

    if(start==NULL)
    {
        printf("\n Empty\n");
    }
    else
    {
        temp1=start;
        for(i=0; i<jump; i++)
        {
            temp1=temp1->ptr;

        }
        temp->ptr=temp1->ptr;
        temp1->ptr=temp;

    }

    printf("\n Your inserted Data is:");
    temp=start;
    while(temp) // displaying inserted lists
    {
        printf("\n%d",temp->data);
        temp=temp->ptr;

    }

}
