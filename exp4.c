#include <stdio.h>

int main()
{
    int r;
    printf("Enter radius of circle: ");
    scanf("%d",&r);
    printf("Area:%.2f\n",3.14*r*r);
    printf("Circumference:%.2f",2*3.14*r);
    
    return 0;
}
