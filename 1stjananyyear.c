#include <stdio.h>
int main()
{
        int y,dy,ly,ny,nd,pd;
        printf("\n\tEnter the year for which you want to know 1st Jan: ");
        scanf("%d",&y);
        dy=y-1992;
        ly=dy/4;
        ny=dy-ly;
        nd=(ly*366)+(ny*365);
        pd=nd%7;
        if (pd==0)
                printf("\n\t1st Jan of %d is Wednesday",y);
        if (pd==1)
                printf("\n\t1st Jan of %d is Thursday",y);
        if (pd==2)
                printf("\n\t1st Jan of %d is Friday",y);
        if (pd==3)
                printf("\n\t1st Jan of %d is Saturday",y);
        if (pd==4)
                printf("\n\t1st Jan of %d is Sunday",y);
        if (pd==5)
                printf("\n\t1st Jan of %d is Monday",y);
        if (pd==6)
                printf("\n\t1st Jan of %d is Tuesday",y);
        if (pd==7)
                printf("\n\t1st Jan of %d is Wednesday",y);
        if (pd==-1)
                printf("\n\t1st Jan of %d is Tuesday",y);
        if (pd==-2)
                printf("\n\t1st Jan of %d is Monday",y);
        if (pd==-3)
                printf("\n\t1st Jan of %d is Sunday",y);
        if (pd==-4)
                printf("\n\t1st Jan of %d is Saturday",y);
        if (pd==-5)
                printf("\n\t1st Jan of %d is Friday",y);
        if (pd==-6)
                printf("\n\t1st Jan of %d is Thursday",y);
        if (pd==-7)
                printf("\n\t1st Jan of %d is Wednesday",y);
        return 0;
}
