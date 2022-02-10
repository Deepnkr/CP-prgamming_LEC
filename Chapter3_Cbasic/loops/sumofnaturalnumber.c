#include<stdio.h>
int main()
{
    int sum, i;
    for(i=1; i<=10; i++)
    {
        printf("%d\n",i);
        sum=sum+i;
    }
    printf("sum=%d",sum);
}