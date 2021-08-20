#include <stdio.h>

void fibo(int n)
{
    static int a=0,b=1,c;
    if(n>0)
    {
         c=a+b;
         a=b;
         b=c;
         printf("%d ",c);
         fibo(n-1);
    }
}


int main()
{

    int n;
    printf("enter the n number to print the series:");
    scanf("%d",&n);
    printf("%d %d ",0,1);

    fibo(n-2);
    printf("\n\n");
    return 0;
}
