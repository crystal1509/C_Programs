#include<stdio.h>
#include<conio.h>

int main()
{
    int a[9][9],b[9][9],r1,c1,r2,c2;

    printf("enter no of rows of first matrix: ");
    scanf("%d", &r1);

    printf("enter no of columns of first matrix: ");
    scanf("%d", &c1);

    printf("enter no of rows of second matrix: ");
    scanf("%d", &r2);

    printf("enter no of columns of second matrix:");
    scanf("%d", &c2);


    printf("enter elements of the first matrix:\n");
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c1;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }

    printf("FIRST MATRIX:\n");
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c1;j++)
            {
                printf("%d ", a[i][j]);
            }
            printf("\n");
        }
    printf("enter elements of the second matrix:\n");
        for(int i=0;i<r2;i++)
        {
            for(int j=0;j<c2;j++)
            {
                scanf("%d", &b[i][j]);
            }
        }
     printf("SECOND MATRIX:\n");
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c1;j++)
            {
                printf("%d ", b[i][j]);
            }
            printf("\n");
        }


int ch,add[9][9],sub[9][9],uhalf[9][9],lhalf[9][9],tr[9][9],pro[9][9];
//scanf(" ");
system("cls");
printf("MENU\n");
printf("1.Addition\n2.Subtraction\n3.Display upper and lower half\n4.Transpose\n5.Product\n");
printf("enter your choice:\n");
scanf("%d ", &ch);
switch(ch)
{

    case 1:
        if(r1==r2&&c1==c2)
        {
            for(int i=0;i<r1;i++)
            {
                for(int j=0;j<c1;j++)
                {
                    add[i][j]=a[i][j]+b[i][j];
                }
            }

            printf("ANSWER:\n");
            for(int i=0;i<r1;i++)
            {
                for(int j=0;j<c1;j++)
                {
                    printf("%d ", add[i][j]);;
                }
                printf("\n");
            }
        }

        else
            printf("invalid");

    break;

    case 2:
         if(r1==r2&&c1==c2)
        {
            for(int i=0;i<r1;i++)
            {
                for(int j=0;j<c1;j++)
                {
                    sub[i][j]=b[i][j]-a[i][j];
                }
            }

            printf("ANSWER:\n");
            for(int i=0;i<r1;i++)
            {
                for(int j=0;j<c1;j++)
                {
                    printf("%d ", sub[i][j]);;
                }
                printf("\n");
            }
        }

        else
            printf("invalid");

    break;


    case 3:
         printf("LOWER AND UPPER HALF OF FIRST MATRIX:");
         printf("UPPER:\n");
         for(int i=0;i<r1;i++)
            {
                for(int j=0;j<c1;j++)
                {
                    if(i>=j)
                    {
                        printf(" ");

                    }
                    else
                    {
                        printf("%d ",uhalf[i][j]);
                    }
                }
                printf("\n");
            }

         printf("LOWER:\n");
         for(int i=0;i<r1;i++)
            {
                for(int j=0;j<c1;j++)
                {
                    if(i<=j)
                    {
                        printf(" ");

                    }
                    else
                    {
                        printf("%d ",lhalf[i][j]);
                    }
                }
                printf("\n");
            }

    break;


    case 4:
         printf("TRANSPOSE OF FIRST MATRIX:\n");
        for(int i=0;i<c1;i++)
            {
                for(int j=0;j<r1;j++)
                {
                    printf("%d ",tr[j][i]);
                }
                printf("\n");
            }

    break;


    case 5:
        if(c1==r2)
        {
            for(int i=0;i<r1;i++)
            {
                for(int j=0;j<c1;j++)
                {
                    pro[i][j]=a[i][j]*b[i][j];
                }
            }

            printf("ANSWER:\n");
            for(int i=0;i<r1;i++)
            {
                for(int j=0;j<c1;j++)
                {
                    printf("%d ", pro[i][j]);;
                }
                printf("\n");
            }
        }

        else
            printf("invalid");

    break;


    default:
        printf("invalid choice");
        break;

}

return 0;

}
