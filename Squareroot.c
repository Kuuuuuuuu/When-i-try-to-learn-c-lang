#include <stdio.h>
#include <math.h>

int main() {
   float number, root;
   printf("Enter a number: ");
   scanf("%f", &number);
   root = sqrt(number);
   printf("Square root of %.2f = %.2f", number, root);
   return 0;
}
