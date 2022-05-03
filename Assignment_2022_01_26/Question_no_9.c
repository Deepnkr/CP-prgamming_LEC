//WAP to input any 4 numbers and find its sum and percentage of each number
#include<stdio.h>
void percentage()
{
    float a, b, c, d, e, f, a1, b1, c1, d1;
    printf("Enter any 4 numbers =");
    scanf("%f%f%f%f",&a,&b,&c,&d);
    f = (a+b+c+d);
    a1 = a/f*100;
    b1 = b/f*100;
    c1 = c/f*100;
    d1 = d/f*100;
    printf("Percentage of your first num = %f\nPercentage of your second num = %f\nPercentage of your third num = %f\nPercentage of your fourt num = %f\n",a1,b1,c1,d1);
}
void main()
{
    percentage();
}