#include<stdio.h>

int main()
{
    char binary[40];
    int i, size;
    printf("Enter number of digits\n");
    scanf("%d",&size);
    printf("Enter the binary number\n");
    scanf("%s",binary);
    printf("Binary number is ::: %s\n",binary);
    
    for(int i=0; i<size; i++)
    {
        if(binary[i] == '0')
        {
            binary[i]= '1';
        }
        else if(binary[i]=='1')
        {
            binary[i] = '0';
        }
    }
    printf("One’s Complement is ::: %s\n",binary);
    
    for(int i = size-1; i>=0; i--)
    {
        if(binary[i] == '0')
        {
            binary[i] = '1';
            break;
        }
        else if(binary[i] == '1')
        {
            binary[i] = '0';
        }
    }
    printf("Two’s complement is ::: %s",binary);
    return 0;
}