#include<stdio.h>
int main()
{
    int i=1,j=1;
    for(i; i<=5;)
    {
        for(j; j<=i;)
        {
            printf("%d",j);
            j++;
        }
        printf("\n",i);
        i++;
    }
}