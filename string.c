#include <stdio.h>
#include <string.h>
int main()
{

    char str1[100],str2[100],i,ch,j;
    printf("MENU\n1.to find the length of the string \n2. To concatenate two string \n3. To find reverse of a string \n4. To copy one string to another string.");
    printf("\nenter the choice:");
    scanf("%d",&ch);
    printf("\n\n");

switch(ch)
{
    case 1:
        printf("Enter a string: \n");
        scanf("%s",str1);
        for(i=0; str1[i]!='\0'; i++);
        printf("\nLength of input string: %d",i);
    break;


    case 2:
        printf("Enter first string: \n");
        scanf("%s",str1);
        printf("Enter second string: \n");
        scanf("%s",str2);
        while(str1[i]!='\0')
            i++;
        while(str2[j]!='\0')
        {
            str1[i]=str2[j];
            j++;
            i++;
        }
        str1[i]='\0';
        printf("\nConcatenated String is %s",str1);
    break;


    case 3:
         printf("Enter a string: \n");
         scanf("%s",str1);
         int n=strlen(str1);
         printf("\nReversed string is \n");
         for(i=n-1;i>=0;i--)
         {
            printf("%c",str1[i]);
         }
    break;



    case 4:
        printf("Enter a string: \n");
        scanf("%s",str1);
        printf("Enter a string: \n");
        scanf("%s",str2);

        for(i=0;str1[i]!='\0';i++)
        {
            str2[i] = str1[i];
        }
        str2[i]='\0';
        printf("Copied String is %s",str2);
    break;

    default:
        printf("invalid");
        break;

}

return 0;
}
