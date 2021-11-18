#include <stdio.h>
#include <stdlib.h>

int main()
{


    printf("Arithmetic operations assignment\n");

    int a, b;
    printf("Enter first value: ");
      scanf("%d", &a);
       printf("Enter second value: ");
      scanf("%d", &b);
    printf("Addition: %d + %d = %d\n",a, b,  a + b);
   printf("Division: %d/%d = %d\n",a,b, a/b);
   printf("Subtraction: %d - %d = %d\n",a, b, a - b);
   printf("Multiplication: %d * %d = %d\n",a, b, a * b);

    return 0;
}
