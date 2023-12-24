#include <stdio.h>

int main(void) {
  int num1 = 7;
  int num2 = 5;
  int num3 = 2;
  
  if (num1 > num2 && num3 == 2) { // (&& = and) If num1 is bigger than num2 and num3 is equal to 2...
    printf("Yes 1\n"); // Print "Yes 1"
  }

  if (num1 < num2 || num3 == 1) { // (|| = or) If num1 is smaller than num2 or num3 is equal to 1...
    printf("Yes 2\n"); // Print "Yes 2"
  }

  if (num1 + num2 == 12 || num3 == 7) { // If num1 + num2 = 12 or num3 is equal to 7...
    printf("Yes 3\n"); // Print "Yes 3"
  }
  
  return 0;
}

/*
Output:
Yes 1
Yes 3
*/
