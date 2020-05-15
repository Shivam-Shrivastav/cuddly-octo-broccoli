#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    int num[10];
    printf("-------Read and print array of element------\n");
    printf("Inputs 10 integer numbers\n");
    for (int i = 0; i < 10; i++)
    {
        printf("element - %d : ",i);
        scanf("%d",&num[i]);
    }
    printf("elements in array are: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d  ",num[i]);
    }
    

    return 0;
}
