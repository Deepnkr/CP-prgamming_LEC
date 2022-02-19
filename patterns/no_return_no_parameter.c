#include<stdio.h>
int add()
{
    int a,b,c;
    printf("enter 2 num =");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("%d",c);
}
void main()
{
    add();
}