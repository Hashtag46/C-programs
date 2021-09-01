#include<stdio.h>
#include<conio.h>
int main()
{
    int age;
    char health,sex,home;
    printf("Enter your health status (excellent or poor): ");
    scanf(" %c",&health);
    printf("Enter your sex: ");
    scanf(" %c",&sex);
    ;printf("Where do you live (village or city): ");
    scanf(" %c",&home);
    printf("Enter your age: ");
    scanf(" %d",&age);

    if (health=='e' && (age>=25 && age<=35) && sex=='m' && home=='c')
        printf("\n\tYour premium is Rs.4 per thousand\n\tPolicy amount cannot exceed 2 lakhs");
    if (health=='e' && (age>=25 && age<=35) && sex=='f' && home=='c')
        printf("\n\tYour premium is Rs.3 per thousand\n\tPolicy amount cannot exceed 1 lakh");
    if (health=='p' && (age>=25 && age<=35) && sex=='m' && home=='v')
        printf("\n\tYour premium is Rs.6 per thousand\n\tPolicy amount cannot exceed 10,000");
    else
        printf("\n\tYou are not insured");
    return 0;
}
