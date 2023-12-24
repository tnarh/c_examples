#include <stdio.h>

int main(void) {
  int n1 = 2;

  char* result1 = n1 > 5 ? "Yes" : "No"; // If n1 > 5, return "Yes", else return "No"
  
  char* result2 = (n1 == 10) ? "Equal" : ((n1 > 10) ? "Bigger" : "Lower"); // If n1 is equal to 10, return "Equal", else if n1 > 10, return "Bigger", else return "Lower"

  printf("%s, %s", result1, result2);
  printf("\n");

  return 0;
}
