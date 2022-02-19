#include<stdio.h>
int main()
{
    int r,n,sum=0;
    printf("enter any number : ");
    scanf("%d",&n);
    do
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
    }while(n!=0);
    printf("%d",sum);
}