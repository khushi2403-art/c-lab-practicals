#include <stdio.h>

int main()
{
    int num;
    float decimal;
    char ch;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Enter a decimal number: ");
    scanf("%f", &decimal);

    printf("Enter a character: ");
    scanf(" %c", &ch);

    printf("\nYou entered:\n");
    printf("Integer = %d\n", num);
    printf("Decimal = %.2f\n", decimal);
    printf("Character = %c\n", ch);

    return 0;
}
