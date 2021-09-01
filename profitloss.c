#include<stdio.h>
int main()
{
    float cp,sp,pr,lo;
    printf("\n\tEnter the cost price of the item: ");
    scanf("%f",&cp);
    printf("\n\tEnter the selling price of the item: ");
    scanf("%f",&sp);
    if(cp<=sp)
    {
        if(cp<sp)
        {
            pr=sp-cp;
            printf("\n\tYou have undergone profit by %f",pr);
        }
        else if(cp=sp)
        printf("You haven't had profit or loss");

    }
    if(cp>sp)
    {
        lo=cp-sp;
        printf("\n\tYou have undergone loss by %f",lo);
    }
    return 0;
}
