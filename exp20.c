#include <stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100];
    printf("Enter string: ");
    scanf("%s",str1);
    printf("Enter second string: ");
    scanf("%s", str2);
    printf("Length=%d\n",strlen(str1));
    strcat(str1, str2);
    printf("Concatenated string = %s\n", str1);
    
    if(strcmp(str1, str2) == 0)
        printf("Strings are equal");
    else
        printf("Strings are not equal");
    strcpy(str1, str2);
    printf("\nCopied string = %s", str1);
    strrev(str1);   
    printf("\nReversed string = %s", str1);
    return 0;
}
