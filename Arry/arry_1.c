#include<stdio.h>
int main()
{
    int marks[5];
    for (int i = 0; i < 5; i++)
    {
        printf("enter an arry %d\n",i);
        scanf("%d",&marks[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("the real value is = %d\n",marks[i]);
    }
    
    
}