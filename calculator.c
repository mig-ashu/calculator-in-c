#include<stdio.h>

int main()
{
    int a,b,c,operator;
    printf("choose the operator\n");
    printf("1 for abb(+)\n");
    printf("2 for subtrect(-)\n");
    printf("3 for multiple(*)\n");
    printf("4 for divide(/)\n\n");

    printf("choose the operator\n");
    scanf("%d",&operator);

    printf("Enter the 1st number\n");
    scanf("%d",&a);
    printf("Enter the 2nd number\n");
    scanf("%d",&b);

    if(operator==1)
    {
        printf("Ans = %d",c=a+b);
    }
    else if(operator==2)
    {
        printf("Ans = %d",c=a-b);
    }
    else if(operator==3)
    {
        printf("Ans = %d",c=a*b);
    }
    else if(operator==4)
    {
        printf("Ans = %d",c=a/b);
    }
    return 0;
}