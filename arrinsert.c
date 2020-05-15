#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,i,j,p,arr[100],inval;
    printf("Enter the number of entires you want :\n");
    scanf("%d",&n);
    printf("Input the values of entries in ascending order:\n");
    for ( int i = 0; i < n; i++)
    {
        printf("Element %d :",i);
        scanf("%d",&arr[i]);

    }
    printf("Existing values of the array are:\n");
    for (int i = 0; i < n; i++)
    {
        printf("% 5d ",arr[i]);
    }
    printf("\nENTER THE INSERTED VALUE:\n");
    scanf("%d",&inval);
    for ( i = 0; i < n; i++)
    {
        /* code */
        if (inval<arr[i])
    {
        p=i;
        break;

    }
    }
    
    
    for ( i = n; i >= p; i--)
    {
        arr[i]=arr[i-1];
    }
    arr[p]=inval;
    printf("new values of array:\n");
    for ( i = 0; i < n+1; i++)
    {
        printf("% 5d ",arr[i]);
    }
    
    
    

    



        return 0;
}
