//WAP to add N natural number.
#include<stdio.h>
int main()
{
    int n,i,k;
    printf("Enter any number = ");
    scanf("%d",&n);
    if(n!=0)
    {
        for(i=1; i<=n; i++)
        {
            k=k+i;
        }
    }
    printf("sum is = %d",k);
}