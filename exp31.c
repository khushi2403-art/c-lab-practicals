#include <stdio.h>
#include <string.h>
int main()
{
    FILE *fp1, *fp2;
    char str[200], word[50], replace[50];
    int count = 0;
    fp1 = fopen("input.txt", "r");
    fp2 = fopen("output.txt", "w");
    if(fp1 == NULL || fp2 == NULL)
    {
        printf("Error opening file");
        return 0;
    }
    printf("Enter word to find: ");
    scanf("%s", word);
    printf("Enter word to replace: ");
    scanf("%s", replace);
    while(fscanf(fp1, "%s", str) != EOF)
    {
        if(strcmp(str, word) == 0)
        {
            fprintf(fp2, "%s ", replace);
            count++;
        }
        else
        {
            fprintf(fp2, "%s ", str);
        }
    }
    fclose(fp1);
    fclose(fp2);
    printf("Total occurrences = %d", count);
    return 0;
}
