#include<stdio.h>
int add()
{
    int a,b,c;
    printf("enter 2 number=");
    scanf("%d%d",&a,&b);
    c=a+b;
    return c;
}
int main()
{
    printf("the value is =%d",add());
}