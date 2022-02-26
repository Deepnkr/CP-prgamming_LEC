#include<stdio.h>
int main()
{
    int marks[5],i;
    for (i = 1; i < 5; i++)
    {
        printf("enter an arry %d\n",i);
        scanf("%d",&marks[i]);
    }

    for (i = 1; i < 5; i++)
    {
        printf("the real value is = %d\n",marks[i]);
    }
    
    
}