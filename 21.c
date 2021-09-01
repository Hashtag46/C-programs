#include<stdio.h>
int main()
{
    int p,c,m=21;
    while(1)
    {
        printf("\n\tNumber of matchsticks left: %d",m);
        printf("\n\tPick 1 or 2 or 3 or 4 matchsticks: ");
        scanf("%d",&p);
        if(p>4 || p<1)
            continue;
        m=m-p;
        printf("\n\tNumber of matchsticks left: %d",m);
        c=5-p;
        printf("\n\tOf which computer picked: %d",c);
        m=m-c;
        if(m==1)
        {
            printf("\n\tOnly one matchstick left, you lost the game, the computer wins");
            break;
        }

    }
    return 0;
}
