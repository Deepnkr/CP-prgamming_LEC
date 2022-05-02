//WAP to read celcius and convert it into far
#include<stdio.h>
void main()
{
    float a,b;
    printf("Enter celcius =");
    scanf("%f",&a);
    b=(a * 9/5) + 32;
    printf("IN far = %f",b);
}