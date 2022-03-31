
#include<stdio.h>
#include <string.h>

void length()
{
  char name[] = "deepankar";
  int length = strlen(name);
  printf("The length of the name is : %d",length);
}

void inp()
{
    char name[100];
    printf("Enter the name: ");
    gets(name);
    puts(name);
}
void main()
{
    length();
    printf("\n");
    inp();
}
//strcat strlwr strlen strupr 
