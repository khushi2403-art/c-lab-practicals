#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    c = a;
    a = b;
    b = c;

    printf("\nAfter swapping using temp variable:\n");
    printf("a = %d and b = %d\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("\nAfter swapping without temp variable:\n");
    printf("a = %d and b = %d\n", a, b);

    return 0;
}

