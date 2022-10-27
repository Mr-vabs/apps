// Write a program to find largest number in array of 10 elements.
#include <dos.h>
#include <stdio.h>
#include <conio.h>

int main()
{
    int arr[10];
    int temp;
    printf("Enter the Element::\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Element [%d] = ", i);
        scanf("%d", &arr[i]);
    }
    // clrscr();
    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Ascending Order is .....\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", arr[i]);
    }
    getch();
}
