#include <stdio.h>

int factorial(int n);

void main(){

int n;
scanf("%d", &n);
printf("\n n! = %d \n", factorial(n));
}

int factorial(int n){
if(n<1){
return 1;
} else{
return (n * factorial(n-1));
}
}
