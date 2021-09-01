#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int n,i,isprime;
    printf("\n\tEnter the number: ");
    scanf("%d",&n);
    isprime=1;
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            isprime=0;
            break;
        }
    }
    if(isprime==1)
        printf("\n\tThe number is a prime number");
    else
        printf("\n\tThe number is not a prime number");
    getch();
}
