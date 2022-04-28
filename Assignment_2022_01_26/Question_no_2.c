// WAP to find sum, product, quotient of numbers 22 & 7.

#include<stdio.h>
int question_2(float a, float b)
{
    int c,d;
    float e;
    printf("Sum of numbers are\n");
    c = a+b;
    printf("%d\n",c);

    printf("product of numbers is\n");
    d = a*b;
    printf("%d\n",d);

    printf("quotient of numbers is\n");
    e = a/b;
    printf("%f",e);
}
int main()
{
    question_2(22,7);
}