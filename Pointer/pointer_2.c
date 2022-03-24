#include<stdio.h>
void swap(int*a, int*b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int A=5,B=10;
    swap( &A,  &B);
    
        printf("value of A = %d\n",A);
        printf("value of B = %d",B);    
    
}