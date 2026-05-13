#include <stdio.h>
#include <math.h>

int main()
{
    float u, a, t, v, s;
    float b, c, p, T, H;

    printf("Enter values of u, a, t: ");
    scanf("%f %f %f", &u, &a, &t);

    printf("Enter values of b, c, p: ");
    scanf("%f %f %f", &b, &c, &p);

    v = u + a * t;
    s = u * t + 0.5 * a * t * t;
    T = 2 * a + sqrt(b) + 9 * c;
    H = sqrt(b * b + p * p);

    printf("\nV = %.2f\n", v);
    printf("S = %.2f\n", s);
    printf("T = %.2f\n", T);
    printf("H = %.2f\n", H);

    return 0;
}
