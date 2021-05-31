#include<stdio.h>
#include<math.h>

int main()
{

    int r,n,a,sum=0;
    printf("Enter first number of the geometric series:");
    scanf("%d",&a);
    printf("Enter common ratio of the geometric series:");
    scanf("%d",&r);
    printf("Enter number of terms of the geometric series:");
    scanf("%d",&n);

    sum=(a*(pow(r,n)-1))/(r-1);
    printf("Sum of the series is: %d",sum);
    printf("\n\n\n");
    return 0;
}
