#include <stdio.h>

int main()
{
    int i,j;
    printf("Pattern 1: \n");
    for(i=1;i<=6;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("* ",i);
        }
        printf("\n");
    }
    printf("\n Pattern 2: \n");
    for(i = 1; i <= 6; i++)
    {
        for(j = 1; j <= 6 - i; j++)
        {
            printf("  ");
        }

        for(j = 1; j <= i; j++)
        {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}
