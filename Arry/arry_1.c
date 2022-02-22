#include<stdio.h>
int main()
{
    int marks[5];
    for (size_t i = 0; i < 5; i++)
    {
        printf("enter an arry %d\n",i);
        scanf("%d",&marks[i]);
    }

    for (size_t i = 0; i < 5; i++)
    {
        printf("the real value is = %d\n",marks[i]);
    }
    
    
}