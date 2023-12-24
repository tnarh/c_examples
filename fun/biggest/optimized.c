#include <stdio.h>

int main(void) {
  int n1;
  int n2;
  int n3;
  int biggest;

  printf("Write 3 numbers: ");
  scanf("%d %d %d", &n1, &n2, &n3);

  if (n1 > n2) {
    biggest = n1;
  } else {
    biggest = n2;
  }
  if (n3 > biggest) {
    biggest = n3;
  }

  printf("%d is the biggest", biggest);
  printf("\n");

  return 0;
}
