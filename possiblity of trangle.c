#include <stdio.h>
#include <conio.h>
void main()
{
        int a,b,c;
        printf("enter the first side- ");
        scanf("%d",&a);
        printf("enter the second side- ");
        scanf("%d",&b);
        printf("enter the third side- ");
        scanf("%d",&c);
        if(a>b && a>c)
        {
                if(b+c>a)
                        printf("triangle can be formed");
                else
                        printf("triangle cannot be formed");
        }

        else if(b>a && b>c)
        {
                if(a+c>b)
                        printf("triangle can be formed");
                else
                        printf("triangle cannot be formed");
        }

        else if(c>a && c>b)
        {
                if(b+a>c)
                        printf("triangle can be formed");
                else
                        printf("triangle cannot be formed");
        }


        getch();
}
