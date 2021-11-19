#include <stdio.h>

//int factorial(int n);

void main(){

int n;
/*
int values[5];
printf("enter value");
scanf("%d", &values);
printf("%d", values[0]);
*/
printf("enter number: ");
scanf("%d", &n);

printf("SUMMATION: %d", factorial(n));
}

int factorial(int n){
//printf("%d\n", n);

if(n < 0) {
printf("1\n");
}

else {
int sum = 0;

// 0, 1, 2
for (int i = 0; i <= n; i++){
//printf("%d\n", i);
printf("sum: %d + %d\n", sum, i);
 sum = sum+i;
}

//printf("sum: %d\n", sum);

printf("n: %d\n", n);
factorial(n-1);
return sum;
}

}
