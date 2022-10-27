#include<stdio.h>
const int CITY = 2;
const int WEEK = 7;
int main()
{
    int temprature[CITY][WEEK];
    for(int i = 0; i < CITY ; i++)
    {
        for(int j = 0; j < WEEK ; j++)
        {
            printf("city %d , day %d\n",i+1,j+1);
            scanf("%d",&temprature[i][j]);
        }
    }
    printf("\n\ndisplaying output\n\n");
    for(int i = 0; i < CITY ; i++)
    {
        for(int j = 0; j < WEEK ; j++)
        {
            printf("city %d , day %d\n",i+1,j+1);
            printf("temprature was %d\n",temprature[i][j]);
        }
    }
    return 0;
}
