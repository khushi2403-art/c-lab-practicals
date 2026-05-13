#include <stdio.h>
struct Complex
{
    int real;
    int imag;
};
int main()
{
    struct Complex c1, c2, sum;
    printf("Enter first complex number (real imaginary): ");
    scanf("%d %d", &c1.real, &c1.imag);
    printf("Enter second complex number (real imaginary): ");
    scanf("%d %d", &c2.real, &c2.imag);
    sum.real = c1.real + c2.real;
    sum.imag = c1.imag + c2.imag;
    printf("Sum = %d + %di", sum.real, sum.imag);
    return 0;
}
