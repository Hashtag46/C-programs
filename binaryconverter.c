#include<stdio.h>
#include<conio.h>
int main()
{
    int no,var,re,binary,i=1;
    printf("\n\tEnter a decimal number");
    scanf("%d",&no);

    var=no;

    while(no!=0)
    {
        re=no%2;
        no=no/2;
        binary=binary+(re*i);
        i=i*10;
    }
    printf("\n\tThe binary of %d is %d",var,binary);
    return 0;
}
