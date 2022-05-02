//WAP to read radius of sphere and surface area
#include<stdio.h>
void main()
{
    float a,b,c,p=3.1415;
    printf("Enter radius =");
    scanf("%f",&a);
    b=(4/3)*p*a;
    c=4*p*a;
    printf("The surface area = %f\nThe volumn = %f",b,c);
}