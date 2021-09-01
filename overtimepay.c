#include<stdio.h>
int main()
{
    int h,x,p,i;
    while(i<=10)
    {
        printf("\n\tEnter number of hours worked: ");
        scanf("%d",&h);
        x=h%40;
        p=x*12;
        printf("\n\tYou will be paid Rs. %d extra",p);
        i++;
    }
    return 0;
}
