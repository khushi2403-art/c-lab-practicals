#include <stdio.h>
void update(int *a, int *b)
{
    *a = *a + 10;
    *b = *b + 20;
}
int main()
{
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    printf("Before function call: x = %d, y = %d\n", x, y);
    update(&x, &y);   
    printf("After function call: x = %d, y = %d", x, y);
    return 0;
}

