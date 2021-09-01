#include<stdio.h>
int main()
{
    int a,b,i,p;
    printf("\n\tEnter a number: ");
    scanf("%d",&a);
    printf("\n\tEnter another number: ");
    scanf("%d",&b);
    i=1;
    p=1;
    for(;i<=b;i++)
    {
        p=p*a;
    }
    printf("\n\t%d to the power %d is %d",a,b,p);
    return 0;
}
