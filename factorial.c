#include<stdio.h>

int main()
{

    int i,n,fact=1;
    printf("Enter a number to find its factorial:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        fact=fact*i;

    }
    printf("Factorial of %d is %d",n,fact);
    printf("\n\n\n");
    return 0;
}
