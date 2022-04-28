//WAP to convert age of any person into days
#include<stdio.h>
float converter()
{
    float a,b;
    printf("Enter your age :\n");
    scanf("%f",&a);
    printf("Your age into days are :\n");
    b = a*12*30.42;
    printf("%f",b);
}
void main()
{
    converter();
}