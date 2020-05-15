#include<stdio.h>
int main(int argc, char const *argv[])
{   
    int n,x=0;
    int num[100];
    printf("enter the number entires you want\n");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        printf("element - %d : ",i);
        scanf("%d",&num[i]);
        x+=num[i];
    }
    	printf("\n\nThe sum of the entered numbers are: %d \n\n",x);
	printf("%d",1);


    

    
    
    return 0;
}
