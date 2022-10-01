#include <stdio.h>

int main() {
    int n;
    printf("input no of terms :: ");
    scanf("%d",&n);
    printf("\n");
    
    for(int i=1; i <= n; i++)
    {
        for(int j=1; j<= i*n; j++)
        {
            if (j > i*n-n)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");
    
    return 0;
}
