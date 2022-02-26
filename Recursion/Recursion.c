#include<stdio.h>
int factorial(int n)
{
    if(n>=1)
    {
        return n * factorial(n-1);
    }
    else
    {
        return 1;
    }
}
int main()
{
    int f;
    printf("enter the number:");
    scanf("%d",&f);
    printf("the num is : %d are %d",f,factorial(f));
}