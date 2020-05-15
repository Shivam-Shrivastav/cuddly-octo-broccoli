#include<stdio.h>
int main(int argc, char const *argv[])
{   
    int n;
    int num[100];
    printf("enter the number entires you want\n");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        printf("element - %d : ",i);
        scanf("%d",&num[i]);
    }
    printf("\n\nThe numbers stored are: \n");
    for (int i = 1; i <= n; i++)
    {
        printf("%d ",num[i]);
    }
    printf("\n\nThe  reversed numbers  are: \n");
    for (int i = n; i >=1; i--)
    {
        printf("%d ",num[i]);
    }
    

    
    
    return 0;
}
