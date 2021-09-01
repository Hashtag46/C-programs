#include<stdio.h>
int main()
{
    float h,c,t;
    printf("\n\tEnter hardness: ");
    scanf("%f",&h);

    printf("\n\tEnter carbon content: ");
    scanf("%f",&c);

    printf("\n\tEnter tensile strength: ");
    scanf("%f",&t);

    if(h>50 && c<0.7 && t>5600)
        printf("\n\tThe steel is graded 10");
    if(h>50 && c<0.7 && t<=5600)
        printf("\n\tThe steel is graded 9");
    if(h<=50 && c<0.7 && t>5600)
        printf("\n\tThe steel is graded 8");
    if(h>50 && c>=0.7 && t>5600)
        printf("\n\tThe steel is graded 7");
    if((h>50 && c>=0.7 && t<=5600) || (h<=50 && c<0.7 && t<=5600) || (h<=50 && c>=0.7 && t>5600))
        printf("\n\tThe steel is graded 6");
    if(h<=50 && c>=0.7 && t<=5600)
        printf("\n\tThe steel is graded 5");
    return 0;
}
