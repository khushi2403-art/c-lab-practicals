#include <stdio.h>

int main()
{
    int n, t, rem, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    t= n;

    for(; n != 0; n /= 10)
    {
        rem = n % 10;
        sum = sum + (rem* rem * rem);
    }

    if(sum == t)
        printf("Armstrong number");
    else
        printf("Not an Armstrong number");

    return 0;
}
