#include<stdio.h>
#include<conio.h>
#include<math.h>
//#include<graphics.h>


int function1()
{
    float a,b,c;
    printf("Program to use random formula.\n");
    printf("Enter any 2 a and b numbers :");
    scanf("%f%f",&a,&b);
    c = a*sqrt(b);
    printf("Answer of a square b is :%f\n",c);
}
int function2(int h)
{
    printf("\n\nThis is a pattern:\n\n");
    for ( int i = 0; i < h; i++)
    {
        for ( int j = i; j < h; j++)
        {
            printf("*\t");
        }
    printf("\n");
    }
    for ( int i = 0; i < h; i++)
    {
        for ( int j = 0; j <= i; j++)
        {
            printf("*\t");
        }
    printf("\n");
    }
    printf("\n");
}
void main()
{
    function1();
    function2(5);
    //function3();
}