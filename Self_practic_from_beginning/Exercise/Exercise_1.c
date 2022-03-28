# include <stdio.h>
/*
WAP to take an input from user and make a multipacatin table of that number up to 10.

Example:
Input:
Enter any number : 6
output :
multipacation table of 6 is..
6 * 1 = 6
6 * 2 = 8
.
.
6 * 10 = 60
thankyou
*/ 
int main()
{
    
    int a, i;
    printf("Enter any number : ");
    scanf("%d",&a);
    printf("\nThe table of number %d is given below:\n",a);
    for(i=1; i<=10; i++)
    {
        printf("%d * %d = %d\n",a,i,a*i);
    }
    
}