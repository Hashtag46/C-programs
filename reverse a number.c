#include<stdio.h>
#include<conio.h>
int main()
{
    int n,n2,n3,n4,n5,n6,ref,ref2,ref3,ref4,ref5,m,m2,m3,m4,m5,fin;
    printf("\n\tEnter a number: ");
    scanf("%d",&n);
      m=n % 10;
      ref=n-m;
      n2=ref/10;

      m2=n2%10;
      ref2=n2-m2;
      n3=ref2/10;

       m3=n3%10;
      ref3=n3-m3;
      n4=ref3/10;

       m4=n4%10;
      ref4=n4-m4;
      n5=ref4/10;

       m5=n5%10;
      ref5=n5-m5;
      n6=ref5/10;
      fin=(m*10000)+(m2*1000)+(m3*100)+(m4*10)+(m5*1);


      printf("\n\tThe reverse of the number is: %d",fin);
      return 0;
}
