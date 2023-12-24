#include <stdio.h>

int main(void) {
  double kg;
  double cm;
  double bmi;

  printf("Your weight (kg): ");
  scanf("%lf", &kg);
  printf("Your height (cm): ");
  scanf("%lf", &cm);

  bmi = kg / ((cm/100)*(cm/100)); // BMI = kg / (meters * meters)              (x meters = x*100 centimeters)

  printf("BMI: %f", bmi);
  
  return 0;
}
