#include <stdio.h>

int main()
{
    int a, b, c,greatest;
    printf("Enter three no.: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c){
        printf("Greatest:%d\n",a);
    }
    else if(b>a && b>c){
        printf("Greatest:%d\n",b);
    }
    else{
        printf("Greatest:%d\n",c);
    }
    greatest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    printf("Greatest using ternary operator:%d",greatest);
    return 0;
}
