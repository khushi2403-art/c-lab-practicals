#include <stdio.h>
void swapValue(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("Inside Call by Value: a = %d, b = %d\n", a, b);
}
void swapReference(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    swapValue(x, y);
    printf("After Call by Value: x = %d, y = %d\n", x, y);
    swapReference(&x, &y);
    printf("After Call by Reference: x = %d, y = %d\n", x, y);
    return 0;
}
