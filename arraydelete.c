#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,i,k,arr[100];
    printf("Enter the number of enties :\n");
    scanf("%d",&n);
    for ( i = 0; i < n  ; i++)
    {
        printf("element %d:",i);
        scanf("%d",&arr[i]);

    }
    printf("The values of the array are:\n");
    for ( i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);

    }
    printf("\nEnter the postion you want to delete:\n");
    scanf("%d",&k);
    printf("Array after deletion :\n");
    for ( i = 0; i < k -1 ; i++)
    {
        printf("%d ",arr[i]);
    }
    for ( i =k; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
    
    return 0;
}
