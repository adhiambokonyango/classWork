#include <stdio.h>


void main()
{

//int counter = 1;
int number = 5;
int fact=1;
for(int counter=1; counter <= number; counter++){
fact = fact * counter;
printf("%d\n", fact);
}
}
