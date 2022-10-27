#include<stdio.h>
void p1()
{
    int n=5;
    int i,j;
    int x=n,y=n;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n*2; j++)
        {
            if(j==x||j==y)
            {
                printf("%d",i);
            }
            else
            {
                printf(" ");
            }
        }
        x--;
        y++;
        printf("\n");
    }
}
void p2()
{
    int n=5;
    int x=1,y=n*2-1;
    int i,j;
    for(i=n; i>=1; i--)
    {
        for(j=1; j<=n*2; j++)
        {
            if(j==x||j==y)
            {
                printf("%d",i);
            }
            else
            {
                printf(" ");
            }
        }
        x++;
        y--;
        printf("\n");
    }
}
void p3()
{
    int n=5;
    int i,j;
    int x=n,y=n;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n*2; j++)
        {
            if(j==x||j==y)
            {
                printf("%c",i+64);
            }
            else
            {
                printf(" ");
            }
        }
        x--;
        y++;
        printf("\n");
    }
}
void p4()
{
    int n=5;
    int x=1,y=n*2-1;
    int i,j;
    for(i=n; i>=1; i--)
    {
        for(j=1; j<=n*2; j++)
        {
            if(j==x||j==y)
            {
                printf("%c",i+64);
            }
            else
            {
                printf(" ");
            }
        }
        x++;
        y--;
        printf("\n");
    }
}
void p5()
{
    int n=5;
    int i,j;
    int x=n,y=n;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n*2; j++)
        {
            if(j==x||j==y)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        x--;
        y++;
        printf("\n");
    }
}
void p6()
{
    int n=5;
    int x=1,y=n*2-1;
    int i,j;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n*2; j++)
        {
            if(j==x||j==y)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        x++;
        y--;
        printf("\n");
    }
}
void p9()
{
    int n=5;
    int i,j;
    int x=n,y=n;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n*2; j++)
        {
            if(j==x||j==y)
            {
                printf("%d",x);
            }
            else
            {
                printf(" ");
            }
        }
        x--;
        y++;
        printf("\n");
    }
}
void p10()
{
    int n=5;
    int x=1,y=n*2-1;
    int i,j;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n*2; j++)
        {
            if(j==x||j==y)
            {
                printf("%d",i);
            }
            else
            {
                printf(" ");
            }
        }
        x++;
        y--;
        printf("\n");
    }
}
void p8()
{
    int n=5;
    int x=1,y=n*2-1;
    int i,j;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n*2; j++)
        {
            if(j==x||j==y)
            {
                printf("%c",i+64);
            }
            else
            {
                printf(" ");
            }
        }
        x++;
        y--;
        printf("\n");
    }
}
void p7()
{
    int n=5;
    int i,j;
    int x=n,y=n;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n*2; j++)
        {
            if(j==x||j==y)
            {
                printf("%c",x+64);
            }
            else
            {
                printf(" ");
            }
        }
        x--;
        y++;
        printf("\n");
    }
}
int main()
{
    printf("__________\n");
    p1();
    p2();
    p3();
    p4();
    p5();
    p6();
    p7();
    p8();
    p9();
    p10();
    printf("__________");
}
