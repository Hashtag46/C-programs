#include<stdio.h>
int main()
{
    int i,f=1,n;
    printf("\n\tEnter a number: ");
    scanf("%d",&n);
    i=1;
    while(i<=n)
        {
            f=f*i;
            i=i+1;
        }
    printf("\n\tThe factorial of %d is %d",n,f);
    return 0;
}
