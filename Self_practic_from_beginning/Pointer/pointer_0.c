#include<stdio.h>

int main()
{
    int arry[5],i;
    for(i=1; i<=5; i++)
    {
        printf("enter arry[%d]:",i);
        scanf("%d",&arry[i]);
    }
    for(i=1; i<=5; i++)
    {
        printf("address of &arry[%d]=%p\n",i,&arry[i]);
    }
}