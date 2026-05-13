#include <stdio.h>
void checkPrime(int n)
{
    int i, flag = 1;
    if(n <= 1)
        flag = 0;
    for(i = 2; i <= n/2; i++)
    {
        if(n % i == 0)
        {
            flag = 0;
            break;
        }
    }
    if(flag)
        printf("Prime number\n");
    else
        printf("Not a Prime number\n");
}
void checkArmstrong(int n)
{
    int temp = n, remainder, sum = 0;
    while(temp != 0)
    {
        remainder = temp % 10;
        sum += remainder * remainder * remainder;
        temp /= 10;
    }
    if(sum == n)
        printf("Armstrong number\n");
    else
        printf("Not an Armstrong number\n");
}
void checkPerfect(int n)
{
    int i, sum = 0;
    for(i = 1; i <= n/2; i++)
    {
        if(n % i == 0)
            sum += i;
    }
    if(sum == n)
        printf("Perfect number\n");
    else
        printf("Not a Perfect number\n");
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    checkPrime(num);
    checkArmstrong(num);
    checkPerfect(num);
    return 0;
}
