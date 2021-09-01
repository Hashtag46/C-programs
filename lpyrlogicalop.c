#include<stdio.h>
int main()
{
    int year;
    printf("\n\tEnter any year: ");
    scanf("%d",&year);
    if((year%100==0 && year%400==0)||(year%100!=0 && year%4==0))
        printf("\n\tIt is a leap year");
    else
        printf("\n\tIt is not a leap year");
    return 0;
}
