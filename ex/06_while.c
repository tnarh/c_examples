#include <stdio.h>

int main(void) {
  int i = 0;
  
  while (i < 5) { // While "i" is smaller than 5...
    printf("%d\n", i); // Print i
    i += 2; // Increase i by 2 (+= is increase by, same thing works for -=, *= and /=)
  }
  
  return 0;
}

/*
Output:
0
2
4
*/
