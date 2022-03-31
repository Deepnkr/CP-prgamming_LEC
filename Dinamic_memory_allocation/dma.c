#include <stdio.h>
#include <stdlib.h>

int main() {
  int n, i, *ptr, sum = 0,v;

  printf("Enter number of elements: ");
  scanf("%d", &n);

  ptr = (int*) malloc(n * sizeof(int));

  printf("Enter elements: ");
  for(i = 0; i < n; i++) {
    scanf("%d", ptr);
    sum += *ptr;
  }

  printf("Sum = %d", sum);
  free(ptr);

  return 0;
}