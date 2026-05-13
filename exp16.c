#include <stdio.h>
int main()
{
    int arr[100],i,pos,size,n,p,v,del,element,found;
    printf("Enter no. of elements: ");
    scanf("%d",&size);
    printf("Enter elements: ");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    //Insert element in Array
    printf("Enter position: ");
    scanf("%d",&pos);
    printf("Enter value: ");
    scanf("%d",&n);
    for(i=size;i>=pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos-1]=n;
    size++;
    printf("Array after insertion of elements: ");
    for ( i = 0; i < size; i++)
    {
        printf(" %d",arr[i]);
    }
    //Update Array
    printf("\nEnter position and value to update: ");
    scanf("%d %d",&p,&v);
    arr[p-1]=v;
    printf("Updated Array: ");
    for ( i = 0; i < size; i++)
    {
        printf(" %d",arr[i]);
    }
    //Delete Element in Array
    printf("\nEnter position to delete: ");
    scanf("%d",&del);
    del=del-1;
    printf("Array after deleting element:");
    for(i=del;i<size-1;i++){
        arr[i]=arr[i+1];
    }
    size--;
    for ( i = 0; i < size; i++)
    {
        printf(" %d",arr[i]);
    }
    //Search Element
    printf("\nEnter element to search: ");
    scanf("%d",&element);
    found=0;
    for ( i = 0; i < size; i++)
    {
        if(arr[i]==element){
            printf("Found at position %d\n", i+1);
            found = 1;
            break;
        }
    }
    if(!found){
        printf("Not found\n");
    }
    //Display Elements
    printf("Displaying Array elements: ");
    for ( i = 0; i < size; i++)
    {
        printf(" %d",arr[i]);
    }
    return 0;
}
