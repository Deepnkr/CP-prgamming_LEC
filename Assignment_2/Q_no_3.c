//WAP to check wheather the number is add or even.

#include<stdio.h>
int main()
{
    int a;
    printf("Enter any number = ");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("\n%d The number is Even",a);
    }
    else
    printf("\n%d The number is Odd",a);
}