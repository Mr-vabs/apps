#include<stdio.h>
#define MAX 10
int main()
{
    int arr[MAX];
    int i,n;
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
    	n++;
        printf("inserting an element in array\n");
        for(i = n;i > 0;i--)
        {
        	arr[i] = arr[i-1];
        }
        printf("enter the new element\n");
        scanf("%d",&arr[0]);
    }
	for(i = 0;i < n;i++)
	{
		printf("arr[%d] = %d\n",i,arr[i]);
	}
    return 0;
}
