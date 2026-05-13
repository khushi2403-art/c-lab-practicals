#include <stdio.h>
int main()
{
    int a[10][10];
    int r1, c1,i, j;
    printf("Enter rows and columns of matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter elements of matrix:\n");
    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Transpose matrix:\n");
    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c1; j++)
        {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }
    return 0;
}
