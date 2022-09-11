#include <stdio.h>


int main()
{
  int fahr;
  
printf("CELSIUS\t\tFAHRENHEIT\n");
  for(fahr = 0; fahr <= 300; fahr = fahr+20)
    printf("%6.1f\t\t%3d\n", (5.0/9.0)*(fahr-32), fahr);
}
