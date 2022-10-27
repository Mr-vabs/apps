#include<stdio.h>
#define MAX 10
int main()
{
    int arr[MAX];
    int i,n,index;
    printf("enter number of elements\n");
    scanf("%d",&n);

    for(i = 0; i < n; i++)
    {
        printf("enter element of array\n");
        scanf("%d",&arr[i]);
    }

    printf("array before insertion\n");

    for(i = 0; i < n; i++)
    {
        printf("arr[%d] = %d\n",i,arr[i]);
    }

    if(n == MAX)
    {
        printf("array is full\n");
    }

    else
    {
        printf("enter index at where to put new element\n");
        scanf("%d",&index);
        printf("inserting an element in array\n");
        for(i = n; i >= index; i--)
        {
        	printf("%d %d\n",i+1,i);
            arr[i+1] = arr[i];
        }
        printf("enter the new element\n");
        scanf("%d",&arr[index]);
        n++;
    }
    for(i = 0; i < n; i++)
    {
        printf("arr[%d] = %d\n",i,arr[i]);
    }
    return 0;
}
