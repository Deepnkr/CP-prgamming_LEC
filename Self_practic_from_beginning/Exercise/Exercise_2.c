#include<stdio.h>
int main()
{
    int a,b,i;
    printf("enter the num = ");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        printf("%d*%d=%d\n",a,i,a*i);
    }
}