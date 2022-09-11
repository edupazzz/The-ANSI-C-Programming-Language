#include <stdio.h>

int main()
{
  float fahr, celsius;
  float lower, upper, step;

  lower = 0; /* Lower limit of temperature scale */
  upper = 300; /* Upper limt */
  step = 20;  /* step size */

  fahr = lower;

  printf("FAHRENHEIT\tCELSIUS\n");

  while(fahr <= upper)
  {
    celsius = 5 * (fahr-32) / 9;
    printf("%3.0f\t\t%6.1f\n", fahr, celsius);
    fahr = fahr + step;
  }
}
