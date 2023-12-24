#include <stdio.h>

int main(void) {
  int n1;
  int n2;
  int n3;

  printf("Write 3 numbers: ");
  scanf("%d %d %d", &n1, &n2, &n3);

  if (n1 > n2) {
    if (n1 > n3) {
      printf("Number 1 is the biggest");
    }
  }

  if (n2 > n1) {
    if (n2 > n3) {
      printf("Number 2 is the biggest");
    }
  }

  if (n3 > n1) {
    if (n3 > n2) {
      printf("Number 3 is the biggest");
    }
  }

  printf("\n");

  return 0;
}
