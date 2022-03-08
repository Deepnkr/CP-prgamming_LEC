#include<stdio.h>
int main()
{
    int arry[5],i,sum=0;
    for( i=1; i<=5; i++)
    {
        printf("enter arry[%d]:",i);
        scanf("%d",&arry[i]);
    }
    for(i=1;i<=5;i++)
    {
        if(arry[i]%7==0&&arry[i]%5!=0)
        {
            sum = sum+arry[i];
            printf("the numbers are = %d\n",arry[i]);
        }

    }
    printf("sum of num is:%d",sum);
    
}