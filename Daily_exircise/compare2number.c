#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter 2 numbers =");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        printf("greater number is = %d",a);
    }
    else{
        printf("greater number is = %d",b);
    }
}