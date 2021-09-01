#include<stdio.h>
int main()
{
    int s, da, ra, gs;
    printf("\n\tEnter your Salary: ");
    scanf("%d",&s);
    da=(40 * s) / 100;
    ra=(20 * s) / 100;
    gs=s+(da+ra);
    printf("\n\tYour Gross Salary is: %d", gs);
    return 0;
}
