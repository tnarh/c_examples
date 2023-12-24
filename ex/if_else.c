#include <stdio.h>

int main(void) {
  int num1 = 2;
  int num2 = 5;
  
  if (num1 == num2) { // If num1 and num2 are equal...
    printf("Yes"); // Print "Yes"
  } else if (num1 > num2) { // If they're not equal, if num1 is bigger than num2 ...
    printf("Kinda"); // Print "Kinda"
  } else { // If it's none of those...
    printf("No"); // Print "No"
  }
  
  return 0;
}

/*

Types of operations:

Operation | Meaning
------------------------------------
==        | Equal
!=        | Not equal
<         | Less than
>         | More than
<=        | Less than or equal to
>=        | More than or equal to

*/
