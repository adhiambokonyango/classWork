#include <stdio.h>
#include <stdlib.h>

void main ()
{
    int count=1, number;
    printf("Enter the value of number\n");
    scanf("%d",&number);

    while (count<=number)
    {
    //number--;
     count+2;
        printf("The value of number is %d\n",number--);

          printf("The product of iteration is %d\n",number*number);

    }

}
