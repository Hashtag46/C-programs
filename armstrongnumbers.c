#include<stdio.h>
int main()
{
    int n,a,b,c;
    for(n=1;n<=500;n++)
    {
        a=n%10;
        b=((n-a)/10)%10;
        c=(((n-a)/10)-b)/10;
        if(n==a*a*a+b*b*b+c*c*c)
            printf("\n\t%d",n);

    }

    return 0;
}

