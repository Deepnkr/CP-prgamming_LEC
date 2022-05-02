//WAP to input length breath of room and calculate its area and parimeter
#include<stdio.h>
float Question_4()
{
    float l,b,area,parimeter;
    printf("enter your length and breath of your room : ");
    scanf("%f%f",&l,&b);
    area = l * b;
    parimeter = (l + b) * 2;
    return area;
    
}
void main()
{
    
    printf("Area = %f\nparimeter = %f",Question_4());
}