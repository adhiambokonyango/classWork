#include <stdio.h>
#include <stdlib.h>

int main()
{


    printf("Arithmetic operations assignment\n");

    float shillings;
    float dollars = 111.04;
    printf("Enter amount: \n");
      scanf("%f", &shillings);
      if(shillings < 1.00){
       printf("Enter valid amount in numbers: \n");
      scanf("%f", &shillings);
      }else {
      float output_value = shillings/dollars;
      printf("Amount in dollars is %.2f$", output_value);

      }


    return 0;
}
