#include <stdio.h>

int main()
{
    int n,rev=0, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);
    while (n>0)
    {
       rev=rev*10+n%10;
       count++;
       n/=10;
    }
    printf("Count:%d\n",count);
    printf("Reverse:%d",rev);    
    return 0;
}
