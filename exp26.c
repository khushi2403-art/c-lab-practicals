#include <stdio.h>
#include <string.h>
int main()
{
    char str[100], sub[100];
    int i, j, count = 0, len1, len2;
    printf("Enter main string: ");
    scanf("%s", str);
    printf("Enter substring: ");
    scanf("%s", sub);
    len1 = strlen(str);
    len2 = strlen(sub);
    for(i = 0; i <= len1 - len2; i++)
    {
        for(j = 0; j < len2; j++)
        {
            if(str[i + j] != sub[j])
                break;
        }
        if(j == len2)
            count++;
    }
    printf("Total occurrences = %d", count);
    return 0;
}
