#include <stdio.h>
#include <stdlib.h>

void main()
{
// determine amount of commission
char full_name[50];
int pay_roll_no, amount_of_sales, no_of_employees, counter;
float commission;
float total_salary;
char temp;

/*
0-1000            1%

Above 1000-5000   3%

Above 5000-10000  5%

Above 10,000      10% */


printf("how many sales people?\n");
scanf("%d", &no_of_employees);
 while ( counter < no_of_employees){
  printf("************* Employee Detail ******************\n");
  printf("PayRoll No: \n");
  scanf("%d",&pay_roll_no);
  printf("Full Names: \n");
 scanf("%c",&temp); // temp statement to clear buffer
	scanf("%[^\n]",full_name);
  printf("Amount of sales:\n");
  scanf("%d",&amount_of_sales);
  printf("************* Employee Detail ******************\n\n");

  if(amount_of_sales >= 0 && amount_of_sales <= 1000){
  commission = amount_of_sales * 0.01;
  total_salary =  commission + 25000;

   printf("************* Calculated Output ******************\n");

  printf("\t%5s \t%5s  \t%5s   \t%10s    \t%10s\n", "PAYROLL-NUMBER", "FULL-NAME", "AMOUNT-OF-SALES", "COMMISSION", "TOTAL-SLARY");
  printf("\t%5d  \t%5s  \t%5d   \t%15.2f  \t%15.2f\n", pay_roll_no, full_name, amount_of_sales, commission, total_salary);

  } else if(amount_of_sales >= 1000 && amount_of_sales <= 5000){
  commission = amount_of_sales * 0.03;
  total_salary =  commission + 25000;

  printf("************* Calculated Output ******************\n");

 printf("\t%5s \t%5s  \t%5s   \t%10s    \t%10s\n", "PAYROLL-NUMBER", "FULL-NAME", "AMOUNT-OF-SALES", "COMMISSION", "TOTAL-SLARY");
  printf("\t%5d  \t%5s  \t%5d   \t%15.2f  \t%15.2f\n", pay_roll_no, full_name, amount_of_sales, commission, total_salary);
  } else if(amount_of_sales >= 5000 && amount_of_sales <= 10000){
    commission = amount_of_sales * 0.05;
  total_salary =  commission + 25000;

   printf("************* Calculated Output ******************\n");

printf("\t%5s \t%5s  \t%5s   \t%10s    \t%10s\n", "PAYROLL-NUMBER", "FULL-NAME", "AMOUNT-OF-SALES", "COMMISSION", "TOTAL-SLARY");
  printf("\t%5d  \t%5s  \t%5d   \t%15.2f  \t%15.2f\n", pay_roll_no, full_name, amount_of_sales, commission, total_salary);
  } else if(amount_of_sales > 10000){
  commission = amount_of_sales * 0.1;
  total_salary =  commission + 25000;

  printf("************* Calculated Output ******************\n");

printf("\t%5s \t%5s  \t%5s   \t%10s    \t%10s\n", "PAYROLL-NUMBER", "FULL-NAME", "AMOUNT-OF-SALES", "COMMISSION", "TOTAL-SLARY");
  printf("\t%5d  \t%5s  \t%5d   \t%15.2f  \t%15.2f\n", pay_roll_no, full_name, amount_of_sales, commission, total_salary);
  }

  counter++;
 }

}
