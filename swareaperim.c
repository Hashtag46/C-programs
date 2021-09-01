#include<stdio.h>
#include<conio.h>
int main()
{
    int l,b,a,p,ch;
    printf("Enter the length: ");
    scanf("%d",&l);
    printf("Enter the breadth: ");
    scanf("%d",&b);
    printf("\n\tM  E  N  U");
    printf("\n\t1. Area");
    printf("\n\t2. Perimeter");
    printf("\n\tNumber your choice: ");
    scanf("%d",&ch);

    switch(ch)
    {
    case 1:
        a=l*b;
        printf("\n\tThe area is %d",a);
        break;
    case 2:
        p=2*(l+b);
        printf("\n\tThe perimeter is %d",p);
        break;
    default:
        printf("\n\tInvalid Choice");
    }
    return 0;
}
