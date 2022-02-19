#include<stdio.h>
int main()
{
    float CEL, FAH;
    printf("Enter Tem in Centigrade = ");
    scanf("%f",&CEL);
    FAH = 32+(CEL*9)/5;
    printf("Temp in Fahrenhiet = %f",FAH);
}