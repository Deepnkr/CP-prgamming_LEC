// Wap to 5 digit int number reverse
#include<stdio.h>
void main()
{
    int a=92674,rev=0,rem;

    while(a!=0)
    {
        rem = a % 10;
        rev=(rev+10)+rem;
        a=a/10;

    }
    printf("ANS = %d",rev);
}