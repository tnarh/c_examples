#include <stdio.h>

int main(void) {
  int n1;
  int n2;
  int n3;

  printf("Write 3 numbers: ");
  scanf("%d %d %d", &n1, &n2, &n3);

  if (n1 > n2 && n1 > n3) {
    printf("Number 1 is the biggest");
  } else if (n2 > n1 && n2 > n3) {
    printf("Number 2 is the biggest");
  } else if (n3 > n1 && n3 > n2) {
    printf("Number 3 is the biggest");
  } else {
    printf("The biggest number is a duplicate");
  }

  printf("\n");

  return 0;
}
